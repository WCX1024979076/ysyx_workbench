package riscv.IDU
import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum
import riscv.Common._

/**
  * IDU
  */
class IDU extends Module {
  class idu_in extends Bundle{
    val EXUClear = UInt(1.W)
    val IDUWait = UInt(1.W)
  }
  val io = IO(new Bundle {
    val idu_data_in = Input(new idu_in())
    val ifu_data_in = Input(new ifu_data())
    val ifu_data_out = Output(new ifu_data())
    val idu_data_out = Output(new idu_data())
    val idu_ctrl_out = Output(new idu_ctrl())
  })

  val ifu_data_reg = RegInit(Reg(new ifu_data()))
  val idu_data_reg = RegInit(Reg(new idu_data()))
  val idu_ctrl_reg = RegInit(Reg(new idu_ctrl()))

  def SEXT(a:UInt, b:Int):UInt = Cat(Fill(64-b, a(b-1)) ,a(b-1,0))(63,0);
  def R(): UInt = "h0".U(64.W);
  def I(): UInt = SEXT(io.ifu_data_in.Inst(31,20), 12);
  def S(): UInt = SEXT(((io.ifu_data_in.Inst(31,25)<<5) | (io.ifu_data_in.Inst(11,7))), 12);
  def B(): UInt = SEXT(((io.ifu_data_in.Inst(31,31)<<12) | (io.ifu_data_in.Inst(30,25)<<5) | (io.ifu_data_in.Inst(11,8)<<1) | (io.ifu_data_in.Inst(7,7)<<11)), 13);
  def U(): UInt = SEXT((io.ifu_data_in.Inst(31,12)<<12), 32);
  def J(): UInt = SEXT(((io.ifu_data_in.Inst(31,31)<<20) | (io.ifu_data_in.Inst(30,21)<<1) | (io.ifu_data_in.Inst(20,20)<<11) | (io.ifu_data_in.Inst(19,12)<<12)), 21);

  var opcode = io.ifu_data_in.Inst(6,0);

  when((~io.idu_data_in.IDUWait).asBool())
  {
    ifu_data_reg := io.ifu_data_in
    idu_data_reg.Rdest := io.ifu_data_in.Inst(11,7);
    idu_data_reg.R1 := io.ifu_data_in.Inst(19,15);
    idu_data_reg.R2 := io.ifu_data_in.Inst(24,20);
    idu_ctrl_reg.IDUFlag := (io.ifu_data_in.IFUFlag & (~io.idu_data_in.EXUClear));
    idu_ctrl_reg.EbreakIn := MuxLookup(io.ifu_data_in.Inst,0.U,Array("h00100073".U -> 1.U));

    idu_data_reg.Imm := MuxLookup(opcode,0.U,Array(
      "b00101_11".U -> U(), //auipc
      "b00000_11".U -> I(), //ld,lw,lb,lh,lbu,lhu
      "b01000_11".U -> S(), //sd,sb,sh,sw,
      "b00100_11".U -> I(), //addi,slli,srli,srai,xori,ori,andi,slti,sltiu
      "b01100_11".U -> R(), //add,sll,srl,sra,sub,xor,or,and,slt
      "b00110_11".U -> I(), //addiw
      "b01110_11".U -> R(), //addw,subw
      "b01101_11".U -> U(), //lui
      "b11011_11".U -> J(), //jal
      "b11001_11".U -> I(), //jalr
      "b11000_11".U -> B(), //beq,bne,blt,bltu,bge,bgeu
    ))

    //RegWrite 1 MemWrite 1 AluSrc1Op 5 AluSrc2Op 5 AluOp 5 PcSrc 5 RinCtl 3 MemMask 8
    var contr_code  = ListLookup(io.ifu_data_in.Inst,List(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U),Array(
      BitPat("b???????_?????_?????_???_?????_00101_11") -> List(1.U, 0.U, AluSrc1Opcode.pc,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //auipc
      BitPat("b???????_?????_?????_011_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.memout,   "b00000000".U), //ld
      BitPat("b???????_?????_?????_011_?????_01000_11") -> List(0.U, 1.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout,   "b11111111".U), //sd
      BitPat("b???????_?????_?????_000_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //addi
      BitPat("b0000000_?????_?????_000_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //add
      BitPat("b???????_?????_?????_000_?????_00110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //addiw
      BitPat("b0000000_?????_?????_000_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2,      AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //addw
      BitPat("b0000000_?????_?????_001_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2_5_0,  AluOpcode.sll,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //sll
      BitPat("b000000?_?????_?????_001_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm_5_0, AluOpcode.sll,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //slli
      BitPat("b0000000_?????_?????_101_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2_5_0,  AluOpcode.srl,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //srl
      BitPat("b000000?_?????_?????_101_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm_5_0, AluOpcode.srl,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //srli
      BitPat("b0100000_?????_?????_101_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2_5_0,  AluOpcode.sra,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //sra
      BitPat("b010000?_?????_?????_101_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm_5_0, AluOpcode.sra,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //srai
      BitPat("b0100000_?????_?????_000_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //sub
      BitPat("b0100000_?????_?????_000_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //subw
      BitPat("b???????_?????_?????_???_?????_01101_11") -> List(1.U, 0.U, AluSrc1Opcode.imm_31_12, AluSrc2Opcode.imm_12,  AluOpcode.sll,   PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //lui
      BitPat("b0000000_?????_?????_100_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.xor,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //xor
      BitPat("b???????_?????_?????_100_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.xor,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //xor
      BitPat("b0000000_?????_?????_110_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.or,    PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //or
      BitPat("b???????_?????_?????_110_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.or,    PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //ori
      BitPat("b0000000_?????_?????_111_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.and,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //and
      BitPat("b???????_?????_?????_111_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.and,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //andi
      BitPat("b0000000_?????_?????_010_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.add4,   RinCtlcode.NSignS,   "b00000000".U), //slt
      BitPat("b???????_?????_?????_010_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.sub,   PcSrccode.add4,   RinCtlcode.NSignS,   "b00000000".U), //slti
      BitPat("b0000000_?????_?????_011_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.add4,   RinCtlcode.NSignU,   "b00000000".U), //sltu
      BitPat("b???????_?????_?????_011_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.sub,   PcSrccode.add4,   RinCtlcode.NSignU,   "b00000000".U), //sltui
      BitPat("b???????_?????_?????_000_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.beq,    RinCtlcode.aluout,   "b00000000".U), //beq
      BitPat("b???????_?????_?????_001_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.bne,    RinCtlcode.aluout,   "b00000000".U), //bne
      BitPat("b???????_?????_?????_100_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.blt,    RinCtlcode.aluout,   "b00000000".U), //blt
      BitPat("b???????_?????_?????_101_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.bge,    RinCtlcode.aluout,   "b00000000".U), //bge
      BitPat("b???????_?????_?????_110_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.bltu,   RinCtlcode.aluout,   "b00000000".U), //bltu
      BitPat("b???????_?????_?????_111_?????_11000_11") -> List(0.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.sub,   PcSrccode.bgeu,   RinCtlcode.aluout,   "b00000000".U), //bgeu
      BitPat("b???????_?????_?????_???_?????_11011_11") -> List(1.U, 0.U, AluSrc1Opcode.pc,        AluSrc2Opcode.imm_4,   AluOpcode.add,   PcSrccode.jal,    RinCtlcode.aluout,   "b00000000".U), //jal
      BitPat("b???????_?????_?????_000_?????_11001_11") -> List(1.U, 0.U, AluSrc1Opcode.pc,        AluSrc2Opcode.imm_4,   AluOpcode.add,   PcSrccode.jalr,   RinCtlcode.aluout,   "b00000000".U), //jalr
      BitPat("b000000?_?????_?????_101_?????_00110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.imm_5_0, AluOpcode.srl32, PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //srliw
      BitPat("b???????_?????_?????_000_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.memout8,  "b00000000".U), //lb
      BitPat("b???????_?????_?????_001_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.memout16, "b00000000".U), //lh
      BitPat("b???????_?????_?????_100_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.memout8u, "b00000000".U), //lbu
      BitPat("b???????_?????_?????_101_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.memout16u,"b00000000".U), //lhu
      BitPat("b???????_?????_?????_010_?????_00000_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.memout32, "b00000000".U), //lw
      BitPat("b???????_?????_?????_000_?????_01000_11") -> List(0.U, 1.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000001".U), //sb
      BitPat("b???????_?????_?????_001_?????_01000_11") -> List(0.U, 1.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000011".U), //sh
      BitPat("b???????_?????_?????_010_?????_01000_11") -> List(0.U, 1.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.add,   PcSrccode.add4,   RinCtlcode.aluout,   "b00001111".U), //sw
      BitPat("b0000001_?????_?????_000_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.mul,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //mul
      BitPat("b0000001_?????_?????_110_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.rem,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //rem
      BitPat("b0000001_?????_?????_110_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.rem,   PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //remw
      BitPat("b0000001_?????_?????_111_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.remu,  PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //remu
      BitPat("b0000001_?????_?????_111_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2_31_0, AluOpcode.remu,  PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //remuw
      BitPat("b0000001_?????_?????_000_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.mul,   PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //mulw
      BitPat("b0000001_?????_?????_100_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.div,   PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //div
      BitPat("b0000001_?????_?????_101_?????_01100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.r2,      AluOpcode.divu,  PcSrccode.add4,   RinCtlcode.aluout,   "b00000000".U), //divu
      BitPat("b0000001_?????_?????_101_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2_31_0, AluOpcode.divu,  PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //divuw
      BitPat("b0100000_?????_?????_101_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2_4_0,  AluOpcode.sra32, PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //sraw
      BitPat("b0000000_?????_?????_101_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2_4_0,  AluOpcode.srl32, PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //srlw
      BitPat("b000000?_?????_?????_001_?????_00110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.imm_5_0, AluOpcode.sll32, PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //slliw
      BitPat("b010000?_?????_?????_101_?????_00110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.imm_5_0, AluOpcode.sra32, PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //sraiw
      BitPat("b0000001_?????_?????_100_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2_31_0, AluOpcode.div32, PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //divw
      BitPat("b000000?_?????_?????_001_?????_01110_11") -> List(1.U, 0.U, AluSrc1Opcode.r1_31_0,   AluSrc2Opcode.r2_4_0,  AluOpcode.sll32, PcSrccode.add4,   RinCtlcode.aluout32, "b00000000".U), //sllw
      BitPat("b???????_?????_?????_011_?????_00100_11") -> List(1.U, 0.U, AluSrc1Opcode.r1,        AluSrc2Opcode.imm,     AluOpcode.sub,   PcSrccode.add4,   RinCtlcode.NSignU,   "b00000000".U), //sltiu
    ))

    idu_ctrl_reg.RegWrite := contr_code(0);
    idu_ctrl_reg.MemWrite := contr_code(1);
    idu_ctrl_reg.AluSrc1Op := contr_code(2);
    idu_ctrl_reg.AluSrc2Op := contr_code(3);
    idu_ctrl_reg.AluOp := contr_code(4);
    idu_ctrl_reg.PcSrc := contr_code(5);
    idu_ctrl_reg.RinCtl := contr_code(6);
    idu_ctrl_reg.MemMask := contr_code(7);
  }

  io.ifu_data_out := ifu_data_reg
  io.idu_data_out := idu_data_reg
  io.idu_ctrl_out := idu_ctrl_reg
}