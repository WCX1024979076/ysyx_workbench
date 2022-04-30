package riscv.EXU
import chisel3._
import chisel3.util._
/**
  * EXU
  */
class EXU extends Module {
  val io = IO(new Bundle {
    val Rdest=Input(UInt(5.W))
    val R1=Input(UInt(5.W))
    val R2=Input(UInt(5.W))
    val Imm=Input(UInt(64.W))
    val RegWrite=Input(UInt(1.W))
    val MemWrite=Input(UInt(1.W))
    val AluOp=Input(UInt(5.W))
    val AluSrc1Op=Input(UInt(5.W))
    val AluSrc2Op=Input(UInt(5.W))
    val PcSrc=Input(UInt(5.W))
    val RinCtl=Input(UInt(3.W))
    val MemMask=Input(UInt(8.W))

    val PcVal=Output(UInt(64.W))
  })
  var AluOut = Wire(UInt(64.W));
  var MemOut = Wire(UInt(64.W));
  var DataR1 = Wire(UInt(64.W));
  var DataR2 = Wire(UInt(64.W));
  var DataIn = Wire(UInt(64.W));
  var Regs = RegInit(VecInit(Seq.fill(32)(0.U(64.W))));
  var mem = Module(new Mem);
  var difftest = Module(new Difftest);
  var pc = RegInit("h80000000".U(64.W));
  var AluSrc1 = Wire(UInt(64.W))
  var AluSrc2 = Wire(UInt(64.W))

  difftest.io.gpr := Regs;
  difftest.io.PcVal := pc;

  def SETX(a:UInt, b:Int):UInt = Cat(Fill(64-b, a(b-1)) ,a(b-1,0))(63,0);

  DataR1 := Regs(io.R1);
  DataR2 := Regs(io.R2);
  DataIn := MuxLookup(io.RinCtl,0.U,Array(
    0x0.U -> AluOut,
    0x1.U -> MemOut,
    0x2.U -> SETX(AluOut(7,0),8),
    0x3.U -> SETX(MemOut(7,0),8)
    0x4.U -> SETX(AluOut(15,0),15),
    0x5.U -> SETX(MemOut(15,0),15)
    0x6.U -> SETX(AluOut(31,0),32),
    0x7.U -> MemOut(7,0),
    0x8.U -> MemOut(15,0),
    0x9.U -> MemOut(31,0),
  ));
  when(io.RegWrite.asBool)
  {
    Regs(io.Rdest) := DataIn;
  };
  
  MemOut := mem.io.Rdata;
  mem.io.Raddr := AluOut;
  mem.io.Waddr := AluOut;
  mem.io.Wdata := DataR2;
  mem.io.Wmask := io.MemMask;
  mem.io.MemWrite := io.MemWrite;

  pc := MuxLookup(io.PcSrc, pc + "h4".U, Array(
    0x0.U -> (pc + "h4".U),
    0x1.U -> (pc + Cat(Fill(43, io.Imm(20)), io.Imm(20,0))), //jal
    0x2.U -> ((DataR1 + io.Imm) & (~(1.U(64.W)))), //jalr
    0x3.U -> MuxLookup(AluOut, pc+"h4".U, Array(            //bne,beq
      1.U -> (pc +  Cat(Fill(51, io.Imm(12)), io.Imm(12,0)))
      ))
  ));

  AluSrc1 := MuxLookup(io.AluSrc1Op,DataR1 ,Array(    
    "b00000".U -> DataR1,
    "b00001".U -> pc,
    "b00010".U -> io.Imm(31,12),
    "b00011".U -> DataR1(31,0)
  ));

  AluSrc2 := MuxLookup(io.AluSrc2Op,DataR2,Array(
    "b00000".U -> DataR2,
    "b00001".U -> DataR2(5,0),
    "b00010".U -> io.Imm(5,0),
    "b00011".U -> 12.U,
    "b00100".U -> io.Imm,
    "b00101".U -> "h4".U(64.W),
  ));

  AluOut := MuxLookup(io.AluOp,0.U, Array(
    "b00001".U -> (AluSrc1 + AluSrc2).asUInt(),                        //addi,ld,sd,add,auipc,jal,jalr
    "b00010".U -> (AluSrc1 - AluSrc2).asUInt(),                        //sub
    "b00011".U -> (AluSrc1 * AluSrc2).asUInt(),                        //mul
    //"b00100".U -> (AluSrc1.asSInt() / AluSrc2.asSInt()).asUInt(),    //div
    //"b00101".U -> (AluSrc1 / AluSrc2).asUInt(),                      //divu
    "b00110".U -> (AluSrc1.asSInt() % AluSrc2.asSInt()).asUInt(),      //rem
    "b00111".U -> (AluSrc1 % AluSrc2).asUInt(),                        //remu
    "b01000".U -> (AluSrc1 === AluSrc2).asUInt(),                      //beq
    "b01001".U -> (AluSrc1 =/= AluSrc2).asUInt(),                      //bne
    "b01010".U -> (AluSrc1 < AluSrc2).asUInt(),                        //sltiu,bltu
    "b01011".U -> (AluSrc1 >= AluSrc2).asUInt(),                       //bgeu
    "b01100".U -> (AluSrc1.asSInt() < AluSrc2.asSInt()).asUInt(),      //slt,sli,blt
    "b01101".U -> (AluSrc1.asSInt() >= AluSrc2.asSInt()).asUInt(),     //bge
    "b01110".U -> (AluSrc1 << AluSrc2(5,0)).asUInt(),                  //sll,slli,lui
    "b01111".U -> (AluSrc1 >> AluSrc2(5,0)).asUInt(),                  //srl,srli
    "b10000".U -> (AluSrc1.asSInt() >> AluSrc2(5,0)).asUInt(),         //sra,srai
    "b10001".U -> (AluSrc1 ^ AluSrc2).asUInt(),                        //xor,xori
    "b10010".U -> (AluSrc1 | AluSrc2).asUInt(),                        //or,ori
    "b10011".U -> (AluSrc1 & AluSrc2).asUInt(),                        //and,andi
  ))

  io.PcVal := pc;
  Regs(0) := 0.U(64.W);
}
