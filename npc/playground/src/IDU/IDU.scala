package riscv.IDU
import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum

/**
  * IDU
  */
class IDU extends Module {
  val io = IO(new Bundle {
    val Inst= Input(UInt(32.W))
    val RegWrite=Output(UInt(1.W))
    val MemWrite=Output(UInt(1.W))
    val AluOp=Output(UInt(5.W))
    val AluSrc1Op=Output(UInt(5.W))
    val AluSrc2Op=Output(UInt(5.W))

    val PcSrc=Output(UInt(5.W))
    val RinCtl=Output(UInt(3.W))
    val MemMask=Output(UInt(8.W))
    
    val Rdest=Output(UInt(5.W))
    val R1=Output(UInt(5.W))
    val R2=Output(UInt(5.W))
    val Imm=Output(UInt(64.W))
  })
  io.Rdest := io.Inst(11,7);
  io.R1 := io.Inst(19,15);
  io.R2 := io.Inst(24,20);

  def SETX(a:UInt, b:Int):UInt = Cat(File(64,a(b-1)) ,a)(63,0);

  def I(): UInt = SETX(io.Inst(31,20), 12);
  def S(): UInt = SETX(((io.Inst(31,25)<<5) | (io.Inst(11,7))), 12);
  def B(): UInt = SETX(((io.Inst(31,31)<<12) | (io.Inst(30,25)<<5) | (io.Inst(11,8)<<1) | (io.Inst(7,7)<<11)), 13);
  def U(): UInt = SETX((io.Inst(31,12)<<12), 32);
  def J(): UInt = SETX(((io.Inst(31,31)<<20) | (io.Inst(30,21)<<1) | (io.Inst(20,20)<<11) | (io.Inst(19,12)<<12)), 21);

  val ebreak_in=Wire(UInt(1.W));
  var ebreak=Module(new Ebreak);
  ebreak_in := MuxLookup(io.Inst,0.U,Array("h00100073".U -> 1.U));
  ebreak.io.ebreak_in := ebreak_in;

  var opcode = io.Inst(6,0);

  object AluOpcode extends ChiselEnum {
      val add   = "b00001".U 
      val sub   = "b00010".U 
      val mul   = "b00011".U
      val div   = "b00100".U
      val divu  = "b00101".U
      val rem   = "b00110".U 
      val remu  = "b00111".U 
      val beq   = "b01000".U 
      val bne   = "b01001".U
      val bltu  = "b01010".U 
      val sltu  = "b01010".U 
      val bgeu  = "b01011".U 
      val blt   = "b01100".U 
      val slt   = "b01100".U 
      val bge   = "b01101".U 
      val sll   = "b01110".U 
      val srl   = "b01111".U 
      val sra   = "b10000".U 
      val xor   = "b10001".U 
      val or    = "b10010".U
      val and   = "b10011".U 
  }

  object AluSrc1Opcode extends ChiselEnum{
    val r1        = 0.U
    val pc        = 1.U
    val imm_31_12 = 2.U
  }

  object AluSrc2Opcode extends ChiselEnum{
    val r2        = 0.U
    val r2_5_0    = 1.U
    val imm_5_0   = 2.U
    val imm_12    = 3.U
    val imm       = 4.U
    val imm_4     = 6.U
    val pc        = 7.U
  }

  object PcSrccode extends ChiselEnum{
    val add4        = 0.U
    val jal         = 1.U
    val jalr        = 2.U
    val branch      = 3.U
  }

  object RinCtlcode extends ChiselEnum{
    val aluout    = 0.U
    val memout    = 1.U
    val aluoutw   = 2.U
    val memoutw   = 3.U
  }

  io.Imm := MuxLookup(opcode,0.U,Array(
    "b00101_11".U -> U(), //auipc
    "b00000_11".U -> I(), //ld
    "b01000_11".U -> S(), //sd
    "b00100_11".U -> I(), //addi,slli,srli,srai,xori,ori,andi,slti
    "b01100_11".U -> R(), //add,sll,srl,sra,sub,xor,or,and,slt
    "b00110_11".U -> I(), //addiw
    "b01110_11".U -> R(), //addw,subw
    "b01101_11".U -> U(), //lui

    "b11011_11".U -> J(), //jal
    "b11001_11".U -> I(), //jalr
    "b11000_11".U -> B(), //beq
    "b00000_11".U -> I(), //lw
    "b00100_11".U -> I(), //sltiu
    "b11000_11".U -> B(), //bne
  ))
  

  //RegWrite 1 MemWrite 1 AluSrc1Op 5 AluSrc2Op 5 AluOp 5 PcSrc 5 RinCtl 3 MemMask 8
  var contr_code := ListLookup(io.Inst,List(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U),Array("b1_0_00001_00101_00001_00000_000_".U
    BitPat("b???????_?????_?????_???_?????_00101_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.pc,     AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //auipc
    BitPat("b???????_?????_?????_011_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.add, PcSrccode.add4,   RinCtlcode.memout, "b00000000".U), //ld
    BitPat("b???????_?????_?????_011_?????_01000_11") -> List(0.U, 1.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluout, "b11111111".U), //sd
    BitPat("b???????_?????_?????_000_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //addi
    BitPat("b0000000_?????_?????_000_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //add
    BitPat("b???????_?????_?????_000_?????_00110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluoutw,"b00000000".U), //addiw
    BitPat("b0000000_?????_?????_000_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //addw
    BitPat("b0000000_?????_?????_001_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2_5_0, AluOpcode.sll, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //sll
    BitPat("b000000?_?????_?????_001_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm5_0, AluOpcode.sll, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //slli
    BitPat("b0000000_?????_?????_101_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2_5_0, AluOpcode.srl, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //srl
    BitPat("b000000?_?????_?????_101_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm5_0, AluOpcode.srl, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //srli
    BitPat("b0100000_?????_?????_101_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2_5_0, AluOpcode.sra, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //sra
    BitPat("b010000?_?????_?????_101_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm5_0, AluOpcode.sra, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //srai
    BitPat("b0100000_?????_?????_000_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.sub, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //sub
    BitPat("b0100000_?????_?????_000_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.sub, PcSrccode.add4,   RinCtlcode.aluoutw,"b00000000".U), //subw
    BitPat("b???????_?????_?????_???_?????_01101_11") -> List(1.U, 0.U, AluSrc1Opcode.imm_31_12, AluSrc2Opcode.imm_12, AluOpcode.sll, PcSrccode.add4,   RinCtlcode.aluoutw,"b00000000".U), //lui
    BitPat("b0000000_?????_?????_100_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.xor, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //xor
    BitPat("b???????_?????_?????_100_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.xor, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //xor
    BitPat("b0000000_?????_?????_110_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.or,  PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //or
    BitPat("b???????_?????_?????_110_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.or,  PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //ori
    BitPat("b0000000_?????_?????_111_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //and
    BitPat("b???????_?????_?????_111_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.add, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //andi
    BitPat("b0000000_?????_?????_010_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.slt, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //slt
    BitPat("b???????_?????_?????_010_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.slt, PcSrccode.add4,   RinCtlcode.aluout, "b00000000".U), //slt

    BitPat("b???????_?????_?????_???_?????_11011_11") -> List(1.U, 0.U, AluSrc1Opcode.pc,        AluSrc2Opcode.imm_4,  AluOpcode.add, PcSrccode.jal,    RinCtlcode.aluout, "b00000000".U), //jal
    BitPat("b???????_?????_?????_000_?????_11001_11") -> List(1.U, 0.U, AluSrc1Opcode.pc,        AluSrc2Opcode.imm_4,  AluOpcode.add, PcSrccode.jalr,   RinCtlcode.aluout, "b00000000".U), //jalr
    BitPat("b???????_?????_?????_000_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.beq, PcSrccode.branch, RinCtlcode.aluout, "b00000000".U), //beq
    BitPat("b???????_?????_?????_010_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.beq, PcSrccode.branch, RinCtlcode.memoutw,"b00000000".U), //lw
    BitPat("b???????_?????_?????_011_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,    AluOpcode.sltu,PcSrccode.branch, RinCtlcode.memoutw,"b00000000".U), //lw
    BitPat("b???????_?????_?????_001_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,     AluOpcode.ben, PcSrccode.branch, RinCtlcode.memoutw,"b00000000".U), //lw
  ))

  io.RegWrite := contr_code(7);
  io.MemWrite := contr_code(6);
  io.AluSrc1Op := contr_code(5);
  io.AluSrc2Op := contr_code(4);
  io.AluOp := contr_code(3);
  io.PcSrc := contr_code(2);
  io.RinCtl := contr_code(1);
  io.MemMask := contr_code(0);
}
