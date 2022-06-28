package riscv.WBU
import riscv.Common._
import chisel3._
import chisel3.util._
/**
  * WBU
  */
class WBU extends Module {
  class wbu_out extends Bundle{
    val RegWriteOut = UInt(1.W)
    val DataIn = UInt(64.W)
    val RdestOut = UInt(5.W)
    val PcVal = UInt(64.W)
  }
  val io = IO(new Bundle {
    val ifu_data_in = Input(new ifu_data())
    val idu_data_in = Input(new idu_data())
    val idu_ctrl_in = Input(new idu_ctrl())
    val exu_data_in = Input(new exu_data())
    val memu_data_in = Input(new memu_data())
    val wbu_data_out = Output(new wbu_out())
  })
  def SEXT(a:UInt, b:Int):UInt = Cat(Fill(64-b, a(b-1)) ,a(b-1,0))(63,0);

  val PcValReg = RegInit(0.U(64.W));
  when(io.memu_data_in.MEMUFlag.asBool())
  {
    PcValReg := io.ifu_data_in.PcVal;
  }
  
  var ebreak=Module(new Ebreak);
  ebreak.io.ebreak_in := (io.idu_ctrl_in.EbreakIn & io.memu_data_in.MEMUFlag);

  io.wbu_data_out.DataIn := MuxLookup(io.idu_ctrl_in.RinCtl,0.U,Array(
    0x0.U -> io.exu_data_in.AluOut,
    0x1.U -> io.memu_data_in.MemOut,
    0x2.U -> SEXT(io.exu_data_in.AluOut(7,0),8),
    0x3.U -> SEXT(io.memu_data_in.MemOut(7,0),8),
    0x4.U -> SEXT(io.exu_data_in.AluOut(15,0),16),
    0x5.U -> SEXT(io.memu_data_in.MemOut(15,0),16),
    0x6.U -> SEXT(io.exu_data_in.AluOut(31,0),32),
    0x7.U -> SEXT(io.memu_data_in.MemOut(31,0),32),
    0x8.U -> io.memu_data_in.MemOut(7,0),
    0x9.U -> io.memu_data_in.MemOut(15,0),
    0xa.U -> io.memu_data_in.MemOut(31,0),
    0xb.U -> io.exu_data_in.Zero,
    0xc.U -> io.exu_data_in.SignU,
    0xd.U -> io.exu_data_in.SignS,
    0xe.U -> (~io.exu_data_in.SignU),
    0xf.U -> (~io.exu_data_in.SignS),
  ));
  io.wbu_data_out.RegWriteOut := (io.idu_ctrl_in.RegWrite & io.memu_data_in.MEMUFlag);
  io.wbu_data_out.RdestOut := io.idu_data_in.Rdest;
  io.wbu_data_out.PcVal := PcValReg;
}
