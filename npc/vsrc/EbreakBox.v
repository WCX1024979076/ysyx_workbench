import "DPI-C" function int ebreak();
module EbreakBox ();
initial begin
  ebreak();
end
endmodule
    
