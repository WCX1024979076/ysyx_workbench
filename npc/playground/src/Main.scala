package riscv
import chisel3._
import riscv.IFU._
import riscv.IDU._
import riscv.EXU._
/**
  * Main
  */
class Main extends Module {
  val io = IO(new Bundle {
  })
  var Pc=Wire(UInt(64.W))
  var Inst=Wire(UInt(32.W))
  val RegWrite=Wire(UInt(1.W))
  val MemWrite=Wire(UInt(1.W))
  val AluOp=Wire(UInt(5.W))
  val PcSrc=Wire(UInt(5.W))
  val MemToReg=Wire(UInt(1.W))
  val MemMask=Wire(UInt(8.W))
  val Rdest=Wire(UInt(5.W))
  val R1=Wire(UInt(5.W))
  val R2=Wire(UInt(5.W))
  val Imm=Wire(UInt(64.W))
  
  var ifu=Module(new IFU);
  ifu.io.Pc := Pc;
  Inst := ifu.io.Inst;
  
  var idu=Module(new IDU);
  RegWrite := idu.io.RegWrite;
  MemWrite := idu.io.MemWrite;
  AluOp := idu.io.AluOp;
  PcSrc := idu.io.PcSrc;
  MemToReg := idu.io.MemToReg;
  MemMask := idu.io.MemMask;
  Rdest := idu.io.Rdest;
  R1 := idu.io.R1;
  R2 := idu.io.R2;
  Imm := idu.io.Imm;
  idu.io.Inst := Inst;

  var exu=Module(new EXU);
  exu.io.Rdest := Rdest;
  exu.io.R1 := R1;
  exu.io.R2 := R2;
  exu.io.Imm := Imm;
  exu.io.RegWrite := RegWrite;
  exu.io.MemWrite := MemWrite;
  exu.io.AluOp := AluOp;
  exu.io.PcSrc := PcSrc;
  exu.io.MemToReg := MemToReg;
  exu.io.MemMask := MemMask;
  Pc := exu.io.PcVal;
}
