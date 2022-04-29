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

  difftest.io.gpr := Regs;
  difftest.io.PcVal := pc;

  DataR1 := Regs(io.R1);
  DataR2 := Regs(io.R2);
  DataIn := MuxLookup(io.RinCtl,0.U,Array(
    0x0.U -> AluOut,
    0x1.U -> MemOut,
    0x2.U -> Cat(Fill(32, MemOut(31)), MemOut(31,0)),
    0x3.U -> Cat(Fill(32, AluOut(31)), AluOut(31,0))
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

  AluOut := MuxLookup(io.AluOp,0.U, Array(
    "h1".U(8.W)  -> (DataR1 + Cat(Fill(52, io.Imm(11)), io.Imm(11,0))),            //addi,ld,sd
    "h2".U(8.W) -> (DataR1 + DataR2),                                             //add
    "h3".U(8.W)  -> (pc + Cat(Fill(44, io.Imm(19)), io.Imm(19,0))),                //auipc
    "h4".U(8.W)  -> (pc + "h4".U(64.W)),                                           //jal,jalr
    "h5".U(8.W)  -> (DataR1 === DataR2),                                           //beq
    "h6".U(8.W)  -> (DataR1 < Cat(Fill(52, io.Imm(11)), io.Imm(11,0))),            //sltiu
    "h7".U(8.W)  -> (DataR1 =/= DataR2),                                           //bne
    "h8".U(8.W)  -> (DataR1 - DataR2),                                             //sub
    "h9".U(8.W)  -> (DataR1 << DataR2(5,0)),                                       //sll,slli
    "ha".U(8.W)  -> (DataR1 >> DataR2(5,0)),                                       //srl,srli
    "hb".U(8.W)  -> (DataR1.asSInt() >> DataR2(5,0)),                              //sra,srai
    "hc".U(8.W)  -> (io.Imm(31,12) << 12.U),                                       //lui
    "hd".U(8.W)  -> (DataR1 ^ DataR2),                                             //xor
    "he".U(8.W)  -> (DataR1 ^ Cat(Fill(52, io.Imm(11)), io.Imm(11,0))),            //xori
    "hf".U(8.W) -> (DataR1 | DataR2),                                             //or
    "h010".U(8.W) -> (DataR1 | Cat(Fill(52, io.Imm(11)), io.Imm(11,0))),           //ori
  ));

  io.PcVal := pc;
  Regs(0) := 0.U(64.W);
}
