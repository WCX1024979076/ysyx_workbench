module Pc(
  input         clock,
  input         reset,
  output [63:0] io_PcVal
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] pc; // @[Pc.scala 13:17]
  wire [63:0] _pc_T_1 = pc + 64'h4; // @[Pc.scala 14:12]
  assign io_PcVal = pc; // @[Pc.scala 15:12]
  always @(posedge clock) begin
    if (reset) begin // @[Pc.scala 13:17]
      pc <= 64'h80000000; // @[Pc.scala 13:17]
    end else begin
      pc <= _pc_T_1; // @[Pc.scala 14:6]
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
  input         clock,
  input         reset,
  input  [31:0] io_Inst,
  output [63:0] io_PcVal
);
  wire  pc_clock; // @[Main.scala 25:16]
  wire  pc_reset; // @[Main.scala 25:16]
  wire [63:0] pc_io_PcVal; // @[Main.scala 25:16]
  Pc pc ( // @[Main.scala 25:16]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_PcVal(pc_io_PcVal)
  );
  assign io_PcVal = pc_io_PcVal; // @[Main.scala 26:12]
  assign pc_clock = clock;
  assign pc_reset = reset;
endmodule
