package riscv.IDU
import chisel3._
import chisel3.util._

/**
  * IDU
  */
class IDU extends Module {
  val io = IO(new Bundle {
    val Inst= Input(UInt(32.W))
    val RegWrite=Output(UInt(1.W))
    val MemWrite=Output(UInt(1.W))
    val AluOp=Output(UInt(32.W))
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

  var ImmI=Wire(UInt(64.W));
  var ImmS=Wire(UInt(64.W));
  var ImmJ=Wire(UInt(64.W));
  var ImmU=Wire(UInt(64.W));
  var ImmB=Wire(UInt(64.W));

  ImmI := io.Inst(31,20);
  ImmS := (io.Inst(31,25)<<5) | io.Inst(11,7);
  ImmB := (io.Inst(31,31)<<12) | (io.Inst(30,25)<<5) | (io.Inst(11,8)<<1) | (io.Inst(7,7)<<11);
  ImmU := (io.Inst(31,12)<<12);
  ImmJ := (io.Inst(31,31)<<20) | (io.Inst(30,21)<<1) | (io.Inst(20,20)<<11) | (io.Inst(19,12)<<12);

  val ebreak_in=Wire(UInt(1.W));
  var ebreak=Module(new Ebreak);
  ebreak_in := MuxLookup(io.Inst,0.U,Array("h00100073".U -> 1.U));
  ebreak.io.ebreak_in := ebreak_in;

  var opcode = io.Inst(6,0);
  var inst_type = Wire(UInt(3.W)); //0 -> R, 1 -> I, 2 -> S, 3 -> B, 4 -> U, 5 -> J
  var contr_code = Wire(UInt(23.W));

  inst_type := MuxLookup(opcode,0.U,Array(
    "b00101_11".U -> 4.U, //auipc
    "b00000_11".U -> 1.U, //ld
    "b01000_11".U -> 2.U, //sd
    "b00100_11".U -> 1.U, //addi,slli,srli,srai,xori,ori
    "b01100_11".U -> 0.U, //add,sll,srl,sra,sub,xor,or
    "b00110_11".U -> 1.U, //addiw
    "b01110_11".U -> 0.U, //addw,subw
    "b01101_11".U -> 4.U, //lui

    "b11011_11".U -> 5.U, //jal
    "b11001_11".U -> 1.U, //jalr
    "b11000_11".U -> 3.U, //beq
    "b00000_11".U -> 1.U, //lw
    "b00100_11".U -> 1.U, //sltiu
    "b11000_11".U -> 3.U, //bne
  ))

  io.Imm := MuxLookup(inst_type,0.U,Array(
    1.U -> ImmI,
    2.U -> ImmS,
    3.U -> ImmB,
    4.U -> ImmU,
    5.U -> ImmJ
  ))

  //RegWrite 1 MemWrite 1 AluOp 5 PcSrc 5 RinCtl 3 MemMask 8
  contr_code := Lookup(io.Inst,0.U(23.W),Array(
    BitPat("b???????_?????_?????_???_?????_00101_11") -> "b1_0_00011_00000_000_00000000".U, //auipc
    BitPat("b???????_?????_?????_011_?????_00000_11") -> "b1_0_00001_00000_001_00000000".U, //ld
    BitPat("b???????_?????_?????_011_?????_01000_11") -> "b0_1_00001_00000_000_11111111".U, //sd
    BitPat("b???????_?????_?????_000_?????_00100_11") -> "b1_0_00001_00000_000_00000000".U, //addi
    BitPat("b0000000_?????_?????_000_?????_01100_11") -> "b1_0_00010_00000_000_00000000".U, //add
    BitPat("b???????_?????_?????_000_?????_00110_11") -> "b1_0_00001_00000_011_00000000".U, //addiw
    BitPat("b0000000_?????_?????_000_?????_01110_11") -> "b1_0_00010_00000_011_00000000".U, //addw
    BitPat("b0000000_?????_?????_001_?????_01100_11") -> "b1_0_01001_00000_000_00000000".U, //sll
    BitPat("b000000?_?????_?????_001_?????_00100_11") -> "b1_0_01001_00000_000_00000000".U, //slli
    BitPat("b0000000_?????_?????_101_?????_01100_11") -> "b1_0_01010_00000_000_00000000".U, //srl
    BitPat("b000000?_?????_?????_101_?????_00100_11") -> "b1_0_01010_00000_000_00000000".U, //srli
    BitPat("b0100000_?????_?????_101_?????_01100_11") -> "b1_0_01011_00000_000_00000000".U, //sra
    BitPat("b010000?_?????_?????_101_?????_00100_11") -> "b1_0_01011_00000_000_00000000".U, //srai
    BitPat("b0100000_?????_?????_000_?????_01100_11") -> "b1_0_01000_00000_000_00000000".U, //sub
    BitPat("b0100000_?????_?????_000_?????_01110_11") -> "b1_0_01000_00000_011_00000000".U, //subw
    BitPat("b???????_?????_?????_???_?????_01101_11") -> "b1_0_01100_00000_000_00000000".U, //lui
    BitPat("b0000000_?????_?????_100_?????_01100_11") -> "b1_0_01101_00000_000_00000000".U, //xor
    BitPat("b???????_?????_?????_100_?????_00100_11") -> "b1_0_01110_00000_000_00000000".U, //xori
    BitPat("b0000000_?????_?????_110_?????_01100_11") -> "b1_0_01111_00000_000_00000000".U, //or
    BitPat("b???????_?????_?????_110_?????_00100_11") -> "b1_0_10000_00000_000_00000000".U, //ori

    BitPat("b???????_?????_?????_???_?????_11011_11") -> "b1_0_00100_00001_000_00000000".U, //jal
    BitPat("b???????_?????_?????_000_?????_11001_11") -> "b1_0_00100_00010_000_00000000".U, //jalr
    BitPat("b???????_?????_?????_000_?????_11000_11") -> "b0_0_00101_00011_000_00000000".U, //beq
    BitPat("b???????_?????_?????_010_?????_00000_11") -> "b1_0_00001_00000_010_00000000".U, //lw
    BitPat("b???????_?????_?????_011_?????_00100_11") -> "b1_0_00110_00000_000_00000000".U, //sltiu
    BitPat("b???????_?????_?????_001_?????_11000_11") -> "b0_0_00111_00011_000_00000000".U, //bne
  ))

  io.RegWrite := contr_code(22,22);
  io.MemWrite := contr_code(21,21);
  io.AluOp := contr_code(20,16);
  io.PcSrc := contr_code(15,11);
  io.RinCtl := contr_code(10,8);
  io.MemMask := contr_code(7,0);
}
