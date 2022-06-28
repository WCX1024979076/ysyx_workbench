package riscv
import riscv.Common._
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

  io.Inst := ifu.io.ifu_data_out.Inst;
  ifu.io.ifu_data_in.Pc := pc;
  ifu.io.ifu_data_in.EXUClear := exu.io.exu_ctrl_out.EXUClear;
  ifu.io.ifu_data_in.IDUWait := IDUWait;
  
  idu.io.ifu_data_in := ifu.io.ifu_data_out
  idu.io.idu_data_in.EXUClear := exu.io.exu_ctrl_out.EXUClear;
  idu.io.idu_data_in.IDUWait := IDUWait;

  regs.io.R1 := idu.io.idu_data_out.R1;
  regs.io.R2 := idu.io.idu_data_out.R2;
  exu.io.ifu_data_in := idu.io.ifu_data_out
  exu.io.idu_data_in := idu.io.idu_data_out
  exu.io.idu_ctrl_in := idu.io.idu_ctrl_out
  exu.io.exu_data_in.IDUWait := IDUWait;
  exu.io.exu_data_in.DataR1 := regs.io.DataR1;
  exu.io.exu_data_in.DataR2 := regs.io.DataR2;

  memu.io.ifu_data_in := exu.io.ifu_data_out
  memu.io.idu_data_in := exu.io.idu_data_out
  memu.io.idu_ctrl_in := exu.io.idu_ctrl_out
  memu.io.exu_data_in := exu.io.exu_data_out

  wbu.io.ifu_data_in := memu.io.ifu_data_out
  wbu.io.idu_data_in := memu.io.idu_data_out
  wbu.io.idu_ctrl_in := memu.io.idu_ctrl_out
  wbu.io.exu_data_in := memu.io.exu_data_out
  wbu.io.memu_data_in := memu.io.memu_data_out

  regs.io.DataIn := wbu.io.wbu_data_out.DataIn;
  regs.io.Rdest := wbu.io.wbu_data_out.RdestOut;
  regs.io.RegWrite := wbu.io.wbu_data_out.RegWriteOut;
  regs.io.Pc := wbu.io.wbu_data_out.PcVal;

  IDUWait := (((idu.io.idu_data_out.R1 === exu.io.idu_data_out.Rdest).asUInt() & exu.io.exu_data_out.EXUFlag) | ((idu.io.idu_data_out.R2 === exu.io.idu_data_out.Rdest).asUInt() & exu.io.exu_data_out.EXUFlag) | ((idu.io.idu_data_out.R1 === memu.io.idu_data_out.Rdest).asUInt() & memu.io.memu_data_out.MEMUFlag) | ((idu.io.idu_data_out.R2 === memu.io.idu_data_out.Rdest).asUInt() & memu.io.memu_data_out.MEMUFlag)) & idu.io.idu_ctrl_out.IDUFlag;

  pc := MuxLookup(Cat(IDUWait,exu.io.exu_ctrl_out.EXUClear), pc + "h4".U, Array(
    0x0.U -> (pc + "h4".U),
    0x1.U -> exu.io.exu_ctrl_out.EXUPc,
    0x2.U -> pc,
    0x3.U -> exu.io.exu_ctrl_out.EXUPc,
  ));
}
