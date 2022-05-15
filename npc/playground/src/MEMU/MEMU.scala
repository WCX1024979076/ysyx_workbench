package riscv.MEMU
import chisel3._
import chisel3.util._
/**
  * MEMU
  */
class MEMU extends Module {
  val io = IO(new Bundle {
    val Pc = Input(UInt(64.W))
    val MemMask = Input(UInt(8.W))
    val Rdest = Input(UInt(5.W))
    val DataR2 = Input(UInt(64.W))
    val MemWrite = Input(UInt(1.W))
    val Zero = Input(UInt(1.W))
    val SignU = Input(UInt(1.W))
    val SignS = Input(UInt(1.W))
    val AluOut = Input(UInt(64.W))
    val RegWrite = Input(UInt(1.W))
    val RinCtl = Input(UInt(4.W))
    val EXUFlag = Input(UInt(1.W))
    val EbreakIn = Input(UInt(1.W))

    val MEMUFlag = Output(UInt(1.W))
    val MemOut = Output(UInt(64.W))
    val ZeroOut = Output(UInt(1.W))
    val SignUOut = Output(UInt(1.W))
    val SignSOut = Output(UInt(1.W))
    val AluOutOut = Output(UInt(64.W))
    val RegWriteOut = Output(UInt(1.W))
    val RinCtlOut = Output(UInt(4.W))
    val EbreakInOut = Output(UInt(1.W))
    val RdestOut = Output(UInt(5.W))
    val PcVal = Output(UInt(64.W))
  })
  
  val MEMUFlagReg = RegInit(0.U(1.W));
  val MemOutReg = RegInit(0.U(64.W));
  val ZeroOutReg = RegInit(0.U(1.W));
  val SignUOutReg = RegInit(0.U(1.W));
  val SignSOutReg = RegInit(0.U(1.W));
  val AluOutOutReg = RegInit(0.U(64.W));
  val RegWriteOutReg = RegInit(0.U(1.W));
  val RinCtlOutReg = RegInit(0.U(4.W));
  val EbreakInOutReg = RegInit(0.U(1.W));
  val RdestOutReg = RegInit(0.U(5.W));
  val PcValReg = RegInit(0.U(64.W));

  MEMUFlagReg := io.EXUFlag;
  ZeroOutReg := io.Zero;
  SignUOutReg := io.SignU;
  SignSOutReg := io.SignS;
  AluOutOutReg := io.AluOut;
  RegWriteOutReg := io.RegWrite;
  RinCtlOutReg := io.RinCtl;
  EbreakInOutReg := io.EbreakIn;
  RdestOutReg := io.Rdest;
  PcValReg := io.Pc;

  var mem = Module(new Mem);
  MemOutReg := mem.io.Rdata;
  mem.io.Raddr := io.AluOut;
  mem.io.Waddr := io.AluOut;
  mem.io.Wdata := io.DataR2;
  mem.io.Wmask := io.MemMask;
  mem.io.MemWrite := (io.MemWrite & io.EXUFlag);

  io.MEMUFlag := MEMUFlagReg;
  io.MemOut := MemOutReg;
  io.ZeroOut := ZeroOutReg;
  io.SignUOut := SignUOutReg;
  io.SignSOut := SignSOutReg;
  io.AluOutOut := AluOutOutReg;
  io.RegWriteOut := RegWriteOutReg;
  io.RinCtlOut := RinCtlOutReg;
  io.EbreakInOut := EbreakInOutReg;
  io.RdestOut := RdestOutReg;
  io.PcVal := PcValReg;
}
