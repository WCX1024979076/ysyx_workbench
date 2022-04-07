module Pc(
  input         clock,
  input         reset,
  output [63:0] io_PcVal,
  output [31:0] io_Inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] mem_Raddr; // @[Pc.scala 16:17]
  wire [63:0] mem_Rdata; // @[Pc.scala 16:17]
  wire [63:0] mem_Waddr; // @[Pc.scala 16:17]
  wire [63:0] mem_Wdata; // @[Pc.scala 16:17]
  wire [7:0] mem_Wmask; // @[Pc.scala 16:17]
  wire  mem_MemWrite; // @[Pc.scala 16:17]
  reg [63:0] pc; // @[Pc.scala 14:17]
  wire [63:0] _pc_T_1 = pc + 64'h4; // @[Pc.scala 24:12]
  Mem mem ( // @[Pc.scala 16:17]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  assign io_PcVal = pc; // @[Pc.scala 25:12]
  assign io_Inst = mem_Rdata[31:0]; // @[Pc.scala 18:11]
  assign mem_Raddr = pc; // @[Pc.scala 17:16]
  assign mem_Waddr = 64'h0; // @[Pc.scala 19:16]
  assign mem_Wdata = 64'h0; // @[Pc.scala 21:16]
  assign mem_Wmask = 8'h0; // @[Pc.scala 22:16]
  assign mem_MemWrite = 1'h0; // @[Pc.scala 20:19]
  always @(posedge clock) begin
    if (reset) begin // @[Pc.scala 14:17]
      pc <= 64'h80000000; // @[Pc.scala 14:17]
    end else begin
      pc <= _pc_T_1; // @[Pc.scala 24:6]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  pc = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Contr(
  input  [31:0] io_Inst,
  output        io_RegWrite,
  output [3:0]  io_AluOp
);
  wire  ebreakbox_ebreak_in; // @[Contr.scala 18:23]
  wire [6:0] opcode = io_Inst[6:0]; // @[Contr.scala 22:23]
  wire [4:0] _io_AluOp_T_1 = 7'h13 == opcode ? 5'h1 : 5'h0; // @[Mux.scala 80:57]
  EbreakBox ebreakbox ( // @[Contr.scala 18:23]
    .ebreak_in(ebreakbox_ebreak_in)
  );
  assign io_RegWrite = 7'h13 == opcode; // @[Mux.scala 80:60]
  assign io_AluOp = _io_AluOp_T_1[3:0]; // @[Contr.scala 24:12]
  assign ebreakbox_ebreak_in = 32'h100073 == io_Inst; // @[Mux.scala 80:60]
endmodule
module Decode(
  input  [31:0] io_Inst,
  output [4:0]  io_Rdest,
  output [4:0]  io_R1,
  output [4:0]  io_R2,
  output [63:0] io_ImmI
);
  assign io_Rdest = io_Inst[11:7]; // @[Decode.scala 18:22]
  assign io_R1 = io_Inst[19:15]; // @[Decode.scala 19:19]
  assign io_R2 = io_Inst[24:20]; // @[Decode.scala 20:19]
  assign io_ImmI = {{52'd0}, io_Inst[31:20]}; // @[Decode.scala 21:21]
endmodule
module Registers(
  input         clock,
  input         reset,
  input  [4:0]  io_Rdest,
  input  [4:0]  io_R1,
  input  [4:0]  io_R2,
  input         io_RegWrite,
  input  [63:0] io_AluOut,
  output [63:0] io_DataR1,
  output [63:0] io_DataR2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] Regs_0; // @[Registers.scala 19:21]
  reg [31:0] Regs_1; // @[Registers.scala 19:21]
  reg [31:0] Regs_2; // @[Registers.scala 19:21]
  reg [31:0] Regs_3; // @[Registers.scala 19:21]
  reg [31:0] Regs_4; // @[Registers.scala 19:21]
  reg [31:0] Regs_5; // @[Registers.scala 19:21]
  reg [31:0] Regs_6; // @[Registers.scala 19:21]
  reg [31:0] Regs_7; // @[Registers.scala 19:21]
  reg [31:0] Regs_8; // @[Registers.scala 19:21]
  reg [31:0] Regs_9; // @[Registers.scala 19:21]
  reg [31:0] Regs_10; // @[Registers.scala 19:21]
  reg [31:0] Regs_11; // @[Registers.scala 19:21]
  reg [31:0] Regs_12; // @[Registers.scala 19:21]
  reg [31:0] Regs_13; // @[Registers.scala 19:21]
  reg [31:0] Regs_14; // @[Registers.scala 19:21]
  reg [31:0] Regs_15; // @[Registers.scala 19:21]
  reg [31:0] Regs_16; // @[Registers.scala 19:21]
  reg [31:0] Regs_17; // @[Registers.scala 19:21]
  reg [31:0] Regs_18; // @[Registers.scala 19:21]
  reg [31:0] Regs_19; // @[Registers.scala 19:21]
  reg [31:0] Regs_20; // @[Registers.scala 19:21]
  reg [31:0] Regs_21; // @[Registers.scala 19:21]
  reg [31:0] Regs_22; // @[Registers.scala 19:21]
  reg [31:0] Regs_23; // @[Registers.scala 19:21]
  reg [31:0] Regs_24; // @[Registers.scala 19:21]
  reg [31:0] Regs_25; // @[Registers.scala 19:21]
  reg [31:0] Regs_26; // @[Registers.scala 19:21]
  reg [31:0] Regs_27; // @[Registers.scala 19:21]
  reg [31:0] Regs_28; // @[Registers.scala 19:21]
  reg [31:0] Regs_29; // @[Registers.scala 19:21]
  reg [31:0] Regs_30; // @[Registers.scala 19:21]
  reg [31:0] Regs_31; // @[Registers.scala 19:21]
  wire [31:0] _GEN_1 = 5'h1 == io_R1 ? Regs_1 : Regs_0; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_2 = 5'h2 == io_R1 ? Regs_2 : _GEN_1; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_3 = 5'h3 == io_R1 ? Regs_3 : _GEN_2; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_4 = 5'h4 == io_R1 ? Regs_4 : _GEN_3; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_5 = 5'h5 == io_R1 ? Regs_5 : _GEN_4; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_6 = 5'h6 == io_R1 ? Regs_6 : _GEN_5; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_7 = 5'h7 == io_R1 ? Regs_7 : _GEN_6; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_8 = 5'h8 == io_R1 ? Regs_8 : _GEN_7; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_9 = 5'h9 == io_R1 ? Regs_9 : _GEN_8; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_10 = 5'ha == io_R1 ? Regs_10 : _GEN_9; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_11 = 5'hb == io_R1 ? Regs_11 : _GEN_10; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_12 = 5'hc == io_R1 ? Regs_12 : _GEN_11; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_13 = 5'hd == io_R1 ? Regs_13 : _GEN_12; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_14 = 5'he == io_R1 ? Regs_14 : _GEN_13; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_15 = 5'hf == io_R1 ? Regs_15 : _GEN_14; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_16 = 5'h10 == io_R1 ? Regs_16 : _GEN_15; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_17 = 5'h11 == io_R1 ? Regs_17 : _GEN_16; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_18 = 5'h12 == io_R1 ? Regs_18 : _GEN_17; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_19 = 5'h13 == io_R1 ? Regs_19 : _GEN_18; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_20 = 5'h14 == io_R1 ? Regs_20 : _GEN_19; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_21 = 5'h15 == io_R1 ? Regs_21 : _GEN_20; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_22 = 5'h16 == io_R1 ? Regs_22 : _GEN_21; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_23 = 5'h17 == io_R1 ? Regs_23 : _GEN_22; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_24 = 5'h18 == io_R1 ? Regs_24 : _GEN_23; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_25 = 5'h19 == io_R1 ? Regs_25 : _GEN_24; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_26 = 5'h1a == io_R1 ? Regs_26 : _GEN_25; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_27 = 5'h1b == io_R1 ? Regs_27 : _GEN_26; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_28 = 5'h1c == io_R1 ? Regs_28 : _GEN_27; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_29 = 5'h1d == io_R1 ? Regs_29 : _GEN_28; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_30 = 5'h1e == io_R1 ? Regs_30 : _GEN_29; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_31 = 5'h1f == io_R1 ? Regs_31 : _GEN_30; // @[Registers.scala 22:13 Registers.scala 22:13]
  wire [31:0] _GEN_33 = 5'h1 == io_R2 ? Regs_1 : Regs_0; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_34 = 5'h2 == io_R2 ? Regs_2 : _GEN_33; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_35 = 5'h3 == io_R2 ? Regs_3 : _GEN_34; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_36 = 5'h4 == io_R2 ? Regs_4 : _GEN_35; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_37 = 5'h5 == io_R2 ? Regs_5 : _GEN_36; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_38 = 5'h6 == io_R2 ? Regs_6 : _GEN_37; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_39 = 5'h7 == io_R2 ? Regs_7 : _GEN_38; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_40 = 5'h8 == io_R2 ? Regs_8 : _GEN_39; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_41 = 5'h9 == io_R2 ? Regs_9 : _GEN_40; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_42 = 5'ha == io_R2 ? Regs_10 : _GEN_41; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_43 = 5'hb == io_R2 ? Regs_11 : _GEN_42; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_44 = 5'hc == io_R2 ? Regs_12 : _GEN_43; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_45 = 5'hd == io_R2 ? Regs_13 : _GEN_44; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_46 = 5'he == io_R2 ? Regs_14 : _GEN_45; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_47 = 5'hf == io_R2 ? Regs_15 : _GEN_46; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_48 = 5'h10 == io_R2 ? Regs_16 : _GEN_47; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_49 = 5'h11 == io_R2 ? Regs_17 : _GEN_48; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_50 = 5'h12 == io_R2 ? Regs_18 : _GEN_49; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_51 = 5'h13 == io_R2 ? Regs_19 : _GEN_50; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_52 = 5'h14 == io_R2 ? Regs_20 : _GEN_51; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_53 = 5'h15 == io_R2 ? Regs_21 : _GEN_52; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_54 = 5'h16 == io_R2 ? Regs_22 : _GEN_53; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_55 = 5'h17 == io_R2 ? Regs_23 : _GEN_54; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_56 = 5'h18 == io_R2 ? Regs_24 : _GEN_55; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_57 = 5'h19 == io_R2 ? Regs_25 : _GEN_56; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_58 = 5'h1a == io_R2 ? Regs_26 : _GEN_57; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_59 = 5'h1b == io_R2 ? Regs_27 : _GEN_58; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_60 = 5'h1c == io_R2 ? Regs_28 : _GEN_59; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_61 = 5'h1d == io_R2 ? Regs_29 : _GEN_60; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_62 = 5'h1e == io_R2 ? Regs_30 : _GEN_61; // @[Registers.scala 23:13 Registers.scala 23:13]
  wire [31:0] _GEN_63 = 5'h1f == io_R2 ? Regs_31 : _GEN_62; // @[Registers.scala 23:13 Registers.scala 23:13]
  assign io_DataR1 = {{32'd0}, _GEN_31}; // @[Registers.scala 22:13 Registers.scala 22:13]
  assign io_DataR2 = {{32'd0}, _GEN_63}; // @[Registers.scala 23:13 Registers.scala 23:13]
  always @(posedge clock) begin
    if (reset) begin // @[Registers.scala 19:21]
      Regs_0 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h0 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_0 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_1 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_1 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_2 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h2 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_2 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_3 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h3 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_3 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_4 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h4 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_4 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_5 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h5 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_5 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_6 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h6 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_6 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_7 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h7 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_7 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_8 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h8 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_8 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_9 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h9 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_9 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_10 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'ha == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_10 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_11 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hb == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_11 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_12 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hc == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_12 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_13 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hd == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_13 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_14 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'he == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_14 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_15 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hf == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_15 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_16 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h10 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_16 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_17 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h11 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_17 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_18 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h12 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_18 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_19 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h13 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_19 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_20 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h14 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_20 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_21 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h15 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_21 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_22 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h16 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_22 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_23 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h17 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_23 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_24 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h18 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_24 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_25 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h19 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_25 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_26 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1a == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_26 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_27 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1b == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_27 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_28 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1c == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_28 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_29 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1d == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_29 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_30 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1e == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_30 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 19:21]
      Regs_31 <= 32'h0; // @[Registers.scala 19:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1f == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_31 <= io_AluOut[31:0]; // @[Registers.scala 27:20]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  Regs_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  Regs_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  Regs_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  Regs_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  Regs_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  Regs_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  Regs_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  Regs_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  Regs_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  Regs_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  Regs_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  Regs_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  Regs_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  Regs_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  Regs_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  Regs_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  Regs_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  Regs_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  Regs_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  Regs_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  Regs_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  Regs_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  Regs_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  Regs_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  Regs_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  Regs_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  Regs_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  Regs_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  Regs_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  Regs_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  Regs_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  Regs_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Alu(
  input  [63:0] io_DataR1,
  input  [63:0] io_DataR2,
  input  [63:0] io_DataImm,
  input  [4:0]  io_AluOp,
  input         io_AluSrc,
  output [63:0] io_AluOut
);
  wire [63:0] _io_AluOut_T_1 = ~io_AluSrc ? io_DataImm : io_DataR2; // @[Alu.scala 19:90]
  wire [63:0] _io_AluOut_T_5 = $signed(io_DataR1) + $signed(_io_AluOut_T_1); // @[Alu.scala 19:100]
  assign io_AluOut = 5'h1 == io_AluOp ? _io_AluOut_T_5 : 64'h0; // @[Mux.scala 80:57]
endmodule
module Main(
  input         clock,
  input         reset,
  output [31:0] io_Inst,
  output [63:0] io_PcVal,
  output        io_RegWrite,
  output [4:0]  io_AluOp,
  output        io_AluSrc,
  output [4:0]  io_R1,
  output [4:0]  io_R2,
  output [4:0]  io_Rdest,
  output [63:0] io_AluOut,
  output [63:0] io_DataR1,
  output [63:0] io_DataR2,
  output [63:0] io_DataImmI
);
  wire  pc_clock; // @[Main.scala 27:16]
  wire  pc_reset; // @[Main.scala 27:16]
  wire [63:0] pc_io_PcVal; // @[Main.scala 27:16]
  wire [31:0] pc_io_Inst; // @[Main.scala 27:16]
  wire [31:0] contr_io_Inst; // @[Main.scala 31:19]
  wire  contr_io_RegWrite; // @[Main.scala 31:19]
  wire [3:0] contr_io_AluOp; // @[Main.scala 31:19]
  wire [31:0] decode_io_Inst; // @[Main.scala 37:20]
  wire [4:0] decode_io_Rdest; // @[Main.scala 37:20]
  wire [4:0] decode_io_R1; // @[Main.scala 37:20]
  wire [4:0] decode_io_R2; // @[Main.scala 37:20]
  wire [63:0] decode_io_ImmI; // @[Main.scala 37:20]
  wire  registers_clock; // @[Main.scala 44:25]
  wire  registers_reset; // @[Main.scala 44:25]
  wire [4:0] registers_io_Rdest; // @[Main.scala 44:25]
  wire [4:0] registers_io_R1; // @[Main.scala 44:25]
  wire [4:0] registers_io_R2; // @[Main.scala 44:25]
  wire  registers_io_RegWrite; // @[Main.scala 44:25]
  wire [63:0] registers_io_AluOut; // @[Main.scala 44:25]
  wire [63:0] registers_io_DataR1; // @[Main.scala 44:25]
  wire [63:0] registers_io_DataR2; // @[Main.scala 44:25]
  wire [63:0] alu_io_DataR1; // @[Main.scala 54:19]
  wire [63:0] alu_io_DataR2; // @[Main.scala 54:19]
  wire [63:0] alu_io_DataImm; // @[Main.scala 54:19]
  wire [4:0] alu_io_AluOp; // @[Main.scala 54:19]
  wire  alu_io_AluSrc; // @[Main.scala 54:19]
  wire [63:0] alu_io_AluOut; // @[Main.scala 54:19]
  wire [63:0] mem_Raddr; // @[Main.scala 63:17]
  wire [63:0] mem_Rdata; // @[Main.scala 63:17]
  wire [63:0] mem_Waddr; // @[Main.scala 63:17]
  wire [63:0] mem_Wdata; // @[Main.scala 63:17]
  wire [7:0] mem_Wmask; // @[Main.scala 63:17]
  wire  mem_MemWrite; // @[Main.scala 63:17]
  Pc pc ( // @[Main.scala 27:16]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_PcVal(pc_io_PcVal),
    .io_Inst(pc_io_Inst)
  );
  Contr contr ( // @[Main.scala 31:19]
    .io_Inst(contr_io_Inst),
    .io_RegWrite(contr_io_RegWrite),
    .io_AluOp(contr_io_AluOp)
  );
  Decode decode ( // @[Main.scala 37:20]
    .io_Inst(decode_io_Inst),
    .io_Rdest(decode_io_Rdest),
    .io_R1(decode_io_R1),
    .io_R2(decode_io_R2),
    .io_ImmI(decode_io_ImmI)
  );
  Registers registers ( // @[Main.scala 44:25]
    .clock(registers_clock),
    .reset(registers_reset),
    .io_Rdest(registers_io_Rdest),
    .io_R1(registers_io_R1),
    .io_R2(registers_io_R2),
    .io_RegWrite(registers_io_RegWrite),
    .io_AluOut(registers_io_AluOut),
    .io_DataR1(registers_io_DataR1),
    .io_DataR2(registers_io_DataR2)
  );
  Alu alu ( // @[Main.scala 54:19]
    .io_DataR1(alu_io_DataR1),
    .io_DataR2(alu_io_DataR2),
    .io_DataImm(alu_io_DataImm),
    .io_AluOp(alu_io_AluOp),
    .io_AluSrc(alu_io_AluSrc),
    .io_AluOut(alu_io_AluOut)
  );
  Mem mem ( // @[Main.scala 63:17]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  assign io_Inst = pc_io_Inst; // @[Main.scala 29:11]
  assign io_PcVal = pc_io_PcVal; // @[Main.scala 28:12]
  assign io_RegWrite = contr_io_RegWrite; // @[Main.scala 33:15]
  assign io_AluOp = {{1'd0}, contr_io_AluOp}; // @[Main.scala 34:12]
  assign io_AluSrc = 1'h0; // @[Main.scala 35:13]
  assign io_R1 = decode_io_R1; // @[Main.scala 39:9]
  assign io_R2 = decode_io_R2; // @[Main.scala 40:9]
  assign io_Rdest = decode_io_Rdest; // @[Main.scala 41:12]
  assign io_AluOut = alu_io_AluOut; // @[Main.scala 60:13]
  assign io_DataR1 = registers_io_DataR1; // @[Main.scala 51:13]
  assign io_DataR2 = registers_io_DataR2; // @[Main.scala 52:13]
  assign io_DataImmI = decode_io_ImmI; // @[Main.scala 42:15]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign contr_io_Inst = io_Inst; // @[Main.scala 32:17]
  assign decode_io_Inst = io_Inst; // @[Main.scala 38:18]
  assign registers_clock = clock;
  assign registers_reset = reset;
  assign registers_io_Rdest = io_Rdest; // @[Main.scala 47:22]
  assign registers_io_R1 = io_R1; // @[Main.scala 45:19]
  assign registers_io_R2 = io_R2; // @[Main.scala 46:19]
  assign registers_io_RegWrite = io_RegWrite; // @[Main.scala 48:25]
  assign registers_io_AluOut = io_AluOut; // @[Main.scala 49:23]
  assign alu_io_DataR1 = io_DataR1; // @[Main.scala 55:17]
  assign alu_io_DataR2 = io_DataR2; // @[Main.scala 56:17]
  assign alu_io_DataImm = io_DataImmI; // @[Main.scala 58:18]
  assign alu_io_AluOp = io_AluOp; // @[Main.scala 57:16]
  assign alu_io_AluSrc = io_AluSrc; // @[Main.scala 59:17]
  assign mem_Raddr = 64'h0; // @[Main.scala 64:16]
  assign mem_Waddr = 64'h0; // @[Main.scala 65:16]
  assign mem_Wdata = 64'h0; // @[Main.scala 67:16]
  assign mem_Wmask = 8'h0; // @[Main.scala 68:16]
  assign mem_MemWrite = 1'h0; // @[Main.scala 66:19]
endmodule
