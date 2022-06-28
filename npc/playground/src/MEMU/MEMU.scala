package riscv.MEMU
import riscv.Common._
import chisel3._
import chisel3.util._
/**
  * MEMU
  */
class MEMU extends Module {
  val io = IO(new Bundle {
    val ifu_data_in = Input(new ifu_data())
    val idu_data_in = Input(new idu_data())
    val idu_ctrl_in = Input(new idu_ctrl())
    val exu_data_in = Input(new exu_data())
    val ifu_data_out = Output(new ifu_data())
    val idu_data_out = Output(new idu_data())
    val idu_ctrl_out = Output(new idu_ctrl())
    val exu_data_out = Output(new exu_data())
    val memu_data_out = Output(new memu_data())
  })
  val ifu_data_reg  = RegInit(Reg(new ifu_data()))
  val idu_data_reg  = RegInit(Reg(new idu_data()))
  val idu_ctrl_reg  = RegInit(Reg(new idu_ctrl()))
  val exu_data_reg  = RegInit(Reg(new exu_data()))
  val memu_data_reg = RegInit(Reg(new memu_data()))

  ifu_data_reg := io.ifu_data_in
  idu_data_reg := io.idu_data_in
  idu_ctrl_reg := io.idu_ctrl_in
  exu_data_reg := io.exu_data_in

  io.ifu_data_out  := ifu_data_reg
  io.idu_data_out  := idu_data_reg
  io.idu_ctrl_out  := idu_ctrl_reg
  io.exu_data_out  := exu_data_reg
  io.memu_data_out := memu_data_reg

  var mem = Module(new Mem);
  mem.io.Raddr := io.exu_data_in.AluOut;
  mem.io.Waddr := io.exu_data_in.AluOut;
  mem.io.Wdata := io.exu_data_in.DataR2;
  mem.io.Wmask := io.idu_ctrl_in.MemMask;
  mem.io.MemWrite := (io.idu_ctrl_in.MemWrite & io.exu_data_in.EXUFlag);
  memu_data_reg.MemOut := mem.io.Rdata;
  memu_data_reg.MEMUFlag := io.exu_data_in.EXUFlag;
} 
