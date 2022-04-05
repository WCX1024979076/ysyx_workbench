
 import "DPI-C" function int ebreak();
 module EbreakBox (ebreak_in);
 input ebreak_in;
 wire [31:0] tmp;
 assign tmp=ebreak_in?ebreak():0;
 endmodule
    
