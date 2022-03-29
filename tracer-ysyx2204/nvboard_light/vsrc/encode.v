module encode(sw,ledr,seg0);
    input wire[8:0] sw; 
    output reg[4:0] ledr;
    output reg[7:0] seg0;
    always @(*)
    begin
        casez(sw[8:0])
            9'b0????????:begin ledr=5'b00000;seg0=8'b00000000; end
            9'b11???????:begin ledr=5'b00111;seg0=8'b11100000; end
            9'b101??????:begin ledr=5'b00110;seg0=8'b10111110; end
            9'b1001?????:begin ledr=5'b00101;seg0=8'b10110110; end
            9'b10001????:begin ledr=5'b00100;seg0=8'b01100110; end
            9'b100001???:begin ledr=5'b00011;seg0=8'b11110010; end
            9'b1000001??:begin ledr=5'b00010;seg0=8'b11011010; end
            9'b10000001?:begin ledr=5'b00001;seg0=8'b01100000; end
            9'b100000001:begin ledr=5'b00000;seg0=8'b11111100; end
            9'b100000000:begin ledr=5'b10000;seg0=8'b00000000; end
        endcase
        seg0=~seg0;
    end
    endmodule
