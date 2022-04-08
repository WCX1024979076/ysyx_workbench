module Pc(
  input         clock,
  input         reset,
  input  [4:0]  io_PcSrc,
  input  [63:0] io_DataImmI,
  input  [63:0] io_DataImmJ,
  input  [63:0] io_DataR1,
  output [63:0] io_PcVal,
  output [31:0] io_Inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] mem_Raddr; // @[Pc.scala 20:17]
  wire [63:0] mem_Rdata; // @[Pc.scala 20:17]
  wire [63:0] mem_Waddr; // @[Pc.scala 20:17]
  wire [63:0] mem_Wdata; // @[Pc.scala 20:17]
  wire [7:0] mem_Wmask; // @[Pc.scala 20:17]
  wire  mem_MemWrite; // @[Pc.scala 20:17]
  reg [63:0] pc; // @[Pc.scala 18:17]
  wire [63:0] _pc_T_1 = pc + 64'h4; // @[Pc.scala 28:31]
  wire [20:0] _pc_T_4 = io_DataImmJ[20:0]; // @[Pc.scala 29:53]
  wire [63:0] _GEN_0 = {{43{_pc_T_4[20]}},_pc_T_4}; // @[Pc.scala 29:27]
  wire [63:0] _pc_T_8 = $signed(pc) + $signed(_GEN_0); // @[Pc.scala 29:63]
  wire [63:0] _pc_T_10 = io_DataR1 + io_DataImmI; // @[Pc.scala 30:26]
  wire [63:0] _pc_T_12 = _pc_T_10 & 64'hfffffffffffffffe; // @[Pc.scala 30:41]
  Mem mem ( // @[Pc.scala 20:17]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  assign io_PcVal = pc; // @[Pc.scala 33:12]
  assign io_Inst = mem_Rdata[31:0]; // @[Pc.scala 22:26]
  assign mem_Raddr = pc; // @[Pc.scala 21:16]
  assign mem_Waddr = 64'h0; // @[Pc.scala 23:16]
  assign mem_Wdata = 64'h0; // @[Pc.scala 25:16]
  assign mem_Wmask = 8'h0; // @[Pc.scala 26:16]
  assign mem_MemWrite = 1'h0; // @[Pc.scala 24:19]
  always @(posedge clock) begin
    if (reset) begin // @[Pc.scala 18:17]
      pc <= 64'h80000000; // @[Pc.scala 18:17]
    end else if (5'h2 == io_PcSrc) begin // @[Mux.scala 80:57]
      pc <= _pc_T_12;
    end else if (5'h1 == io_PcSrc) begin // @[Mux.scala 80:57]
      pc <= _pc_T_8;
    end else begin
      pc <= _pc_T_1;
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
  output        io_MemWrite,
  output [4:0]  io_AluOp,
  output [4:0]  io_PcSrc,
  output        io_MemToReg,
  output [7:0]  io_MemMask
);
  wire  ebreak_ebreak_in; // @[Contr.scala 18:20]
  wire [6:0] opcode = io_Inst[6:0]; // @[Contr.scala 22:23]
  wire [4:0] _io_AluOp_T_1 = 7'h13 == opcode ? 5'h1 : 5'h0; // @[Mux.scala 80:57]
  wire [4:0] _io_AluOp_T_3 = 7'h17 == opcode ? 5'h2 : _io_AluOp_T_1; // @[Mux.scala 80:57]
  wire [4:0] _io_AluOp_T_5 = 7'h6f == opcode ? 5'h3 : _io_AluOp_T_3; // @[Mux.scala 80:57]
  wire [4:0] _io_AluOp_T_7 = 7'h67 == opcode ? 5'h3 : _io_AluOp_T_5; // @[Mux.scala 80:57]
  wire [1:0] _io_PcSrc_T_3 = 7'h67 == opcode ? 2'h2 : {{1'd0}, 7'h6f == opcode}; // @[Mux.scala 80:57]
  Ebreak ebreak ( // @[Contr.scala 18:20]
    .ebreak_in(ebreak_ebreak_in)
  );
  assign io_RegWrite = 7'h23 == opcode | (7'h67 == opcode | (7'h6f == opcode | (7'h17 == opcode | 7'h13 == opcode))); // @[Mux.scala 80:57]
  assign io_MemWrite = 7'h23 == opcode; // @[Mux.scala 80:60]
  assign io_AluOp = 7'h23 == opcode ? 5'h4 : _io_AluOp_T_7; // @[Mux.scala 80:57]
  assign io_PcSrc = {{3'd0}, _io_PcSrc_T_3}; // @[Mux.scala 80:57]
  assign io_MemToReg = 7'h23 == opcode; // @[Mux.scala 80:60]
  assign io_MemMask = 7'h23 == opcode ? 8'hff : 8'h0; // @[Mux.scala 80:57]
  assign ebreak_ebreak_in = 32'h100073 == io_Inst; // @[Mux.scala 80:60]
endmodule
module Decode(
  input  [31:0] io_Inst,
  output [4:0]  io_Rdest,
  output [4:0]  io_R1,
  output [4:0]  io_R2,
  output [63:0] io_ImmI,
  output [63:0] io_ImmS,
  output [63:0] io_ImmJ,
  output [63:0] io_ImmU
);
  wire [11:0] _io_ImmS_T_1 = {io_Inst[31:25], 5'h0}; // @[Decode.scala 24:29]
  wire [11:0] _GEN_0 = {{7'd0}, io_Inst[11:7]}; // @[Decode.scala 24:34]
  wire [11:0] _io_ImmS_T_4 = _io_ImmS_T_1 + _GEN_0; // @[Decode.scala 24:34]
  wire [20:0] _io_ImmJ_T_1 = {io_Inst[31], 20'h0}; // @[Decode.scala 25:29]
  wire [10:0] _io_ImmJ_T_3 = {io_Inst[30:21], 1'h0}; // @[Decode.scala 25:52]
  wire [20:0] _GEN_1 = {{10'd0}, _io_ImmJ_T_3}; // @[Decode.scala 25:35]
  wire [20:0] _io_ImmJ_T_5 = _io_ImmJ_T_1 + _GEN_1; // @[Decode.scala 25:35]
  wire [11:0] _io_ImmJ_T_7 = {io_Inst[20], 11'h0}; // @[Decode.scala 25:74]
  wire [20:0] _GEN_2 = {{9'd0}, _io_ImmJ_T_7}; // @[Decode.scala 25:57]
  wire [20:0] _io_ImmJ_T_9 = _io_ImmJ_T_5 + _GEN_2; // @[Decode.scala 25:57]
  wire [19:0] _io_ImmJ_T_11 = {io_Inst[19:12], 12'h0}; // @[Decode.scala 25:97]
  wire [20:0] _GEN_3 = {{1'd0}, _io_ImmJ_T_11}; // @[Decode.scala 25:80]
  wire [20:0] _io_ImmJ_T_13 = _io_ImmJ_T_9 + _GEN_3; // @[Decode.scala 25:80]
  wire [31:0] _io_ImmU_T_1 = {io_Inst[31:12], 12'h0}; // @[Decode.scala 26:29]
  assign io_Rdest = io_Inst[11:7]; // @[Decode.scala 20:22]
  assign io_R1 = io_Inst[19:15]; // @[Decode.scala 21:19]
  assign io_R2 = io_Inst[24:20]; // @[Decode.scala 22:19]
  assign io_ImmI = {{52'd0}, io_Inst[31:20]}; // @[Decode.scala 23:21]
  assign io_ImmS = {{52'd0}, _io_ImmS_T_4}; // @[Decode.scala 24:34]
  assign io_ImmJ = {{43'd0}, _io_ImmJ_T_13}; // @[Decode.scala 25:80]
  assign io_ImmU = {{32'd0}, _io_ImmU_T_1}; // @[Decode.scala 26:29]
endmodule
module Registers(
  input         clock,
  input         reset,
  input  [4:0]  io_Rdest,
  input  [4:0]  io_R1,
  input  [4:0]  io_R2,
  input         io_RegWrite,
  input         io_MemToReg,
  input  [63:0] io_AluOut,
  input  [63:0] io_MemOut,
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
  reg [31:0] Regs_0; // @[Registers.scala 20:21]
  reg [31:0] Regs_1; // @[Registers.scala 20:21]
  reg [31:0] Regs_2; // @[Registers.scala 20:21]
  reg [31:0] Regs_3; // @[Registers.scala 20:21]
  reg [31:0] Regs_4; // @[Registers.scala 20:21]
  reg [31:0] Regs_5; // @[Registers.scala 20:21]
  reg [31:0] Regs_6; // @[Registers.scala 20:21]
  reg [31:0] Regs_7; // @[Registers.scala 20:21]
  reg [31:0] Regs_8; // @[Registers.scala 20:21]
  reg [31:0] Regs_9; // @[Registers.scala 20:21]
  reg [31:0] Regs_10; // @[Registers.scala 20:21]
  reg [31:0] Regs_11; // @[Registers.scala 20:21]
  reg [31:0] Regs_12; // @[Registers.scala 20:21]
  reg [31:0] Regs_13; // @[Registers.scala 20:21]
  reg [31:0] Regs_14; // @[Registers.scala 20:21]
  reg [31:0] Regs_15; // @[Registers.scala 20:21]
  reg [31:0] Regs_16; // @[Registers.scala 20:21]
  reg [31:0] Regs_17; // @[Registers.scala 20:21]
  reg [31:0] Regs_18; // @[Registers.scala 20:21]
  reg [31:0] Regs_19; // @[Registers.scala 20:21]
  reg [31:0] Regs_20; // @[Registers.scala 20:21]
  reg [31:0] Regs_21; // @[Registers.scala 20:21]
  reg [31:0] Regs_22; // @[Registers.scala 20:21]
  reg [31:0] Regs_23; // @[Registers.scala 20:21]
  reg [31:0] Regs_24; // @[Registers.scala 20:21]
  reg [31:0] Regs_25; // @[Registers.scala 20:21]
  reg [31:0] Regs_26; // @[Registers.scala 20:21]
  reg [31:0] Regs_27; // @[Registers.scala 20:21]
  reg [31:0] Regs_28; // @[Registers.scala 20:21]
  reg [31:0] Regs_29; // @[Registers.scala 20:21]
  reg [31:0] Regs_30; // @[Registers.scala 20:21]
  reg [31:0] Regs_31; // @[Registers.scala 20:21]
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
  wire [63:0] _Regs_T_1 = ~io_MemToReg ? io_AluOut : io_MemOut; // @[Mux.scala 80:57]
  assign io_DataR1 = {{32'd0}, _GEN_31}; // @[Registers.scala 22:13 Registers.scala 22:13]
  assign io_DataR2 = {{32'd0}, _GEN_63}; // @[Registers.scala 23:13 Registers.scala 23:13]
  always @(posedge clock) begin
    if (reset) begin // @[Registers.scala 20:21]
      Regs_0 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h0 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_0 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_1 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_1 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_2 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h2 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_2 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_3 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h3 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_3 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_4 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h4 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_4 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_5 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h5 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_5 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_6 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h6 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_6 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_7 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h7 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_7 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_8 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h8 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_8 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_9 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h9 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_9 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_10 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'ha == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_10 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_11 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hb == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_11 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_12 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hc == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_12 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_13 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hd == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_13 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_14 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'he == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_14 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_15 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'hf == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_15 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_16 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h10 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_16 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_17 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h11 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_17 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_18 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h12 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_18 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_19 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h13 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_19 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_20 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h14 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_20 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_21 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h15 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_21 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_22 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h16 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_22 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_23 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h17 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_23 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_24 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h18 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_24 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_25 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h19 == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_25 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_26 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1a == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_26 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_27 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1b == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_27 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_28 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1c == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_28 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_29 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1d == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_29 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_30 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1e == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_30 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
      end
    end
    if (reset) begin // @[Registers.scala 20:21]
      Regs_31 <= 32'h0; // @[Registers.scala 20:21]
    end else if (io_RegWrite) begin // @[Registers.scala 26:3]
      if (5'h1f == io_Rdest) begin // @[Registers.scala 27:20]
        Regs_31 <= _Regs_T_1[31:0]; // @[Registers.scala 27:20]
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
  input  [63:0] io_DataImmI,
  input  [63:0] io_DataImmS,
  input  [63:0] io_DataImmU,
  input  [63:0] io_PcVal,
  input  [4:0]  io_AluOp,
  output [63:0] io_AluOut
);
  wire [63:0] _io_AluOut_T_5 = $signed(io_DataR1) + $signed(io_DataImmI); // @[Alu.scala 20:64]
  wire [63:0] _io_AluOut_T_7 = io_PcVal + io_DataImmU; // @[Alu.scala 21:24]
  wire [63:0] _io_AluOut_T_9 = io_PcVal + 64'h4; // @[Alu.scala 22:24]
  wire [63:0] _io_AluOut_T_11 = io_DataR1 + io_DataImmS; // @[Alu.scala 23:25]
  wire [63:0] _io_AluOut_T_13 = 5'h1 == io_AluOp ? _io_AluOut_T_5 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _io_AluOut_T_15 = 5'h2 == io_AluOp ? _io_AluOut_T_7 : _io_AluOut_T_13; // @[Mux.scala 80:57]
  wire [63:0] _io_AluOut_T_17 = 5'h3 == io_AluOp ? _io_AluOut_T_9 : _io_AluOut_T_15; // @[Mux.scala 80:57]
  assign io_AluOut = 5'h4 == io_AluOp ? _io_AluOut_T_11 : _io_AluOut_T_17; // @[Mux.scala 80:57]
endmodule
module Main(
  input         clock,
  input         reset,
  output [31:0] io_Inst,
  output [63:0] io_PcVal,
  output        io_RegWrite,
  output [4:0]  io_AluOp,
  output [4:0]  io_R1,
  output [4:0]  io_R2,
  output [4:0]  io_Rdest,
  output [63:0] io_AluOut,
  output [63:0] io_DataR1,
  output [63:0] io_DataR2,
  output [63:0] io_DataImmI,
  output [63:0] io_DataImmJ,
  output [63:0] io_DataImmU,
  output [63:0] io_DataImmS,
  output [4:0]  io_PcSrc,
  output        io_MemWrite,
  output        io_MemToReg,
  output [63:0] io_MemOut,
  output [7:0]  io_MemMask
);
  wire  pc_clock; // @[Main.scala 31:16]
  wire  pc_reset; // @[Main.scala 31:16]
  wire [4:0] pc_io_PcSrc; // @[Main.scala 31:16]
  wire [63:0] pc_io_DataImmI; // @[Main.scala 31:16]
  wire [63:0] pc_io_DataImmJ; // @[Main.scala 31:16]
  wire [63:0] pc_io_DataR1; // @[Main.scala 31:16]
  wire [63:0] pc_io_PcVal; // @[Main.scala 31:16]
  wire [31:0] pc_io_Inst; // @[Main.scala 31:16]
  wire [31:0] contr_io_Inst; // @[Main.scala 39:19]
  wire  contr_io_RegWrite; // @[Main.scala 39:19]
  wire  contr_io_MemWrite; // @[Main.scala 39:19]
  wire [4:0] contr_io_AluOp; // @[Main.scala 39:19]
  wire [4:0] contr_io_PcSrc; // @[Main.scala 39:19]
  wire  contr_io_MemToReg; // @[Main.scala 39:19]
  wire [7:0] contr_io_MemMask; // @[Main.scala 39:19]
  wire [31:0] decode_io_Inst; // @[Main.scala 48:20]
  wire [4:0] decode_io_Rdest; // @[Main.scala 48:20]
  wire [4:0] decode_io_R1; // @[Main.scala 48:20]
  wire [4:0] decode_io_R2; // @[Main.scala 48:20]
  wire [63:0] decode_io_ImmI; // @[Main.scala 48:20]
  wire [63:0] decode_io_ImmS; // @[Main.scala 48:20]
  wire [63:0] decode_io_ImmJ; // @[Main.scala 48:20]
  wire [63:0] decode_io_ImmU; // @[Main.scala 48:20]
  wire  registers_clock; // @[Main.scala 58:25]
  wire  registers_reset; // @[Main.scala 58:25]
  wire [4:0] registers_io_Rdest; // @[Main.scala 58:25]
  wire [4:0] registers_io_R1; // @[Main.scala 58:25]
  wire [4:0] registers_io_R2; // @[Main.scala 58:25]
  wire  registers_io_RegWrite; // @[Main.scala 58:25]
  wire  registers_io_MemToReg; // @[Main.scala 58:25]
  wire [63:0] registers_io_AluOut; // @[Main.scala 58:25]
  wire [63:0] registers_io_MemOut; // @[Main.scala 58:25]
  wire [63:0] registers_io_DataR1; // @[Main.scala 58:25]
  wire [63:0] registers_io_DataR2; // @[Main.scala 58:25]
  wire [63:0] alu_io_DataR1; // @[Main.scala 69:19]
  wire [63:0] alu_io_DataImmI; // @[Main.scala 69:19]
  wire [63:0] alu_io_DataImmS; // @[Main.scala 69:19]
  wire [63:0] alu_io_DataImmU; // @[Main.scala 69:19]
  wire [63:0] alu_io_PcVal; // @[Main.scala 69:19]
  wire [4:0] alu_io_AluOp; // @[Main.scala 69:19]
  wire [63:0] alu_io_AluOut; // @[Main.scala 69:19]
  wire [63:0] mem_Raddr; // @[Main.scala 79:19]
  wire [63:0] mem_Rdata; // @[Main.scala 79:19]
  wire [63:0] mem_Waddr; // @[Main.scala 79:19]
  wire [63:0] mem_Wdata; // @[Main.scala 79:19]
  wire [7:0] mem_Wmask; // @[Main.scala 79:19]
  wire  mem_MemWrite; // @[Main.scala 79:19]
  Pc pc ( // @[Main.scala 31:16]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_PcSrc(pc_io_PcSrc),
    .io_DataImmI(pc_io_DataImmI),
    .io_DataImmJ(pc_io_DataImmJ),
    .io_DataR1(pc_io_DataR1),
    .io_PcVal(pc_io_PcVal),
    .io_Inst(pc_io_Inst)
  );
  Contr contr ( // @[Main.scala 39:19]
    .io_Inst(contr_io_Inst),
    .io_RegWrite(contr_io_RegWrite),
    .io_MemWrite(contr_io_MemWrite),
    .io_AluOp(contr_io_AluOp),
    .io_PcSrc(contr_io_PcSrc),
    .io_MemToReg(contr_io_MemToReg),
    .io_MemMask(contr_io_MemMask)
  );
  Decode decode ( // @[Main.scala 48:20]
    .io_Inst(decode_io_Inst),
    .io_Rdest(decode_io_Rdest),
    .io_R1(decode_io_R1),
    .io_R2(decode_io_R2),
    .io_ImmI(decode_io_ImmI),
    .io_ImmS(decode_io_ImmS),
    .io_ImmJ(decode_io_ImmJ),
    .io_ImmU(decode_io_ImmU)
  );
  Registers registers ( // @[Main.scala 58:25]
    .clock(registers_clock),
    .reset(registers_reset),
    .io_Rdest(registers_io_Rdest),
    .io_R1(registers_io_R1),
    .io_R2(registers_io_R2),
    .io_RegWrite(registers_io_RegWrite),
    .io_MemToReg(registers_io_MemToReg),
    .io_AluOut(registers_io_AluOut),
    .io_MemOut(registers_io_MemOut),
    .io_DataR1(registers_io_DataR1),
    .io_DataR2(registers_io_DataR2)
  );
  Alu alu ( // @[Main.scala 69:19]
    .io_DataR1(alu_io_DataR1),
    .io_DataImmI(alu_io_DataImmI),
    .io_DataImmS(alu_io_DataImmS),
    .io_DataImmU(alu_io_DataImmU),
    .io_PcVal(alu_io_PcVal),
    .io_AluOp(alu_io_AluOp),
    .io_AluOut(alu_io_AluOut)
  );
  Mem mem ( // @[Main.scala 79:19]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  assign io_Inst = pc_io_Inst; // @[Main.scala 32:11]
  assign io_PcVal = pc_io_PcVal; // @[Main.scala 33:12]
  assign io_RegWrite = contr_io_RegWrite; // @[Main.scala 41:15]
  assign io_AluOp = contr_io_AluOp; // @[Main.scala 43:12]
  assign io_R1 = decode_io_R1; // @[Main.scala 50:9]
  assign io_R2 = decode_io_R2; // @[Main.scala 51:9]
  assign io_Rdest = decode_io_Rdest; // @[Main.scala 52:12]
  assign io_AluOut = alu_io_AluOut; // @[Main.scala 77:13]
  assign io_DataR1 = registers_io_DataR1; // @[Main.scala 66:13]
  assign io_DataR2 = registers_io_DataR2; // @[Main.scala 67:13]
  assign io_DataImmI = decode_io_ImmI; // @[Main.scala 53:15]
  assign io_DataImmJ = decode_io_ImmJ; // @[Main.scala 56:15]
  assign io_DataImmU = decode_io_ImmU; // @[Main.scala 54:15]
  assign io_DataImmS = decode_io_ImmS; // @[Main.scala 55:15]
  assign io_PcSrc = contr_io_PcSrc; // @[Main.scala 44:12]
  assign io_MemWrite = contr_io_MemWrite; // @[Main.scala 42:15]
  assign io_MemToReg = contr_io_MemToReg; // @[Main.scala 45:15]
  assign io_MemOut = mem_Rdata; // @[Main.scala 81:13]
  assign io_MemMask = contr_io_MemMask; // @[Main.scala 46:14]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_PcSrc = io_PcSrc; // @[Main.scala 37:15]
  assign pc_io_DataImmI = io_DataImmI; // @[Main.scala 35:18]
  assign pc_io_DataImmJ = io_DataImmJ; // @[Main.scala 36:18]
  assign pc_io_DataR1 = io_DataR1; // @[Main.scala 34:16]
  assign contr_io_Inst = io_Inst; // @[Main.scala 40:17]
  assign decode_io_Inst = io_Inst; // @[Main.scala 49:18]
  assign registers_clock = clock;
  assign registers_reset = reset;
  assign registers_io_Rdest = io_Rdest; // @[Main.scala 61:22]
  assign registers_io_R1 = io_R1; // @[Main.scala 59:19]
  assign registers_io_R2 = io_R2; // @[Main.scala 60:19]
  assign registers_io_RegWrite = io_RegWrite; // @[Main.scala 62:25]
  assign registers_io_MemToReg = io_MemToReg; // @[Main.scala 63:25]
  assign registers_io_AluOut = io_AluOut; // @[Main.scala 64:23]
  assign registers_io_MemOut = io_MemOut; // @[Main.scala 65:23]
  assign alu_io_DataR1 = io_DataR1; // @[Main.scala 70:17]
  assign alu_io_DataImmI = io_DataImmI; // @[Main.scala 73:19]
  assign alu_io_DataImmS = io_DataImmS; // @[Main.scala 74:19]
  assign alu_io_DataImmU = io_DataImmU; // @[Main.scala 75:19]
  assign alu_io_PcVal = io_PcVal; // @[Main.scala 76:16]
  assign alu_io_AluOp = io_AluOp; // @[Main.scala 72:16]
  assign mem_Raddr = io_AluOut; // @[Main.scala 80:16]
  assign mem_Waddr = io_AluOut; // @[Main.scala 82:16]
  assign mem_Wdata = io_DataR2; // @[Main.scala 83:16]
  assign mem_Wmask = io_MemMask; // @[Main.scala 85:16]
  assign mem_MemWrite = io_MemWrite; // @[Main.scala 84:19]
endmodule
