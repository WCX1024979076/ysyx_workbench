package riscv.WBU
import chisel3._
import chisel3.util._
/**
  * WBU
  */
class WBU extends Module {
  val io = IO(new Bundle {
    val Pc = Input(UInt(64.W))
    val MemOut = Input(UInt(64.W))
    val Zero = Input(UInt(1.W))
    val SignU = Input(UInt(1.W))
    val SignS = Input(UInt(1.W))
    val AluOut = Input(UInt(64.W))
    val RegWrite = Input(UInt(1.W))
    val RinCtl = Input(UInt(4.W))
    val MEMUFlag = Input(UInt(1.W))
    val EbreakIn = Input(UInt(1.W))
    val Rdest = Input(UInt(5.W))

    val RegWriteOut = Output(UInt(1.W))
    val DataIn = Output(UInt(64.W))
    val RdestOut = Output(UInt(5.W))
    val PcVal = Output(UInt(64.W))
  })
  def SEXT(a:UInt, b:Int):UInt = Cat(Fill(64-b, a(b-1)) ,a(b-1,0))(63,0);

  val PcValReg = RegInit(0.U(64.W));
  when(io.MEMUFlag.asBool())
  {
    PcValReg := io.Pc;
  }
    
  var ebreak=Module(new Ebreak);
  ebreak.io.ebreak_in := (io.EbreakIn & io.MEMUFlag);

  io.DataIn := MuxLookup(io.RinCtl,0.U,Array(
    0x0.U -> io.AluOut,
    0x1.U -> io.MemOut,
    0x2.U -> SEXT(io.AluOut(7,0),8),
    0x3.U -> SEXT(io.MemOut(7,0),8),
    0x4.U -> SEXT(io.AluOut(15,0),16),
    0x5.U -> SEXT(io.MemOut(15,0),16),
    0x6.U -> SEXT(io.AluOut(31,0),32),
    0x7.U -> SEXT(io.MemOut(31,0),32),
    0x8.U -> io.MemOut(7,0),
    0x9.U -> io.MemOut(15,0),
    0xa.U -> io.MemOut(31,0),
    0xb.U -> io.Zero,
    0xc.U -> io.SignU,
    0xd.U -> io.SignS,
    0xe.U -> (~io.SignU),
    0xf.U -> (~io.SignS),
  ));
  io.RegWriteOut := (io.RegWrite & io.MEMUFlag);
  io.RdestOut := io.Rdest;
  io.PcVal := PcValReg;
}
