
 import "DPI-C" function void ebreak();
 module EbreakBox ();
 always@ (*)
 ebreak();
 end
 endmodule
    