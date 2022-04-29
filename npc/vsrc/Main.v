module IFU(
  input  [63:0] io_Pc,
  output [31:0] io_Inst
);
  wire [63:0] mem_Raddr; // @[IFU.scala 14:17]
  wire [63:0] mem_Rdata; // @[IFU.scala 14:17]
  wire [63:0] mem_Waddr; // @[IFU.scala 14:17]
  wire [63:0] mem_Wdata; // @[IFU.scala 14:17]
  wire [7:0] mem_Wmask; // @[IFU.scala 14:17]
  wire  mem_MemWrite; // @[IFU.scala 14:17]
  Mem mem ( // @[IFU.scala 14:17]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  assign io_Inst = mem_Rdata[31:0]; // @[IFU.scala 16:26]
  assign mem_Raddr = io_Pc; // @[IFU.scala 15:16]
  assign mem_Waddr = 64'h0; // @[IFU.scala 17:16]
  assign mem_Wdata = 64'h0; // @[IFU.scala 19:16]
  assign mem_Wmask = 8'h0; // @[IFU.scala 20:16]
  assign mem_MemWrite = 1'h0; // @[IFU.scala 18:19]
endmodule
module IDU(
  input  [31:0] io_Inst
);
  wire  ebreak_ebreak_in; // @[IDU.scala 40:20]
  Ebreak ebreak ( // @[IDU.scala 40:20]
    .ebreak_in(ebreak_ebreak_in)
  );
  assign ebreak_ebreak_in = 32'h100073 == io_Inst; // @[Mux.scala 80:60]
endmodule
module EXU(
  input         clock,
  input         reset,
  output [63:0] io_PcVal
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] mem_Raddr; // @[EXU.scala 28:19]
  wire [63:0] mem_Rdata; // @[EXU.scala 28:19]
  wire [63:0] mem_Waddr; // @[EXU.scala 28:19]
  wire [63:0] mem_Wdata; // @[EXU.scala 28:19]
  wire [7:0] mem_Wmask; // @[EXU.scala 28:19]
  wire  mem_MemWrite; // @[EXU.scala 28:19]
  wire [63:0] difftest_gpr_0; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_1; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_2; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_3; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_4; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_5; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_6; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_7; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_8; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_9; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_10; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_11; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_12; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_13; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_14; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_15; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_16; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_17; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_18; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_19; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_20; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_21; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_22; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_23; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_24; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_25; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_26; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_27; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_28; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_29; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_30; // @[EXU.scala 29:24]
  wire [63:0] difftest_gpr_31; // @[EXU.scala 29:24]
  wire [63:0] difftest_PcVal; // @[EXU.scala 29:24]
  reg [63:0] pc; // @[EXU.scala 30:19]
  wire [63:0] _AluOut_T_13 = pc + 64'h4; // @[EXU.scala 68:18]
  Mem mem ( // @[EXU.scala 28:19]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  Difftest difftest ( // @[EXU.scala 29:24]
    .gpr_0(difftest_gpr_0),
    .gpr_1(difftest_gpr_1),
    .gpr_2(difftest_gpr_2),
    .gpr_3(difftest_gpr_3),
    .gpr_4(difftest_gpr_4),
    .gpr_5(difftest_gpr_5),
    .gpr_6(difftest_gpr_6),
    .gpr_7(difftest_gpr_7),
    .gpr_8(difftest_gpr_8),
    .gpr_9(difftest_gpr_9),
    .gpr_10(difftest_gpr_10),
    .gpr_11(difftest_gpr_11),
    .gpr_12(difftest_gpr_12),
    .gpr_13(difftest_gpr_13),
    .gpr_14(difftest_gpr_14),
    .gpr_15(difftest_gpr_15),
    .gpr_16(difftest_gpr_16),
    .gpr_17(difftest_gpr_17),
    .gpr_18(difftest_gpr_18),
    .gpr_19(difftest_gpr_19),
    .gpr_20(difftest_gpr_20),
    .gpr_21(difftest_gpr_21),
    .gpr_22(difftest_gpr_22),
    .gpr_23(difftest_gpr_23),
    .gpr_24(difftest_gpr_24),
    .gpr_25(difftest_gpr_25),
    .gpr_26(difftest_gpr_26),
    .gpr_27(difftest_gpr_27),
    .gpr_28(difftest_gpr_28),
    .gpr_29(difftest_gpr_29),
    .gpr_30(difftest_gpr_30),
    .gpr_31(difftest_gpr_31),
    .PcVal(difftest_PcVal)
  );
  assign io_PcVal = pc; // @[EXU.scala 77:12]
  assign mem_Raddr = 64'h0; // @[EXU.scala 22:20 EXU.scala 64:10]
  assign mem_Waddr = 64'h0; // @[EXU.scala 22:20 EXU.scala 64:10]
  assign mem_Wdata = 64'h0; // @[EXU.scala 36:10 EXU.scala 36:10]
  assign mem_Wmask = 8'h0; // @[EXU.scala 52:16]
  assign mem_MemWrite = 1'h0; // @[EXU.scala 53:19]
  assign difftest_gpr_0 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_1 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_2 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_3 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_4 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_5 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_6 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_7 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_8 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_9 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_10 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_11 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_12 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_13 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_14 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_15 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_16 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_17 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_18 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_19 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_20 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_21 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_22 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_23 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_24 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_25 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_26 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_27 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_28 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_29 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_30 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_31 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_PcVal = pc; // @[EXU.scala 33:21]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 30:19]
      pc <= 64'h80000000; // @[EXU.scala 30:19]
    end else begin
      pc <= _AluOut_T_13; // @[EXU.scala 55:6]
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
module Main(
  input   clock,
  input   reset
);
  wire [63:0] ifu_io_Pc; // @[Main.scala 25:17]
  wire [31:0] ifu_io_Inst; // @[Main.scala 25:17]
  wire [31:0] idu_io_Inst; // @[Main.scala 29:17]
  wire  exu_clock; // @[Main.scala 42:17]
  wire  exu_reset; // @[Main.scala 42:17]
  wire [63:0] exu_io_PcVal; // @[Main.scala 42:17]
  IFU ifu ( // @[Main.scala 25:17]
    .io_Pc(ifu_io_Pc),
    .io_Inst(ifu_io_Inst)
  );
  IDU idu ( // @[Main.scala 29:17]
    .io_Inst(idu_io_Inst)
  );
  EXU exu ( // @[Main.scala 42:17]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_PcVal(exu_io_PcVal)
  );
  assign ifu_io_Pc = exu_io_PcVal; // @[Main.scala 12:14 Main.scala 53:6]
  assign idu_io_Inst = ifu_io_Inst; // @[Main.scala 13:16 Main.scala 27:8]
  assign exu_clock = clock;
  assign exu_reset = reset;
endmodule
