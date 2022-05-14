package riscv.WBU
import chisel3._
import chisel3.util._
/**
  * ebreak
  */
class Ebreak extends HasBlackBoxInline {
  val io = IO(new Bundle {
    var ebreak_in=Input(UInt(1.W))
  } ) 
    setInline("Ebreak.v",
    s"""
    | import \"DPI-C\" function void ebreak();
    | module Ebreak (ebreak_in);
    | input ebreak_in;
    | always@(*)
    | begin
    |   if(ebreak_in)
    |     ebreak();
    | end
    | endmodule
    """.stripMargin)
}
