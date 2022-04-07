
import "DPI-C" function void pmem_read(
  input unsignedlongint raddr, output unsignedlongint rdata);
import "DPI-C" function void pmem_write(
  input unsignedlongint waddr, input unsignedlongint wdata, input byte wmask);
module Mem (raddr,rdata,waddr,wdata,wmask,MemWrite);
 input [63:0] raddr,waddr,wdata;
 input [7:0] wmask;
 input MemWrite;
 output [63:0] rdata;
 always @(*) begin
  pmem_read(raddr, rdata);
 if(MemWrite)
  pmem_write(waddr, wdata, wmask);
 end
endmodule
    