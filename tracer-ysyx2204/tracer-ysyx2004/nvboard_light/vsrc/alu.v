module alu(sw,ledr);
  input [14:0] sw;
  output reg [14:0] ledr;
  
  always @(*)
  begin
    reg[5:0] a=sw[11:6];
    reg[5:0] b=sw[5:0];
    reg[5:0] c=6'b0;
    ledr[14:0]=15'b0;
    case(sw[14:12])
       3'b000:begin
        ledr[6:0]=a+b;//ledr[6] CF ledr[5] SF
        ledr[7]=~(|ledr[6:0]); //ledr[7] ZF
        ledr[8]=ledr[6]^ledr[5];//ledr[8] OF
        end
       3'b001:begin
        b=~b;
        b=b+6'b001;
        ledr[6:0]=a+b;//ledr[6] CF ledr[5] SF
        ledr[6]=~ledr[6];
        ledr[7]=~(|ledr[6:0]); //ledr[7] ZF
        ledr[8]=ledr[6]^ledr[5];//ledr[8] OF                
       end
       3'b010:begin
        a=~a;
        ledr[5:0]=a;
       end
       3'b011:begin
        ledr[5:0]=a&b;
       end
       3'b100:begin
        ledr[5:0]=a|b;
       end
       3'b101:begin
        ledr[5:0]=a^b;
       end
       3'b110:begin
        b=~b;
        b=b+6'b001;
        c=a+b;
        if(c[5]==1'b1)
            ledr[0]=1;
        else
            ledr[0]=0;
       end
       default:begin
        a=a-b;
        if((|a)==0)
          ledr[0]=1;
        else
          ledr[0]=0;
       end
     endcase
  end
endmodule
