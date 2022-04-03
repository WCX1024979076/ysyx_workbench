module add(
  input         clock,
  input         reset,
  input  [63:0] io_value1,
  input  [63:0] io_value2,
  output [63:0] io_output
);
  assign io_output = io_value1 + io_value2; // @[add.scala 15:26]
endmodule
