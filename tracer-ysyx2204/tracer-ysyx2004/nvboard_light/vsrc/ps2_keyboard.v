module ps2_keyboard(clk,resetn,ps2_clk,ps2_data,seg5,seg4,seg3,seg2,seg1,seg0);
    input clk,resetn,ps2_clk,ps2_data;
    output reg[7:0] seg5,seg4,seg3,seg2,seg1,seg0;
    reg [9:0] buffer;        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;
    reg [7:0] ascall[256];
    reg [7:0] sum=8'b0;
    reg is_finish=0;
    initial
    begin
        $readmemh("/home/wcx/Desktop/ysyx-workbench/nvboard_light/vsrc/ps2_keyboard.txt",ascall);
    end

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    $display("recieve %x", buffer[8:1]);
                    $display("ascall=%x",ascall[buffer[8:1]]);
                    if(buffer[8:1]==8'hf0)
                    begin
                        seg3=8'hff;
                        seg2=8'hff;
                        seg1=8'hff;
                        seg0=8'hff;
                        is_finish=1;
                    end
                    else if(is_finish==1)
                        is_finish=0;
                    else
                    begin
                        sum=sum+8'b01;
                        seg5=data_seg(sum[7:4]);
                        seg4=data_seg(sum[3:0]);
                        seg3=data_seg(ascall[buffer[8:1]][7:4]);
                        seg2=data_seg(ascall[buffer[8:1]][3:0]);
                        seg1=data_seg(buffer[8:5]);
                        seg0=data_seg(buffer[4:1]);
                    end
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
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
