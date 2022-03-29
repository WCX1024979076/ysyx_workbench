module m_mux(sw,ledr);
    input wire[9:0] sw; 
    output reg[1:0] ledr;

    always @(*)
    begin
        case (sw[1:0])
          0:ledr=sw[3:2];
          1:ledr=sw[5:4];
          2:ledr=sw[7:6];
          3:ledr=sw[9:8];
        endcase
    end
    endmodule
