package riscv
import chisel3._
import riscv.IFU._
import riscv.IDU._
import riscv.EXU._
import riscv.MEMU._
import riscv.WBU._
import chisel3.util._
/**
  * Main
  */
class Main extends Module {
  val io = IO(new Bundle {
    var Inst=Output(UInt(32.W))
  })

  var pc = RegInit("h80000000".U(64.W));
  var ifu=Module(new IFU);
  var idu=Module(new IDU);
  var exu=Module(new EXU);
  var memu=Module(new MEMU);
  var wbu=Module(new WBU);
  var regs=Module(new Regs);
  val IDUWait = Wire(UInt(1.W));

  io.Inst := ifu.io.Inst;
  ifu.io.Pc := pc;
  ifu.io.EXUClear := exu.io.EXUClear;
  ifu.io.IDUWait := IDUWait;

  idu.io.Pc := ifu.io.PcVal;
  idu.io.Inst := ifu.io.Inst;
  idu.io.IFUFlag := ifu.io.IFUFlag;
  idu.io.EXUClear := exu.io.EXUClear;
  idu.io.IDUWait := IDUWait;

  exu.io.Pc := idu.io.PcVal;
  exu.io.RegWrite := idu.io.RegWrite;
  exu.io.MemWrite := idu.io.MemWrite;
  exu.io.AluOp := idu.io.AluOp;
  exu.io.AluSrc1Op := idu.io.AluSrc1Op;
  exu.io.AluSrc2Op := idu.io.AluSrc2Op;
  exu.io.PcSrc := idu.io.PcSrc;
  exu.io.RinCtl := idu.io.RinCtl;
  regs.io.R1 := idu.io.R1;
  regs.io.R2 := idu.io.R2;
  exu.io.DataR1 := regs.io.DataR1;
  exu.io.DataR2 := regs.io.DataR2;
  exu.io.Imm := idu.io.Imm;
  exu.io.EbreakIn := idu.io.EbreakIn;
  exu.io.Rdest := idu.io.Rdest;
  exu.io.MemMask := idu.io.MemMask;
  exu.io.IDUFlag := (idu.io.IDUFlag & (~IDUWait));

  memu.io.Pc := exu.io.PcVal;
  memu.io.MemMask := exu.io.MemMaskOut;
  memu.io.Rdest := exu.io.RdestOut;
  memu.io.DataR2 := exu.io.DataR2Out;
  memu.io.MemWrite := exu.io.MemWriteOut;
  memu.io.Zero := exu.io.Zero;
  memu.io.SignU := exu.io.SignU;
  memu.io.SignS := exu.io.SignS;
  memu.io.AluOut := exu.io.AluOut;
  memu.io.RegWrite := exu.io.RegWriteOut;
  memu.io.RinCtl := exu.io.RinCtlOut;
  memu.io.EXUFlag := exu.io.EXUFlag;
  memu.io.EbreakIn := exu.io.EbreakInOut;

  wbu.io.Pc := memu.io.PcVal;
  wbu.io.MemOut := memu.io.MemOut;
  wbu.io.Zero := memu.io.ZeroOut;
  wbu.io.SignU := memu.io.SignUOut;
  wbu.io.SignS := memu.io.SignSOut;
  wbu.io.AluOut := memu.io.AluOutOut;
  wbu.io.RegWrite := memu.io.RegWriteOut;
  wbu.io.RinCtl := memu.io.RinCtlOut;
  wbu.io.MEMUFlag := memu.io.MEMUFlag;
  wbu.io.EbreakIn := memu.io.EbreakInOut;
  wbu.io.Rdest := memu.io.RdestOut;

  regs.io.DataIn := wbu.io.DataIn;
  regs.io.Rdest := wbu.io.RdestOut;
  regs.io.RegWrite := wbu.io.RegWriteOut;
  regs.io.Pc := wbu.io.PcVal;

  IDUWait := (((idu.io.R1 === exu.io.RdestOut).asUInt() & exu.io.EXUFlag) | ((idu.io.R2 === exu.io.RdestOut).asUInt() & exu.io.EXUFlag) | ((idu.io.R1 === memu.io.RdestOut).asUInt()&memu.io.MEMUFlag) | ((idu.io.R2 === memu.io.RdestOut).asUInt() & memu.io.MEMUFlag)) & idu.io.IDUFlag;

  pc := MuxLookup(Cat(IDUWait,exu.io.EXUClear), pc + "h4".U, Array(
    0x0.U -> (pc + "h4".U),
    0x1.U -> exu.io.EXUPc,
    0x2.U -> pc,
    0x3.U -> exu.io.EXUPc,
  ));
}
