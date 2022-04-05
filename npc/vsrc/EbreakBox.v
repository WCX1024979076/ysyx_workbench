
 import "DPI-C" function int ebreak();
 module Ebreak (ebreak_in);
 input ebreak_in;
 wire [31:0] tmp;
 assign tmp=ebreak_in ? 32'b0:ebreak();
 endmodule
    