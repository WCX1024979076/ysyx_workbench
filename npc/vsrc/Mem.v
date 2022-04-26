
import "DPI-C" function void pmem_read(
  input longint Raddr, output longint Rdata);
import "DPI-C" function void pmem_write(
  input longint Waddr, input longint Wdata, input byte Wmask);
module Mem (Raddr,Rdata,Waddr,Wdata,Wmask,MemWrite);
 input [63:0] Raddr,Waddr,Wdata;
 input [7:0] Wmask;
 input MemWrite;
 output [63:0] Rdata;
 always @(*) begin
 pmem_read(Raddr, Rdata);
 if(MemWrite)
  pmem_write(Waddr, Wdata, Wmask);
 end
endmodule
