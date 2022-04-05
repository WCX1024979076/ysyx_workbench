import "DPI-C" function void ebreak();
module EbreakBox ();
initial begin
  ebreak();
end
endmodule
    
