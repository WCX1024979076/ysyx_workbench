package riscv.IFU
import chisel3._
import chisel3.util._
import riscv.MEMU.Mem
import riscv.Common._
/**
  * IFU
  */
class IFU extends Module {
  class ifu_in extends Bundle{
    val Pc = UInt(64.W)
    val EXUClear = UInt(32.W)
    val IDUWait = UInt(1.W)
  }
  val io = IO(new Bundle {
    val ifu_data_in = Input(new ifu_in())
    val ifu_data_out = Output(new ifu_data())
  })
  val ifu_data_reg = RegInit(Reg(new ifu_data()))
  var mem=Module(new Mem);

  when((~io.ifu_data_in.IDUWait).asBool())
  {
    mem.io.Raddr       := io.ifu_data_in.Pc;
    mem.io.Waddr       := "h0".U(64.W);
    mem.io.MemWrite    := "h0".U(64.W);
    mem.io.Wdata       := "h0".U(64.W);
    mem.io.Wmask       := "h0".U(64.W);
    ifu_data_reg.Inst  := mem.io.Rdata(31,0);
    ifu_data_reg.IFUFlag := (~io.ifu_data_in.EXUClear);
    ifu_data_reg.PcVal := io.ifu_data_in.Pc;
  }
  io.ifu_data_out := ifu_data_reg;
}
