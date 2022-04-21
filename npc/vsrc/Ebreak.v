
 import "DPI-C" function void ebreak();
 module Ebreak (ebreak_in);
 input ebreak_in;
 always@(*)
 begin
   if(ebreak_in)
     ebreak();
 end
 endmodule
    