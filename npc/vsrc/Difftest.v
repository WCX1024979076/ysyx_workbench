
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
module Difftest (Raddr,Rdata,Waddr,Wdata,Wmask,MemWrite);
 input [63:0] gpr[32:0];
 initial set_gpr_ptr(rf);
endmodule
    