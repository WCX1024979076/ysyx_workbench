package riscv.EXU
import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum

/**
  * EXU
  */
class EXU extends Module {
  val io = IO(new Bundle {
    val Pc = Input(UInt(64.W))
    val RegWrite = Input(UInt(1.W))
    val MemWrite = Input(UInt(1.W))
    val AluOp = Input(UInt(5.W))
    val AluSrc1Op = Input(UInt(5.W))
    val AluSrc2Op = Input(UInt(5.W))
    val PcSrc = Input(UInt(5.W))
    val RinCtl = Input(UInt(4.W))
    val DataR1 = Input(UInt(64.W))
    val DataR2 = Input(UInt(64.W))
    val Imm = Input(UInt(64.W))
    val EbreakIn = Input(UInt(1.W))
    val Rdest = Input(UInt(5.W))
    val MemMask = Input(UInt(8.W))
    val IDUFlag = Input(UInt(1.W))

    val MemMaskOut = Output(UInt(8.W))
    val RdestOut = Output(UInt(5.W))
    val DataR2Out = Output(UInt(64.W))
    val MemWriteOut = Output(UInt(1.W))
    val Zero = Output(UInt(1.W))
    val SignU = Output(UInt(1.W))
    val SignS = Output(UInt(1.W))
    val AluOut = Output(UInt(64.W))
    val RegWriteOut = Output(UInt(1.W))
    val RinCtlOut = Output(UInt(4.W))
    val EXUFlag = Output(UInt(1.W))
    val EbreakInOut = Output(UInt(1.W))
    val PcVal = Output(UInt(64.W))

    val EXUClear = Output(UInt(1.W))
    val EXUPc = Output(UInt(64.W))
  })

  object PcSrccode extends ChiselEnum{
    val add4      = 0.U
    val jal       = 1.U
    val jalr      = 2.U
    val bne       = 3.U
    val beq       = 4.U
    val blt       = 5.U
    val bge       = 6.U
    val bltu      = 7.U
    val bgeu      = 8.U
  }

  def SEXT(a:UInt, b:Int):UInt = Cat(Fill(64-b, a(b-1)) ,a(b-1,0))(63,0);

  val MemMaskOutReg = RegInit(0.U(8.W))
  val RdestOutReg = RegInit(0.U(5.W))
  val DataR2OutReg = RegInit(0.U(64.W)) 
  val MemWriteOutReg = RegInit(0.U(1.W))
  val ZeroReg = RegInit(0.U(1.W))
  val SignUReg = RegInit(0.U(1.W))
  val SignSReg = RegInit(0.U(1.W))
  val AluOutReg = RegInit(0.U(64.W))
  val RegWriteOutReg = RegInit(0.U(1.W))
  val RinCtlOutReg = RegInit(0.U(4.W))
  val EXUFlagReg = RegInit(0.U(1.W))
  val EbreakInOutReg = RegInit(0.U(1.W))
  val PcValReg = RegInit(0.U(64.W))

  MemMaskOutReg := io.MemMask;
  RdestOutReg := io.Rdest;
  DataR2OutReg := io.DataR2;
  MemWriteOutReg := io.MemWrite;
  RegWriteOutReg := io.RegWrite;
  RinCtlOutReg := io.RinCtl;
  EbreakInOutReg := io.EbreakIn;
  PcValReg := io.Pc;

  var AluSrc1 = Wire(UInt(64.W));
  var AluSrc2 = Wire(UInt(64.W));

  AluSrc1 := MuxLookup(io.AluSrc1Op,io.DataR1 ,Array(
    "b00000".U -> io.DataR1,
    "b00001".U -> io.Pc,
    "b00010".U -> io.Imm(31,12),
    "b00011".U -> io.DataR1(31,0)
  ));

  AluSrc2 := MuxLookup(io.AluSrc2Op,io.DataR2,Array(
    "b00000".U -> io.DataR2,
    "b00001".U -> io.DataR2(5,0),
    "b00010".U -> io.Imm(5,0),
    "b00011".U -> 12.U,
    "b00100".U -> io.Imm,
    "b00101".U -> "h4".U(64.W),
    "b00110".U -> io.DataR2(31,0)
  ));

   val AluOutTmp = Wire(UInt(64.W));
   val ZeroTmp = Wire(UInt(1.W));
   val SignSTmp = Wire(UInt(1.W));
   val SignUTmp = Wire(UInt(1.W));

   AluOutTmp:= MuxLookup(io.AluOp,0.U, Array(
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

  AluOutReg := AluOutTmp;
  ZeroReg := ZeroTmp;
  SignSReg := SignSTmp;
  SignUReg := SignUTmp;

  io.MemMaskOut := MemMaskOutReg;
  io.RdestOut := RdestOutReg;
  io.DataR2Out := DataR2OutReg;
  io.MemWriteOut := MemWriteOutReg;
  io.Zero := ZeroReg;
  io.SignU := SignUReg;
  io.SignS := SignSReg;
  io.AluOut := AluOutReg;
  io.RegWriteOut := RegWriteOutReg;
  io.RinCtlOut := RinCtlOutReg;
  io.EXUFlag := EXUFlagReg;
  io.EbreakInOut := EbreakInOutReg;
  io.PcVal := PcValReg;

  io.EXUClear := io.IDUFlag & (((io.PcSrc === PcSrccode.bne).asUInt() & (~ZeroTmp)) | ((io.PcSrc === PcSrccode.beq).asUInt() & ZeroTmp) | ((io.PcSrc === PcSrccode.blt).asUInt() & (~SignSTmp)) | ((io.PcSrc === PcSrccode.bge).asUInt() & SignSTmp) | ((io.PcSrc === PcSrccode.bltu).asUInt & (~SignUTmp)) | ((io.PcSrc === PcSrccode.bgeu).asUInt & SignUTmp) | (io.PcSrc === PcSrccode.jal).asUInt() | (io.PcSrc === PcSrccode.jalr).asUInt() );

  io.EXUPc := MuxLookup(io.PcSrc, io.Pc + "h4".U, Array(
    0x0.U -> (io.Pc + "h4".U),
    0x1.U -> (io.Pc + SEXT(io.Imm(20,0),21)),         //jal
    0x2.U -> ((io.DataR1 + io.Imm) & (~(1.U(64.W)))), //jalr
    0x3.U -> MuxLookup(~ZeroTmp, io.Pc+"h4".U, Array(    //bne
      1.U -> (io.Pc + SEXT(io.Imm(12,0),13))
      )),
    0x4.U -> MuxLookup(ZeroTmp, io.Pc+"h4".U, Array(     //beq
      1.U -> (io.Pc + SEXT(io.Imm(12,0),13))
      )),
    0x5.U -> MuxLookup(~SignSTmp, io.Pc+"h4".U, Array(   //blt
      1.U -> (io.Pc + SEXT(io.Imm(12,0),13))
      )),
    0x6.U -> MuxLookup(SignSTmp, io.Pc+"h4".U, Array(    //bge
      1.U -> (io.Pc + SEXT(io.Imm(12,0),13))
      )),
    0x7.U -> MuxLookup(~SignUTmp, io.Pc+"h4".U, Array(   //bltu
      1.U -> (io.Pc + SEXT(io.Imm(12,0),13))
      )),
    0x8.U -> MuxLookup(SignUTmp, io.Pc+"h4".U, Array(    //bgeu
      1.U -> (io.Pc + SEXT(io.Imm(12,0),13))
      )),
  ));
  EXUFlagReg := (io.IDUFlag);
}
