package riscv.MEMU
import chisel3._
import chisel3.util._
/**
  * Mem
  */
class Mem extends HasBlackBoxInline {
  val io = IO(new Bundle {
    var Raddr=Input(UInt(64.W))
    var Rdata=Output(UInt(64.W))
    var Waddr=Input(UInt(64.W))
    var Wdata=Input(UInt(64.W))
    var Wmask=Input(UInt(8.W))
    var MemWrite=Input(UInt(1.W))
  })
    setInline("Mem.v",
    s"""
    |import "DPI-C" function void pmem_read(
    |  input longint Raddr, output longint Rdata);
    |import "DPI-C" function void pmem_write(
    |  input longint Waddr, input longint Wdata, input byte Wmask);
    |module Mem (Raddr,Rdata,Waddr,Wdata,Wmask,MemWrite);
    | input [63:0] Raddr,Waddr,Wdata;
    | input [7:0] Wmask;
    | input MemWrite;
    | output [63:0] Rdata;
    | always @(*) begin
    | pmem_read(Raddr, Rdata);
    | if(MemWrite)
    |  pmem_write(Waddr, Wdata, Wmask);
    | end
    |endmodule
    """.stripMargin)
}
