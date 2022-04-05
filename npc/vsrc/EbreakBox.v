
 import "DPI-C" function void ebreak();
 module EbreakBox ();
 always@ (*)
 begin
 ebreak();
 end
 endmodule
    
