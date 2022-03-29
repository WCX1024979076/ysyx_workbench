module shift(bt,ledr,seg0,seg1);
    input bt; 
    output reg[7:0] ledr;
    output reg[7:0] seg0;
    output reg[7:0] seg1;
    
    
    always @(posedge bt)
    begin
        if((|ledr)==0)
        begin
           ledr=8'b00000001;
        end
        else
        begin
            reg tmp=ledr[4]^ledr[3]^ledr[2]^ledr[0];
            ledr[7:0]={tmp,ledr[7:1]};
        end
        seg1=data_seg(ledr[7:4]);
        seg0=data_seg(ledr[3:0]);
    end

    function [7:0] data_seg;
       input [3:0] data_in;
       case(data_in)
          4'h0:data_seg=8'b00000011;
          4'h1:data_seg=8'b10011111;
          4'h2:data_seg=8'b00100101;
          4'h3:data_seg=8'b00001101;
          4'h4:data_seg=8'b10011001;
          4'h5:data_seg=8'b01001001;
          4'h6:data_seg=8'b01000001;
          4'h7:data_seg=8'b00011111;
          4'h8:data_seg=8'b00000001;
          4'h9:data_seg=8'b00001001;
          4'ha:data_seg=8'b00010001;
          4'hb:data_seg=8'b11000001;
          4'hc:data_seg=8'b01100011;
          4'hd:data_seg=8'b10000101;
          4'he:data_seg=8'b01100001;
          4'hf:data_seg=8'b01110001;
    endcase
    endfunction
    endmodule

