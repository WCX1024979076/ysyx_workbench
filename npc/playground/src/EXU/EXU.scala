package riscv.EXU
import riscv.Common._
import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum
/**
  * EXU
  */
class EXU extends Module {
  class exu_in extends Bundle{
    val DataR1 = UInt(64.W)
    val DataR2 = UInt(64.W)
    val IDUWait = UInt(1.W)
  }
  class exu_out extends Bundle{
    val EXUClear = Output(UInt(1.W))
    val EXUPc = Output(UInt(64.W))
  }
  val io = IO(new Bundle {
    val ifu_data_in = Input(new ifu_data())
    val idu_data_in = Input(new idu_data())
    val idu_ctrl_in = Input(new idu_ctrl())
    val exu_data_in = Input(new exu_in())
    val ifu_data_out = Output(new ifu_data())
    val idu_data_out = Output(new idu_data())
    val idu_ctrl_out = Output(new idu_ctrl())
    val exu_data_out = Output(new exu_data())
    val exu_ctrl_out = Output(new exu_out())
  })
  val ifu_data_reg = RegInit(Reg(new ifu_data()))
  val idu_data_reg = RegInit(Reg(new idu_data()))
  val idu_ctrl_reg = RegInit(Reg(new idu_ctrl()))
  val exu_data_reg = RegInit(Reg(new exu_data()))

  ifu_data_reg := io.ifu_data_in
  idu_data_reg := io.idu_data_in
  idu_ctrl_reg := io.idu_ctrl_in

  def SEXT(a:UInt, b:Int):UInt = Cat(Fill(64-b, a(b-1)) ,a(b-1,0))(63,0);

  var AluSrc1 = Wire(UInt(64.W));
  var AluSrc2 = Wire(UInt(64.W));

  AluSrc1 := MuxLookup(io.idu_ctrl_in.AluSrc1Op,io.exu_data_in.DataR1 ,Array(
    "b00000".U -> io.exu_data_in.DataR1,
    "b00001".U -> io.ifu_data_in.PcVal,
    "b00010".U -> io.idu_data_in.Imm(31,12),
    "b00011".U -> io.exu_data_in.DataR1(31,0)
  ));

  AluSrc2 := MuxLookup(io.idu_ctrl_in.AluSrc2Op,io.exu_data_in.DataR2,Array(
    "b00000".U -> io.exu_data_in.DataR2,
    "b00001".U -> io.exu_data_in.DataR2(5,0),
    "b00010".U -> io.idu_data_in.Imm(5,0),
    "b00011".U -> 12.U,
    "b00100".U -> io.idu_data_in.Imm,
    "b00101".U -> "h4".U(64.W),
    "b00110".U -> io.exu_data_in.DataR2(31,0),
    "b00111".U -> io.exu_data_in.DataR2(4,0)
  ));

   val AluOutTmp = Wire(UInt(64.W));
   val ZeroTmp = Wire(UInt(1.W));
   val SignSTmp = Wire(UInt(1.W));
   val SignUTmp = Wire(UInt(1.W));

   AluOutTmp:= MuxLookup(io.idu_ctrl_in.AluOp,0.U, Array(
    "b00001".U -> (AluSrc1 + AluSrc2).asUInt(),                                //add
    "b00010".U -> (AluSrc1 - AluSrc2).asUInt(),                                //sub
    "b00011".U -> (AluSrc1 * AluSrc2).asUInt(),                                //mul
    "b00100".U -> (AluSrc1.asSInt() / AluSrc2.asSInt()).asUInt(),              //div
    "b00101".U -> (AluSrc1 / AluSrc2).asUInt(),                                //divu
    "b00110".U -> (AluSrc1.asSInt() % AluSrc2.asSInt()).asUInt(),              //rem
    "b00111".U -> (AluSrc1 % AluSrc2).asUInt(),                                //remu
    "b01000".U -> (AluSrc1 << AluSrc2(5,0)).asUInt(),                          //sll
    "b01001".U -> (AluSrc1 >> AluSrc2(5,0)).asUInt(),                          //srl
    "b01010".U -> (AluSrc1.asSInt() >> AluSrc2(5,0)).asUInt(),                 //sra
    "b01011".U -> (AluSrc1 ^ AluSrc2).asUInt(),                                //xor
    "b01100".U -> (AluSrc1 | AluSrc2).asUInt(),                                //or
    "b01101".U -> (AluSrc1 & AluSrc2).asUInt(),                                //and
    "b01110".U -> (AluSrc1(31,0) << AluSrc2(5,0)).asUInt(),                    //sll32
    "b01111".U -> (AluSrc1(31,0) >> AluSrc2(5,0)).asUInt(),                    //srl32
    "b10000".U -> (AluSrc1(31,0).asSInt() >> AluSrc2(5,0)).asUInt(),           //sra32
    "b10001".U -> (AluSrc1(31,0).asSInt() / AluSrc2(31,0).asSInt()).asUInt(),  //div32
  ))

  ZeroTmp := ( AluOutTmp  === 0.U);

  SignSTmp := MuxLookup(Cat(AluSrc1(63),AluSrc2(63)), 0.U, Array(
    "b10".U -> 0.U,
    "b01".U -> 1.U,
    "b00".U -> ~AluOutTmp(63),
    "b11".U -> ~AluOutTmp(63),
  ));

  SignUTmp := MuxLookup(Cat(AluSrc1(63),AluSrc2(63)), 0.U, Array(
    "b10".U -> 1.U,
    "b01".U -> 0.U,
    "b00".U -> ~AluOutTmp(63),
    "b11".U -> ~AluOutTmp(63),
  ));

  io.exu_ctrl_out.EXUClear := io.idu_ctrl_in.IDUFlag & (~io.exu_data_in.IDUWait) & (((io.idu_ctrl_in.PcSrc === PcSrccode.bne).asUInt() & (~ZeroTmp)) | ((io.idu_ctrl_in.PcSrc === PcSrccode.beq).asUInt() & ZeroTmp) | ((io.idu_ctrl_in.PcSrc === PcSrccode.blt).asUInt() & (~SignSTmp)) | ((io.idu_ctrl_in.PcSrc === PcSrccode.bge).asUInt() & SignSTmp) | ((io.idu_ctrl_in.PcSrc === PcSrccode.bltu).asUInt & (~SignUTmp)) | ((io.idu_ctrl_in.PcSrc === PcSrccode.bgeu).asUInt & SignUTmp) | (io.idu_ctrl_in.PcSrc === PcSrccode.jal).asUInt() | (io.idu_ctrl_in.PcSrc === PcSrccode.jalr).asUInt());

  io.exu_ctrl_out.EXUPc := MuxLookup(io.idu_ctrl_in.PcSrc, io.ifu_data_in.PcVal + "h4".U, Array(
    0x0.U -> (io.ifu_data_in.PcVal + "h4".U),
    0x1.U -> (io.ifu_data_in.PcVal + SEXT(io.idu_data_in.Imm(20,0),21)),         //jal
    0x2.U -> ((io.exu_data_in.DataR1 + io.idu_data_in.Imm) & (~(1.U(64.W)))), //jalr
    0x3.U -> MuxLookup(~ZeroTmp, io.ifu_data_in.PcVal+"h4".U, Array(    //bne
      1.U -> (io.ifu_data_in.PcVal + SEXT(io.idu_data_in.Imm(12,0),13))
      )),
    0x4.U -> MuxLookup(ZeroTmp, io.ifu_data_in.PcVal+"h4".U, Array(     //beq
      1.U -> (io.ifu_data_in.PcVal + SEXT(io.idu_data_in.Imm(12,0),13))
      )),
    0x5.U -> MuxLookup(~SignSTmp, io.ifu_data_in.PcVal+"h4".U, Array(   //blt
      1.U -> (io.ifu_data_in.PcVal + SEXT(io.idu_data_in.Imm(12,0),13))
      )),
    0x6.U -> MuxLookup(SignSTmp, io.ifu_data_in.PcVal+"h4".U, Array(    //bge
      1.U -> (io.ifu_data_in.PcVal + SEXT(io.idu_data_in.Imm(12,0),13))
      )),
    0x7.U -> MuxLookup(~SignUTmp, io.ifu_data_in.PcVal+"h4".U, Array(   //bltu
      1.U -> (io.ifu_data_in.PcVal + SEXT(io.idu_data_in.Imm(12,0),13))
      )),
    0x8.U -> MuxLookup(SignUTmp, io.ifu_data_in.PcVal+"h4".U, Array(    //bgeu
      1.U -> (io.ifu_data_in.PcVal + SEXT(io.idu_data_in.Imm(12,0),13))
      )),
  ));
  exu_data_reg.DataR2 := io.exu_data_in.DataR2;
  exu_data_reg.Zero := ZeroTmp;
  exu_data_reg.SignS := SignSTmp;
  exu_data_reg.SignU := SignUTmp;
  exu_data_reg.AluOut := AluOutTmp;
  exu_data_reg.EXUFlag := (io.idu_ctrl_in.IDUFlag & (~io.exu_data_in.IDUWait));

  io.ifu_data_out := ifu_data_reg
  io.idu_data_out := idu_data_reg
  io.idu_ctrl_out := idu_ctrl_reg
  io.exu_data_out := exu_data_reg
}
