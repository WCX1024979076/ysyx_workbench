package riscv.IFU
import chisel3._
import chisel3.util._
import riscv.MEMU.Mem
/**
  * IFU
  */
class IFU extends Module {
  val io = IO(new Bundle {
    val Pc = Input(UInt(64.W))
    val EXUClear = Input(UInt(32.W))
    val IDUWait = Input(UInt(1.W))

    val Inst = Output(UInt(32.W))
    val IFUFlag = Output(UInt(32.W))
    val PcVal = Output(UInt(64.W))
  })
  val InstReg = RegInit(0.U(32.W));
  val IFUFlagReg = RegInit(0.U(1.W));
  val PcValReg = RegInit(0.U(64.W));
  
  var mem=Module(new Mem);

  when((~io.IDUWait).asBool())
  {
    mem.io.Raddr := io.Pc;
    InstReg := mem.io.Rdata(31,0);
    mem.io.Waddr := "h0".U(64.W);
    mem.io.MemWrite := "h0".U(64.W);
    mem.io.Wdata := "h0".U(64.W);
    mem.io.Wmask := "h0".U(64.W);
    IFUFlagReg := (~io.EXUClear);
    PcValReg := io.Pc;
  }

  io.Inst := InstReg;
  io.IFUFlag := IFUFlagReg;
  io.PcVal := PcValReg;
}
