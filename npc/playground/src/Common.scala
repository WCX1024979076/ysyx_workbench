package riscv.Common
import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum
object AluOpcode extends ChiselEnum {
    val add   = "b00001".U 
    val sub   = "b00010".U 
    val mul   = "b00011".U 
    val div   = "b00100".U 
    val divu  = "b00101".U 
    val rem   = "b00110".U 
    val remu  = "b00111".U 
    val sll   = "b01000".U 
    val srl   = "b01001".U 
    val sra   = "b01010".U 
    val xor   = "b01011".U 
    val or    = "b01100".U 
    val and   = "b01101".U 
    val sll32 = "b01110".U 
    val srl32 = "b01111".U 
    val sra32 = "b10000".U 
    val div32 = "b10001".U 
}

object AluSrc1Opcode extends ChiselEnum{
  val r1        = 0.U
  val pc        = 1.U
  val imm_31_12 = 2.U
  val r1_31_0   = 3.U
}

object AluSrc2Opcode extends ChiselEnum{
  val r2        = 0.U
  val r2_5_0    = 1.U
  val imm_5_0   = 2.U
  val imm_12    = 3.U
  val imm       = 4.U
  val imm_4     = 5.U
  val r2_31_0   = 6.U
  val r2_4_0    = 7.U
}

object PcSrccode extends ChiselEnum{
  val add4      = 0.U
  val jal       = 1.U
  val jalr      = 2.U
  val bne       = 3.U
  val beq       = 4.U
  val blt       = 5.U
  val bge       = 6.U
  val bltu      = 7.U
  val bgeu      = 8.U
}

object RinCtlcode extends ChiselEnum{
  val aluout    = 0.U
  val memout    = 1.U
  val aluout8   = 2.U
  val memout8   = 3.U
  val aluout16  = 4.U
  val memout16  = 5.U
  val aluout32  = 6.U
  val memout32  = 7.U
  val memout8u  = 8.U
  val memout16u = 9.U
  val memout32u = 10.U
  val Zero      = 11.U
  val SignU     = 12.U
  val SignS     = 13.U
  val NSignU    = 14.U
  val NSignS    = 15.U
}

object Csrcode extends ChiselEnum{
  val mtvec    = 1.U
  val mepc     = 2.U
  val mstatus  = 3.U
  val mcause   = 4.U
  val mcycle   = 5.U
}

class ifu_data extends Bundle{
  val Inst    = UInt(32.W)
  val PcVal   = UInt(64.W)
  val IFUFlag   = UInt(1.W)
}
class idu_data extends Bundle{
  val Rdest = UInt(5.W)
  val R1  =  UInt(5.W)
  val R2 =  UInt(5.W)
  val Imm = UInt(64.W)
}
class idu_ctrl extends Bundle{
  val RegWrite = UInt(1.W)
  val MemWrite = UInt(1.W)
  val AluOp = UInt(5.W)
  val AluSrc1Op = UInt(5.W)
  val AluSrc2Op = UInt(5.W)
  val PcSrc = UInt(5.W)
  val RinCtl = UInt(4.W)
  val MemMask = UInt(8.W)
  val EbreakIn = UInt(1.W)
  val IDUFlag = UInt(1.W)
}
class exu_data extends Bundle{
  val DataR2 = Output(UInt(64.W))
  val Zero = Output(UInt(1.W))
  val SignU = Output(UInt(1.W))
  val SignS = Output(UInt(1.W))
  val AluOut = Output(UInt(64.W))
  val EXUFlag = Output(UInt(1.W))
}
class memu_data extends Bundle{
  val MEMUFlag = Output(UInt(1.W))
  val MemOut = Output(UInt(64.W))
}