module IFU(
  input         clock,
  input         reset,
  input  [63:0] io_Pc,
  input  [31:0] io_EXUClear,
  input         io_IDUWait,
  output [31:0] io_Inst,
  output [31:0] io_IFUFlag,
  output [63:0] io_PcVal
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] mem_Raddr; // @[IFU.scala 22:17]
  wire [63:0] mem_Rdata; // @[IFU.scala 22:17]
  wire [63:0] mem_Waddr; // @[IFU.scala 22:17]
  wire [63:0] mem_Wdata; // @[IFU.scala 22:17]
  wire [7:0] mem_Wmask; // @[IFU.scala 22:17]
  wire  mem_MemWrite; // @[IFU.scala 22:17]
  reg [31:0] InstReg; // @[IFU.scala 18:24]
  reg  IFUFlagReg; // @[IFU.scala 19:27]
  reg [63:0] PcValReg; // @[IFU.scala 20:25]
  wire  _T = ~io_IDUWait; // @[IFU.scala 24:9]
  wire [31:0] _IFUFlagReg_T = ~io_EXUClear; // @[IFU.scala 32:20]
  wire [31:0] _GEN_3 = _T ? _IFUFlagReg_T : {{31'd0}, IFUFlagReg}; // @[IFU.scala 25:3 IFU.scala 32:16 IFU.scala 19:27]
  Mem mem ( // @[IFU.scala 22:17]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  assign io_Inst = InstReg; // @[IFU.scala 36:11]
  assign io_IFUFlag = {{31'd0}, IFUFlagReg}; // @[IFU.scala 37:14]
  assign io_PcVal = PcValReg; // @[IFU.scala 38:12]
  assign mem_Raddr = io_Pc; // @[IFU.scala 25:3 IFU.scala 26:18]
  assign mem_Waddr = 64'h0; // @[IFU.scala 25:3 IFU.scala 28:18]
  assign mem_Wdata = 64'h0; // @[IFU.scala 25:3 IFU.scala 28:18]
  assign mem_Wmask = 8'h0;
  assign mem_MemWrite = 1'h0;
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 18:24]
      InstReg <= 32'h0; // @[IFU.scala 18:24]
    end else if (_T) begin // @[IFU.scala 25:3]
      InstReg <= mem_Rdata[31:0]; // @[IFU.scala 27:13]
    end
    if (reset) begin // @[IFU.scala 19:27]
      IFUFlagReg <= 1'h0; // @[IFU.scala 19:27]
    end else begin
      IFUFlagReg <= _GEN_3[0];
    end
    if (reset) begin // @[IFU.scala 20:25]
      PcValReg <= 64'h0; // @[IFU.scala 20:25]
    end else if (_T) begin // @[IFU.scala 25:3]
      PcValReg <= io_Pc; // @[IFU.scala 33:14]
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
  InstReg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  IFUFlagReg = _RAND_1[0:0];
  _RAND_2 = {2{`RANDOM}};
  PcValReg = _RAND_2[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input         clock,
  input         reset,
  input  [63:0] io_Pc,
  input  [31:0] io_Inst,
  input         io_IFUFlag,
  input         io_EXUClear,
  input         io_IDUWait,
  output        io_RegWrite,
  output        io_MemWrite,
  output [4:0]  io_AluOp,
  output [4:0]  io_AluSrc1Op,
  output [4:0]  io_AluSrc2Op,
  output [4:0]  io_PcSrc,
  output [3:0]  io_RinCtl,
  output [7:0]  io_MemMask,
  output [4:0]  io_Rdest,
  output [4:0]  io_R1,
  output [4:0]  io_R2,
  output [63:0] io_Imm,
  output        io_EbreakIn,
  output [63:0] io_PcVal,
  output        io_IDUFlag
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
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [63:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  reg  RegWriteReg; // @[IDU.scala 109:28]
  reg  MemWriteReg; // @[IDU.scala 110:28]
  reg [4:0] AluOpReg; // @[IDU.scala 111:25]
  reg [4:0] AluSrc1OpReg; // @[IDU.scala 112:29]
  reg [4:0] AluSrc2OpReg; // @[IDU.scala 113:29]
  reg [4:0] PcSrcReg; // @[IDU.scala 114:25]
  reg [3:0] RinCtlReg; // @[IDU.scala 115:26]
  reg [7:0] MemMaskReg; // @[IDU.scala 116:27]
  reg [4:0] RdestReg; // @[IDU.scala 117:25]
  reg [4:0] R1Reg; // @[IDU.scala 118:22]
  reg [4:0] R2Reg; // @[IDU.scala 119:22]
  reg [63:0] ImmReg; // @[IDU.scala 120:23]
  reg  IDUFlagReg; // @[IDU.scala 121:27]
  reg  EbreakInReg; // @[IDU.scala 122:28]
  reg [63:0] PcValReg; // @[IDU.scala 123:25]
  wire [6:0] opcode = io_Inst[6:0]; // @[IDU.scala 125:23]
  wire  _T = ~io_IDUWait; // @[IDU.scala 127:9]
  wire  _EbreakInReg_T = 32'h100073 == io_Inst; // @[Mux.scala 80:60]
  wire [31:0] ImmReg_lo = {io_Inst[31:12], 12'h0}; // @[IDU.scala 38:39]
  wire [31:0] ImmReg_hi = ImmReg_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _ImmReg_T_4 = {ImmReg_hi,ImmReg_lo}; // @[Cat.scala 30:58]
  wire [11:0] ImmReg_lo_1 = io_Inst[31:20]; // @[IDU.scala 35:31]
  wire [51:0] ImmReg_hi_1 = ImmReg_lo_1[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _ImmReg_T_9 = {ImmReg_hi_1,ImmReg_lo_1}; // @[Cat.scala 30:58]
  wire [11:0] _ImmReg_T_12 = {io_Inst[31:25], 5'h0}; // @[IDU.scala 36:40]
  wire [11:0] _GEN_15 = {{7'd0}, io_Inst[11:7]}; // @[IDU.scala 36:45]
  wire [11:0] ImmReg_lo_2 = _ImmReg_T_12 | _GEN_15; // @[IDU.scala 36:45]
  wire [51:0] ImmReg_hi_2 = ImmReg_lo_2[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _ImmReg_T_17 = {ImmReg_hi_2,ImmReg_lo_2}; // @[Cat.scala 30:58]
  wire [20:0] _ImmReg_T_36 = {io_Inst[31], 20'h0}; // @[IDU.scala 39:40]
  wire [10:0] _ImmReg_T_38 = {io_Inst[30:21], 1'h0}; // @[IDU.scala 39:63]
  wire [20:0] _GEN_16 = {{10'd0}, _ImmReg_T_38}; // @[IDU.scala 39:46]
  wire [20:0] _ImmReg_T_39 = _ImmReg_T_36 | _GEN_16; // @[IDU.scala 39:46]
  wire [11:0] _ImmReg_T_41 = {io_Inst[20], 11'h0}; // @[IDU.scala 39:85]
  wire [20:0] _GEN_17 = {{9'd0}, _ImmReg_T_41}; // @[IDU.scala 39:68]
  wire [20:0] _ImmReg_T_42 = _ImmReg_T_39 | _GEN_17; // @[IDU.scala 39:68]
  wire [19:0] _ImmReg_T_44 = {io_Inst[19:12], 12'h0}; // @[IDU.scala 39:108]
  wire [20:0] _GEN_18 = {{1'd0}, _ImmReg_T_44}; // @[IDU.scala 39:91]
  wire [20:0] ImmReg_lo_6 = _ImmReg_T_42 | _GEN_18; // @[IDU.scala 39:91]
  wire [42:0] ImmReg_hi_6 = ImmReg_lo_6[20] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _ImmReg_T_48 = {ImmReg_hi_6,ImmReg_lo_6}; // @[Cat.scala 30:58]
  wire [12:0] _ImmReg_T_56 = {io_Inst[31], 12'h0}; // @[IDU.scala 37:40]
  wire [10:0] _ImmReg_T_58 = {io_Inst[30:25], 5'h0}; // @[IDU.scala 37:63]
  wire [12:0] _GEN_19 = {{2'd0}, _ImmReg_T_58}; // @[IDU.scala 37:46]
  wire [12:0] _ImmReg_T_59 = _ImmReg_T_56 | _GEN_19; // @[IDU.scala 37:46]
  wire [4:0] _ImmReg_T_61 = {io_Inst[11:8], 1'h0}; // @[IDU.scala 37:84]
  wire [12:0] _GEN_20 = {{8'd0}, _ImmReg_T_61}; // @[IDU.scala 37:68]
  wire [12:0] _ImmReg_T_62 = _ImmReg_T_59 | _GEN_20; // @[IDU.scala 37:68]
  wire [11:0] _ImmReg_T_64 = {io_Inst[7], 11'h0}; // @[IDU.scala 37:104]
  wire [12:0] _GEN_21 = {{1'd0}, _ImmReg_T_64}; // @[IDU.scala 37:89]
  wire [12:0] ImmReg_lo_8 = _ImmReg_T_62 | _GEN_21; // @[IDU.scala 37:89]
  wire [50:0] ImmReg_hi_8 = ImmReg_lo_8[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _ImmReg_T_68 = {ImmReg_hi_8,ImmReg_lo_8}; // @[Cat.scala 30:58]
  wire [63:0] _ImmReg_T_71 = 7'h17 == opcode ? _ImmReg_T_4 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_73 = 7'h3 == opcode ? _ImmReg_T_9 : _ImmReg_T_71; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_75 = 7'h23 == opcode ? _ImmReg_T_17 : _ImmReg_T_73; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_77 = 7'h13 == opcode ? _ImmReg_T_9 : _ImmReg_T_75; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_79 = 7'h33 == opcode ? 64'h0 : _ImmReg_T_77; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_81 = 7'h1b == opcode ? _ImmReg_T_9 : _ImmReg_T_79; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_83 = 7'h3b == opcode ? 64'h0 : _ImmReg_T_81; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_85 = 7'h37 == opcode ? _ImmReg_T_4 : _ImmReg_T_83; // @[Mux.scala 80:57]
  wire [63:0] _ImmReg_T_87 = 7'h6f == opcode ? _ImmReg_T_48 : _ImmReg_T_85; // @[Mux.scala 80:57]
  wire [31:0] _contr_code_T = io_Inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _contr_code_T_1 = 32'h17 == _contr_code_T; // @[Lookup.scala 31:38]
  wire [31:0] _contr_code_T_2 = io_Inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _contr_code_T_3 = 32'h3003 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_5 = 32'h3023 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_7 = 32'h13 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire [31:0] _contr_code_T_8 = io_Inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _contr_code_T_9 = 32'h33 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_11 = 32'h1b == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_13 = 32'h3b == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_15 = 32'h1033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire [31:0] _contr_code_T_16 = io_Inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _contr_code_T_17 = 32'h1013 == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_19 = 32'h5033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_21 = 32'h5013 == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_23 = 32'h40005033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_25 = 32'h40005013 == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_27 = 32'h40000033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_29 = 32'h4000003b == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_31 = 32'h37 == _contr_code_T; // @[Lookup.scala 31:38]
  wire  _contr_code_T_33 = 32'h4033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_35 = 32'h4013 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_37 = 32'h6033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_39 = 32'h6013 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_41 = 32'h7033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_43 = 32'h7013 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_45 = 32'h2033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_47 = 32'h2013 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_49 = 32'h3033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_51 = 32'h3013 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_53 = 32'h63 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_55 = 32'h1063 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_57 = 32'h4063 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_59 = 32'h5063 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_61 = 32'h6063 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_63 = 32'h7063 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_65 = 32'h6f == _contr_code_T; // @[Lookup.scala 31:38]
  wire  _contr_code_T_67 = 32'h67 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_69 = 32'h501b == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_71 = 32'h3 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_73 = 32'h1003 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_75 = 32'h4003 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_77 = 32'h5003 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_79 = 32'h2003 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_81 = 32'h23 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_83 = 32'h1023 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_85 = 32'h2023 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_87 = 32'h2000033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_89 = 32'h2006033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_91 = 32'h200603b == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_93 = 32'h2007033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_95 = 32'h200003b == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_97 = 32'h2004033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_99 = 32'h2005033 == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_101 = 32'h4000503b == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_103 = 32'h503b == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_105 = 32'h101b == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_107 = 32'h4000501b == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_109 = 32'h200403b == _contr_code_T_8; // @[Lookup.scala 31:38]
  wire  _contr_code_T_111 = 32'h103b == _contr_code_T_16; // @[Lookup.scala 31:38]
  wire  _contr_code_T_128 = _contr_code_T_85 ? 1'h0 : _contr_code_T_87 | (_contr_code_T_89 | (_contr_code_T_91 | (
    _contr_code_T_93 | (_contr_code_T_95 | (_contr_code_T_97 | (_contr_code_T_99 | (_contr_code_T_101 | (
    _contr_code_T_103 | (_contr_code_T_105 | (_contr_code_T_107 | (_contr_code_T_109 | (_contr_code_T_111 |
    _contr_code_T_51)))))))))))); // @[Lookup.scala 33:37]
  wire  _contr_code_T_129 = _contr_code_T_83 ? 1'h0 : _contr_code_T_128; // @[Lookup.scala 33:37]
  wire  _contr_code_T_130 = _contr_code_T_81 ? 1'h0 : _contr_code_T_129; // @[Lookup.scala 33:37]
  wire  _contr_code_T_139 = _contr_code_T_63 ? 1'h0 : _contr_code_T_65 | (_contr_code_T_67 | (_contr_code_T_69 | (
    _contr_code_T_71 | (_contr_code_T_73 | (_contr_code_T_75 | (_contr_code_T_77 | (_contr_code_T_79 | _contr_code_T_130
    ))))))); // @[Lookup.scala 33:37]
  wire  _contr_code_T_140 = _contr_code_T_61 ? 1'h0 : _contr_code_T_139; // @[Lookup.scala 33:37]
  wire  _contr_code_T_141 = _contr_code_T_59 ? 1'h0 : _contr_code_T_140; // @[Lookup.scala 33:37]
  wire  _contr_code_T_142 = _contr_code_T_57 ? 1'h0 : _contr_code_T_141; // @[Lookup.scala 33:37]
  wire  _contr_code_T_143 = _contr_code_T_55 ? 1'h0 : _contr_code_T_142; // @[Lookup.scala 33:37]
  wire  _contr_code_T_144 = _contr_code_T_53 ? 1'h0 : _contr_code_T_143; // @[Lookup.scala 33:37]
  wire  _contr_code_T_168 = _contr_code_T_5 ? 1'h0 : _contr_code_T_7 | (_contr_code_T_9 | (_contr_code_T_11 | (
    _contr_code_T_13 | (_contr_code_T_15 | (_contr_code_T_17 | (_contr_code_T_19 | (_contr_code_T_21 | (_contr_code_T_23
     | (_contr_code_T_25 | (_contr_code_T_27 | (_contr_code_T_29 | (_contr_code_T_31 | (_contr_code_T_33 | (
    _contr_code_T_35 | (_contr_code_T_37 | (_contr_code_T_39 | (_contr_code_T_41 | (_contr_code_T_43 | (_contr_code_T_45
     | (_contr_code_T_47 | (_contr_code_T_49 | (_contr_code_T_51 | _contr_code_T_144)))))))))))))))))))))); // @[Lookup.scala 33:37]
  wire  contr_code_0 = _contr_code_T_1 | (_contr_code_T_3 | _contr_code_T_168); // @[Lookup.scala 33:37]
  wire  _contr_code_T_187 = _contr_code_T_79 ? 1'h0 : _contr_code_T_81 | (_contr_code_T_83 | _contr_code_T_85); // @[Lookup.scala 33:37]
  wire  _contr_code_T_188 = _contr_code_T_77 ? 1'h0 : _contr_code_T_187; // @[Lookup.scala 33:37]
  wire  _contr_code_T_189 = _contr_code_T_75 ? 1'h0 : _contr_code_T_188; // @[Lookup.scala 33:37]
  wire  _contr_code_T_190 = _contr_code_T_73 ? 1'h0 : _contr_code_T_189; // @[Lookup.scala 33:37]
  wire  _contr_code_T_191 = _contr_code_T_71 ? 1'h0 : _contr_code_T_190; // @[Lookup.scala 33:37]
  wire  _contr_code_T_192 = _contr_code_T_69 ? 1'h0 : _contr_code_T_191; // @[Lookup.scala 33:37]
  wire  _contr_code_T_193 = _contr_code_T_67 ? 1'h0 : _contr_code_T_192; // @[Lookup.scala 33:37]
  wire  _contr_code_T_194 = _contr_code_T_65 ? 1'h0 : _contr_code_T_193; // @[Lookup.scala 33:37]
  wire  _contr_code_T_195 = _contr_code_T_63 ? 1'h0 : _contr_code_T_194; // @[Lookup.scala 33:37]
  wire  _contr_code_T_196 = _contr_code_T_61 ? 1'h0 : _contr_code_T_195; // @[Lookup.scala 33:37]
  wire  _contr_code_T_197 = _contr_code_T_59 ? 1'h0 : _contr_code_T_196; // @[Lookup.scala 33:37]
  wire  _contr_code_T_198 = _contr_code_T_57 ? 1'h0 : _contr_code_T_197; // @[Lookup.scala 33:37]
  wire  _contr_code_T_199 = _contr_code_T_55 ? 1'h0 : _contr_code_T_198; // @[Lookup.scala 33:37]
  wire  _contr_code_T_200 = _contr_code_T_53 ? 1'h0 : _contr_code_T_199; // @[Lookup.scala 33:37]
  wire  _contr_code_T_201 = _contr_code_T_51 ? 1'h0 : _contr_code_T_200; // @[Lookup.scala 33:37]
  wire  _contr_code_T_202 = _contr_code_T_49 ? 1'h0 : _contr_code_T_201; // @[Lookup.scala 33:37]
  wire  _contr_code_T_203 = _contr_code_T_47 ? 1'h0 : _contr_code_T_202; // @[Lookup.scala 33:37]
  wire  _contr_code_T_204 = _contr_code_T_45 ? 1'h0 : _contr_code_T_203; // @[Lookup.scala 33:37]
  wire  _contr_code_T_205 = _contr_code_T_43 ? 1'h0 : _contr_code_T_204; // @[Lookup.scala 33:37]
  wire  _contr_code_T_206 = _contr_code_T_41 ? 1'h0 : _contr_code_T_205; // @[Lookup.scala 33:37]
  wire  _contr_code_T_207 = _contr_code_T_39 ? 1'h0 : _contr_code_T_206; // @[Lookup.scala 33:37]
  wire  _contr_code_T_208 = _contr_code_T_37 ? 1'h0 : _contr_code_T_207; // @[Lookup.scala 33:37]
  wire  _contr_code_T_209 = _contr_code_T_35 ? 1'h0 : _contr_code_T_208; // @[Lookup.scala 33:37]
  wire  _contr_code_T_210 = _contr_code_T_33 ? 1'h0 : _contr_code_T_209; // @[Lookup.scala 33:37]
  wire  _contr_code_T_211 = _contr_code_T_31 ? 1'h0 : _contr_code_T_210; // @[Lookup.scala 33:37]
  wire  _contr_code_T_212 = _contr_code_T_29 ? 1'h0 : _contr_code_T_211; // @[Lookup.scala 33:37]
  wire  _contr_code_T_213 = _contr_code_T_27 ? 1'h0 : _contr_code_T_212; // @[Lookup.scala 33:37]
  wire  _contr_code_T_214 = _contr_code_T_25 ? 1'h0 : _contr_code_T_213; // @[Lookup.scala 33:37]
  wire  _contr_code_T_215 = _contr_code_T_23 ? 1'h0 : _contr_code_T_214; // @[Lookup.scala 33:37]
  wire  _contr_code_T_216 = _contr_code_T_21 ? 1'h0 : _contr_code_T_215; // @[Lookup.scala 33:37]
  wire  _contr_code_T_217 = _contr_code_T_19 ? 1'h0 : _contr_code_T_216; // @[Lookup.scala 33:37]
  wire  _contr_code_T_218 = _contr_code_T_17 ? 1'h0 : _contr_code_T_217; // @[Lookup.scala 33:37]
  wire  _contr_code_T_219 = _contr_code_T_15 ? 1'h0 : _contr_code_T_218; // @[Lookup.scala 33:37]
  wire  _contr_code_T_220 = _contr_code_T_13 ? 1'h0 : _contr_code_T_219; // @[Lookup.scala 33:37]
  wire  _contr_code_T_221 = _contr_code_T_11 ? 1'h0 : _contr_code_T_220; // @[Lookup.scala 33:37]
  wire  _contr_code_T_222 = _contr_code_T_9 ? 1'h0 : _contr_code_T_221; // @[Lookup.scala 33:37]
  wire  _contr_code_T_223 = _contr_code_T_7 ? 1'h0 : _contr_code_T_222; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_227 = _contr_code_T_111 ? 2'h3 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_228 = _contr_code_T_109 ? 2'h3 : _contr_code_T_227; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_229 = _contr_code_T_107 ? 2'h3 : _contr_code_T_228; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_230 = _contr_code_T_105 ? 2'h3 : _contr_code_T_229; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_231 = _contr_code_T_103 ? 2'h3 : _contr_code_T_230; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_232 = _contr_code_T_101 ? 2'h3 : _contr_code_T_231; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_233 = _contr_code_T_99 ? 2'h0 : _contr_code_T_232; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_234 = _contr_code_T_97 ? 2'h0 : _contr_code_T_233; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_235 = _contr_code_T_95 ? 2'h0 : _contr_code_T_234; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_236 = _contr_code_T_93 ? 2'h0 : _contr_code_T_235; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_237 = _contr_code_T_91 ? 2'h0 : _contr_code_T_236; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_238 = _contr_code_T_89 ? 2'h0 : _contr_code_T_237; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_239 = _contr_code_T_87 ? 2'h0 : _contr_code_T_238; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_240 = _contr_code_T_85 ? 2'h0 : _contr_code_T_239; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_241 = _contr_code_T_83 ? 2'h0 : _contr_code_T_240; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_242 = _contr_code_T_81 ? 2'h0 : _contr_code_T_241; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_243 = _contr_code_T_79 ? 2'h0 : _contr_code_T_242; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_244 = _contr_code_T_77 ? 2'h0 : _contr_code_T_243; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_245 = _contr_code_T_75 ? 2'h0 : _contr_code_T_244; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_246 = _contr_code_T_73 ? 2'h0 : _contr_code_T_245; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_247 = _contr_code_T_71 ? 2'h0 : _contr_code_T_246; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_248 = _contr_code_T_69 ? 2'h3 : _contr_code_T_247; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_249 = _contr_code_T_67 ? 2'h1 : _contr_code_T_248; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_250 = _contr_code_T_65 ? 2'h1 : _contr_code_T_249; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_251 = _contr_code_T_63 ? 2'h0 : _contr_code_T_250; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_252 = _contr_code_T_61 ? 2'h0 : _contr_code_T_251; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_253 = _contr_code_T_59 ? 2'h0 : _contr_code_T_252; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_254 = _contr_code_T_57 ? 2'h0 : _contr_code_T_253; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_255 = _contr_code_T_55 ? 2'h0 : _contr_code_T_254; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_256 = _contr_code_T_53 ? 2'h0 : _contr_code_T_255; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_257 = _contr_code_T_51 ? 2'h0 : _contr_code_T_256; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_258 = _contr_code_T_49 ? 2'h0 : _contr_code_T_257; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_259 = _contr_code_T_47 ? 2'h0 : _contr_code_T_258; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_260 = _contr_code_T_45 ? 2'h0 : _contr_code_T_259; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_261 = _contr_code_T_43 ? 2'h0 : _contr_code_T_260; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_262 = _contr_code_T_41 ? 2'h0 : _contr_code_T_261; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_263 = _contr_code_T_39 ? 2'h0 : _contr_code_T_262; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_264 = _contr_code_T_37 ? 2'h0 : _contr_code_T_263; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_265 = _contr_code_T_35 ? 2'h0 : _contr_code_T_264; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_266 = _contr_code_T_33 ? 2'h0 : _contr_code_T_265; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_267 = _contr_code_T_31 ? 2'h2 : _contr_code_T_266; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_268 = _contr_code_T_29 ? 2'h3 : _contr_code_T_267; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_269 = _contr_code_T_27 ? 2'h0 : _contr_code_T_268; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_270 = _contr_code_T_25 ? 2'h0 : _contr_code_T_269; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_271 = _contr_code_T_23 ? 2'h0 : _contr_code_T_270; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_272 = _contr_code_T_21 ? 2'h0 : _contr_code_T_271; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_273 = _contr_code_T_19 ? 2'h0 : _contr_code_T_272; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_274 = _contr_code_T_17 ? 2'h0 : _contr_code_T_273; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_275 = _contr_code_T_15 ? 2'h0 : _contr_code_T_274; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_276 = _contr_code_T_13 ? 2'h3 : _contr_code_T_275; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_277 = _contr_code_T_11 ? 2'h0 : _contr_code_T_276; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_278 = _contr_code_T_9 ? 2'h0 : _contr_code_T_277; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_279 = _contr_code_T_7 ? 2'h0 : _contr_code_T_278; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_280 = _contr_code_T_5 ? 2'h0 : _contr_code_T_279; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_281 = _contr_code_T_3 ? 2'h0 : _contr_code_T_280; // @[Lookup.scala 33:37]
  wire [1:0] contr_code_2 = _contr_code_T_1 ? 2'h1 : _contr_code_T_281; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_282 = _contr_code_T_51 ? 3'h4 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_283 = _contr_code_T_111 ? 3'h0 : _contr_code_T_282; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_284 = _contr_code_T_109 ? 3'h6 : _contr_code_T_283; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_285 = _contr_code_T_107 ? 3'h2 : _contr_code_T_284; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_286 = _contr_code_T_105 ? 3'h2 : _contr_code_T_285; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_287 = _contr_code_T_103 ? 3'h0 : _contr_code_T_286; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_288 = _contr_code_T_101 ? 3'h0 : _contr_code_T_287; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_289 = _contr_code_T_99 ? 3'h0 : _contr_code_T_288; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_290 = _contr_code_T_97 ? 3'h0 : _contr_code_T_289; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_291 = _contr_code_T_95 ? 3'h0 : _contr_code_T_290; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_292 = _contr_code_T_93 ? 3'h0 : _contr_code_T_291; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_293 = _contr_code_T_91 ? 3'h0 : _contr_code_T_292; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_294 = _contr_code_T_89 ? 3'h0 : _contr_code_T_293; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_295 = _contr_code_T_87 ? 3'h0 : _contr_code_T_294; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_296 = _contr_code_T_85 ? 3'h4 : _contr_code_T_295; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_297 = _contr_code_T_83 ? 3'h4 : _contr_code_T_296; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_298 = _contr_code_T_81 ? 3'h4 : _contr_code_T_297; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_299 = _contr_code_T_79 ? 3'h4 : _contr_code_T_298; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_300 = _contr_code_T_77 ? 3'h4 : _contr_code_T_299; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_301 = _contr_code_T_75 ? 3'h4 : _contr_code_T_300; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_302 = _contr_code_T_73 ? 3'h4 : _contr_code_T_301; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_303 = _contr_code_T_71 ? 3'h4 : _contr_code_T_302; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_304 = _contr_code_T_69 ? 3'h2 : _contr_code_T_303; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_305 = _contr_code_T_67 ? 3'h5 : _contr_code_T_304; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_306 = _contr_code_T_65 ? 3'h5 : _contr_code_T_305; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_307 = _contr_code_T_63 ? 3'h0 : _contr_code_T_306; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_308 = _contr_code_T_61 ? 3'h0 : _contr_code_T_307; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_309 = _contr_code_T_59 ? 3'h0 : _contr_code_T_308; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_310 = _contr_code_T_57 ? 3'h0 : _contr_code_T_309; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_311 = _contr_code_T_55 ? 3'h0 : _contr_code_T_310; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_312 = _contr_code_T_53 ? 3'h0 : _contr_code_T_311; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_313 = _contr_code_T_51 ? 3'h4 : _contr_code_T_312; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_314 = _contr_code_T_49 ? 3'h0 : _contr_code_T_313; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_315 = _contr_code_T_47 ? 3'h4 : _contr_code_T_314; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_316 = _contr_code_T_45 ? 3'h0 : _contr_code_T_315; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_317 = _contr_code_T_43 ? 3'h4 : _contr_code_T_316; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_318 = _contr_code_T_41 ? 3'h0 : _contr_code_T_317; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_319 = _contr_code_T_39 ? 3'h4 : _contr_code_T_318; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_320 = _contr_code_T_37 ? 3'h0 : _contr_code_T_319; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_321 = _contr_code_T_35 ? 3'h4 : _contr_code_T_320; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_322 = _contr_code_T_33 ? 3'h0 : _contr_code_T_321; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_323 = _contr_code_T_31 ? 3'h3 : _contr_code_T_322; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_324 = _contr_code_T_29 ? 3'h0 : _contr_code_T_323; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_325 = _contr_code_T_27 ? 3'h0 : _contr_code_T_324; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_326 = _contr_code_T_25 ? 3'h2 : _contr_code_T_325; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_327 = _contr_code_T_23 ? 3'h1 : _contr_code_T_326; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_328 = _contr_code_T_21 ? 3'h2 : _contr_code_T_327; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_329 = _contr_code_T_19 ? 3'h1 : _contr_code_T_328; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_330 = _contr_code_T_17 ? 3'h2 : _contr_code_T_329; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_331 = _contr_code_T_15 ? 3'h1 : _contr_code_T_330; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_332 = _contr_code_T_13 ? 3'h0 : _contr_code_T_331; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_333 = _contr_code_T_11 ? 3'h4 : _contr_code_T_332; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_334 = _contr_code_T_9 ? 3'h0 : _contr_code_T_333; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_335 = _contr_code_T_7 ? 3'h4 : _contr_code_T_334; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_336 = _contr_code_T_5 ? 3'h4 : _contr_code_T_335; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_337 = _contr_code_T_3 ? 3'h4 : _contr_code_T_336; // @[Lookup.scala 33:37]
  wire [2:0] contr_code_3 = _contr_code_T_1 ? 3'h4 : _contr_code_T_337; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_338 = _contr_code_T_51 ? 2'h2 : 2'h0; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_339 = _contr_code_T_111 ? 4'he : {{2'd0}, _contr_code_T_338}; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_340 = _contr_code_T_109 ? 5'h11 : {{1'd0}, _contr_code_T_339}; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_341 = _contr_code_T_107 ? 5'h10 : _contr_code_T_340; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_342 = _contr_code_T_105 ? 5'he : _contr_code_T_341; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_343 = _contr_code_T_103 ? 5'hf : _contr_code_T_342; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_344 = _contr_code_T_101 ? 5'h10 : _contr_code_T_343; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_345 = _contr_code_T_99 ? 5'h5 : _contr_code_T_344; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_346 = _contr_code_T_97 ? 5'h4 : _contr_code_T_345; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_347 = _contr_code_T_95 ? 5'h3 : _contr_code_T_346; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_348 = _contr_code_T_93 ? 5'h7 : _contr_code_T_347; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_349 = _contr_code_T_91 ? 5'h6 : _contr_code_T_348; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_350 = _contr_code_T_89 ? 5'h6 : _contr_code_T_349; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_351 = _contr_code_T_87 ? 5'h3 : _contr_code_T_350; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_352 = _contr_code_T_85 ? 5'h1 : _contr_code_T_351; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_353 = _contr_code_T_83 ? 5'h1 : _contr_code_T_352; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_354 = _contr_code_T_81 ? 5'h1 : _contr_code_T_353; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_355 = _contr_code_T_79 ? 5'h1 : _contr_code_T_354; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_356 = _contr_code_T_77 ? 5'h1 : _contr_code_T_355; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_357 = _contr_code_T_75 ? 5'h1 : _contr_code_T_356; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_358 = _contr_code_T_73 ? 5'h1 : _contr_code_T_357; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_359 = _contr_code_T_71 ? 5'h1 : _contr_code_T_358; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_360 = _contr_code_T_69 ? 5'hf : _contr_code_T_359; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_361 = _contr_code_T_67 ? 5'h1 : _contr_code_T_360; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_362 = _contr_code_T_65 ? 5'h1 : _contr_code_T_361; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_363 = _contr_code_T_63 ? 5'h2 : _contr_code_T_362; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_364 = _contr_code_T_61 ? 5'h2 : _contr_code_T_363; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_365 = _contr_code_T_59 ? 5'h2 : _contr_code_T_364; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_366 = _contr_code_T_57 ? 5'h2 : _contr_code_T_365; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_367 = _contr_code_T_55 ? 5'h2 : _contr_code_T_366; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_368 = _contr_code_T_53 ? 5'h2 : _contr_code_T_367; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_369 = _contr_code_T_51 ? 5'h2 : _contr_code_T_368; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_370 = _contr_code_T_49 ? 5'h2 : _contr_code_T_369; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_371 = _contr_code_T_47 ? 5'h2 : _contr_code_T_370; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_372 = _contr_code_T_45 ? 5'h2 : _contr_code_T_371; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_373 = _contr_code_T_43 ? 5'hd : _contr_code_T_372; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_374 = _contr_code_T_41 ? 5'hd : _contr_code_T_373; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_375 = _contr_code_T_39 ? 5'hc : _contr_code_T_374; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_376 = _contr_code_T_37 ? 5'hc : _contr_code_T_375; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_377 = _contr_code_T_35 ? 5'hb : _contr_code_T_376; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_378 = _contr_code_T_33 ? 5'hb : _contr_code_T_377; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_379 = _contr_code_T_31 ? 5'h8 : _contr_code_T_378; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_380 = _contr_code_T_29 ? 5'h2 : _contr_code_T_379; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_381 = _contr_code_T_27 ? 5'h2 : _contr_code_T_380; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_382 = _contr_code_T_25 ? 5'ha : _contr_code_T_381; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_383 = _contr_code_T_23 ? 5'ha : _contr_code_T_382; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_384 = _contr_code_T_21 ? 5'h9 : _contr_code_T_383; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_385 = _contr_code_T_19 ? 5'h9 : _contr_code_T_384; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_386 = _contr_code_T_17 ? 5'h8 : _contr_code_T_385; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_387 = _contr_code_T_15 ? 5'h8 : _contr_code_T_386; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_388 = _contr_code_T_13 ? 5'h1 : _contr_code_T_387; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_389 = _contr_code_T_11 ? 5'h1 : _contr_code_T_388; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_390 = _contr_code_T_9 ? 5'h1 : _contr_code_T_389; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_391 = _contr_code_T_7 ? 5'h1 : _contr_code_T_390; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_392 = _contr_code_T_5 ? 5'h1 : _contr_code_T_391; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_417 = _contr_code_T_67 ? 2'h2 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_418 = _contr_code_T_65 ? 2'h1 : _contr_code_T_417; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_419 = _contr_code_T_63 ? 4'h8 : {{2'd0}, _contr_code_T_418}; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_420 = _contr_code_T_61 ? 4'h7 : _contr_code_T_419; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_421 = _contr_code_T_59 ? 4'h6 : _contr_code_T_420; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_422 = _contr_code_T_57 ? 4'h5 : _contr_code_T_421; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_423 = _contr_code_T_55 ? 4'h3 : _contr_code_T_422; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_424 = _contr_code_T_53 ? 4'h4 : _contr_code_T_423; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_425 = _contr_code_T_51 ? 4'h0 : _contr_code_T_424; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_426 = _contr_code_T_49 ? 4'h0 : _contr_code_T_425; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_427 = _contr_code_T_47 ? 4'h0 : _contr_code_T_426; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_428 = _contr_code_T_45 ? 4'h0 : _contr_code_T_427; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_429 = _contr_code_T_43 ? 4'h0 : _contr_code_T_428; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_430 = _contr_code_T_41 ? 4'h0 : _contr_code_T_429; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_431 = _contr_code_T_39 ? 4'h0 : _contr_code_T_430; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_432 = _contr_code_T_37 ? 4'h0 : _contr_code_T_431; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_433 = _contr_code_T_35 ? 4'h0 : _contr_code_T_432; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_434 = _contr_code_T_33 ? 4'h0 : _contr_code_T_433; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_435 = _contr_code_T_31 ? 4'h0 : _contr_code_T_434; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_436 = _contr_code_T_29 ? 4'h0 : _contr_code_T_435; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_437 = _contr_code_T_27 ? 4'h0 : _contr_code_T_436; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_438 = _contr_code_T_25 ? 4'h0 : _contr_code_T_437; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_439 = _contr_code_T_23 ? 4'h0 : _contr_code_T_438; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_440 = _contr_code_T_21 ? 4'h0 : _contr_code_T_439; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_441 = _contr_code_T_19 ? 4'h0 : _contr_code_T_440; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_442 = _contr_code_T_17 ? 4'h0 : _contr_code_T_441; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_443 = _contr_code_T_15 ? 4'h0 : _contr_code_T_442; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_444 = _contr_code_T_13 ? 4'h0 : _contr_code_T_443; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_445 = _contr_code_T_11 ? 4'h0 : _contr_code_T_444; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_446 = _contr_code_T_9 ? 4'h0 : _contr_code_T_445; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_447 = _contr_code_T_7 ? 4'h0 : _contr_code_T_446; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_448 = _contr_code_T_5 ? 4'h0 : _contr_code_T_447; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_449 = _contr_code_T_3 ? 4'h0 : _contr_code_T_448; // @[Lookup.scala 33:37]
  wire [3:0] contr_code_5 = _contr_code_T_1 ? 4'h0 : _contr_code_T_449; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_450 = _contr_code_T_51 ? 4'he : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_451 = _contr_code_T_111 ? 4'h6 : _contr_code_T_450; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_452 = _contr_code_T_109 ? 4'h6 : _contr_code_T_451; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_453 = _contr_code_T_107 ? 4'h6 : _contr_code_T_452; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_454 = _contr_code_T_105 ? 4'h6 : _contr_code_T_453; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_455 = _contr_code_T_103 ? 4'h6 : _contr_code_T_454; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_456 = _contr_code_T_101 ? 4'h6 : _contr_code_T_455; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_457 = _contr_code_T_99 ? 4'h0 : _contr_code_T_456; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_458 = _contr_code_T_97 ? 4'h0 : _contr_code_T_457; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_459 = _contr_code_T_95 ? 4'h6 : _contr_code_T_458; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_460 = _contr_code_T_93 ? 4'h0 : _contr_code_T_459; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_461 = _contr_code_T_91 ? 4'h6 : _contr_code_T_460; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_462 = _contr_code_T_89 ? 4'h0 : _contr_code_T_461; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_463 = _contr_code_T_87 ? 4'h0 : _contr_code_T_462; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_464 = _contr_code_T_85 ? 4'h0 : _contr_code_T_463; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_465 = _contr_code_T_83 ? 4'h0 : _contr_code_T_464; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_466 = _contr_code_T_81 ? 4'h0 : _contr_code_T_465; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_467 = _contr_code_T_79 ? 4'h7 : _contr_code_T_466; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_468 = _contr_code_T_77 ? 4'h9 : _contr_code_T_467; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_469 = _contr_code_T_75 ? 4'h8 : _contr_code_T_468; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_470 = _contr_code_T_73 ? 4'h5 : _contr_code_T_469; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_471 = _contr_code_T_71 ? 4'h3 : _contr_code_T_470; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_472 = _contr_code_T_69 ? 4'h6 : _contr_code_T_471; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_473 = _contr_code_T_67 ? 4'h0 : _contr_code_T_472; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_474 = _contr_code_T_65 ? 4'h0 : _contr_code_T_473; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_475 = _contr_code_T_63 ? 4'h0 : _contr_code_T_474; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_476 = _contr_code_T_61 ? 4'h0 : _contr_code_T_475; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_477 = _contr_code_T_59 ? 4'h0 : _contr_code_T_476; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_478 = _contr_code_T_57 ? 4'h0 : _contr_code_T_477; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_479 = _contr_code_T_55 ? 4'h0 : _contr_code_T_478; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_480 = _contr_code_T_53 ? 4'h0 : _contr_code_T_479; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_481 = _contr_code_T_51 ? 4'he : _contr_code_T_480; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_482 = _contr_code_T_49 ? 4'he : _contr_code_T_481; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_483 = _contr_code_T_47 ? 4'hf : _contr_code_T_482; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_484 = _contr_code_T_45 ? 4'hf : _contr_code_T_483; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_485 = _contr_code_T_43 ? 4'h0 : _contr_code_T_484; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_486 = _contr_code_T_41 ? 4'h0 : _contr_code_T_485; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_487 = _contr_code_T_39 ? 4'h0 : _contr_code_T_486; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_488 = _contr_code_T_37 ? 4'h0 : _contr_code_T_487; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_489 = _contr_code_T_35 ? 4'h0 : _contr_code_T_488; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_490 = _contr_code_T_33 ? 4'h0 : _contr_code_T_489; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_491 = _contr_code_T_31 ? 4'h6 : _contr_code_T_490; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_492 = _contr_code_T_29 ? 4'h6 : _contr_code_T_491; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_493 = _contr_code_T_27 ? 4'h0 : _contr_code_T_492; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_494 = _contr_code_T_25 ? 4'h0 : _contr_code_T_493; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_495 = _contr_code_T_23 ? 4'h0 : _contr_code_T_494; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_496 = _contr_code_T_21 ? 4'h0 : _contr_code_T_495; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_497 = _contr_code_T_19 ? 4'h0 : _contr_code_T_496; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_498 = _contr_code_T_17 ? 4'h0 : _contr_code_T_497; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_499 = _contr_code_T_15 ? 4'h0 : _contr_code_T_498; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_500 = _contr_code_T_13 ? 4'h6 : _contr_code_T_499; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_501 = _contr_code_T_11 ? 4'h6 : _contr_code_T_500; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_502 = _contr_code_T_9 ? 4'h0 : _contr_code_T_501; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_503 = _contr_code_T_7 ? 4'h0 : _contr_code_T_502; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_504 = _contr_code_T_5 ? 4'h0 : _contr_code_T_503; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_520 = _contr_code_T_85 ? 4'hf : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_521 = _contr_code_T_83 ? 4'h3 : _contr_code_T_520; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_522 = _contr_code_T_81 ? 4'h1 : _contr_code_T_521; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_523 = _contr_code_T_79 ? 4'h0 : _contr_code_T_522; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_524 = _contr_code_T_77 ? 4'h0 : _contr_code_T_523; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_525 = _contr_code_T_75 ? 4'h0 : _contr_code_T_524; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_526 = _contr_code_T_73 ? 4'h0 : _contr_code_T_525; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_527 = _contr_code_T_71 ? 4'h0 : _contr_code_T_526; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_528 = _contr_code_T_69 ? 4'h0 : _contr_code_T_527; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_529 = _contr_code_T_67 ? 4'h0 : _contr_code_T_528; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_530 = _contr_code_T_65 ? 4'h0 : _contr_code_T_529; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_531 = _contr_code_T_63 ? 4'h0 : _contr_code_T_530; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_532 = _contr_code_T_61 ? 4'h0 : _contr_code_T_531; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_533 = _contr_code_T_59 ? 4'h0 : _contr_code_T_532; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_534 = _contr_code_T_57 ? 4'h0 : _contr_code_T_533; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_535 = _contr_code_T_55 ? 4'h0 : _contr_code_T_534; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_536 = _contr_code_T_53 ? 4'h0 : _contr_code_T_535; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_537 = _contr_code_T_51 ? 4'h0 : _contr_code_T_536; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_538 = _contr_code_T_49 ? 4'h0 : _contr_code_T_537; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_539 = _contr_code_T_47 ? 4'h0 : _contr_code_T_538; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_540 = _contr_code_T_45 ? 4'h0 : _contr_code_T_539; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_541 = _contr_code_T_43 ? 4'h0 : _contr_code_T_540; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_542 = _contr_code_T_41 ? 4'h0 : _contr_code_T_541; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_543 = _contr_code_T_39 ? 4'h0 : _contr_code_T_542; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_544 = _contr_code_T_37 ? 4'h0 : _contr_code_T_543; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_545 = _contr_code_T_35 ? 4'h0 : _contr_code_T_544; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_546 = _contr_code_T_33 ? 4'h0 : _contr_code_T_545; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_547 = _contr_code_T_31 ? 4'h0 : _contr_code_T_546; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_548 = _contr_code_T_29 ? 4'h0 : _contr_code_T_547; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_549 = _contr_code_T_27 ? 4'h0 : _contr_code_T_548; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_550 = _contr_code_T_25 ? 4'h0 : _contr_code_T_549; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_551 = _contr_code_T_23 ? 4'h0 : _contr_code_T_550; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_552 = _contr_code_T_21 ? 4'h0 : _contr_code_T_551; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_553 = _contr_code_T_19 ? 4'h0 : _contr_code_T_552; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_554 = _contr_code_T_17 ? 4'h0 : _contr_code_T_553; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_555 = _contr_code_T_15 ? 4'h0 : _contr_code_T_554; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_556 = _contr_code_T_13 ? 4'h0 : _contr_code_T_555; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_557 = _contr_code_T_11 ? 4'h0 : _contr_code_T_556; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_558 = _contr_code_T_9 ? 4'h0 : _contr_code_T_557; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_559 = _contr_code_T_7 ? 4'h0 : _contr_code_T_558; // @[Lookup.scala 33:37]
  wire [7:0] _contr_code_T_560 = _contr_code_T_5 ? 8'hff : {{4'd0}, _contr_code_T_559}; // @[Lookup.scala 33:37]
  assign io_RegWrite = RegWriteReg; // @[IDU.scala 221:15]
  assign io_MemWrite = MemWriteReg; // @[IDU.scala 222:15]
  assign io_AluOp = AluOpReg; // @[IDU.scala 223:12]
  assign io_AluSrc1Op = AluSrc1OpReg; // @[IDU.scala 224:16]
  assign io_AluSrc2Op = AluSrc2OpReg; // @[IDU.scala 225:16]
  assign io_PcSrc = PcSrcReg; // @[IDU.scala 226:12]
  assign io_RinCtl = RinCtlReg; // @[IDU.scala 227:13]
  assign io_MemMask = MemMaskReg; // @[IDU.scala 228:14]
  assign io_Rdest = RdestReg; // @[IDU.scala 229:12]
  assign io_R1 = R1Reg; // @[IDU.scala 230:9]
  assign io_R2 = R2Reg; // @[IDU.scala 231:9]
  assign io_Imm = ImmReg; // @[IDU.scala 232:10]
  assign io_EbreakIn = EbreakInReg; // @[IDU.scala 233:15]
  assign io_PcVal = PcValReg; // @[IDU.scala 234:12]
  assign io_IDUFlag = IDUFlagReg; // @[IDU.scala 235:14]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 109:28]
      RegWriteReg <= 1'h0; // @[IDU.scala 109:28]
    end else if (_T) begin // @[IDU.scala 128:3]
      RegWriteReg <= contr_code_0; // @[IDU.scala 211:17]
    end
    if (reset) begin // @[IDU.scala 110:28]
      MemWriteReg <= 1'h0; // @[IDU.scala 110:28]
    end else if (_T) begin // @[IDU.scala 128:3]
      if (_contr_code_T_1) begin // @[Lookup.scala 33:37]
        MemWriteReg <= 1'h0;
      end else if (_contr_code_T_3) begin // @[Lookup.scala 33:37]
        MemWriteReg <= 1'h0;
      end else begin
        MemWriteReg <= _contr_code_T_5 | _contr_code_T_223;
      end
    end
    if (reset) begin // @[IDU.scala 111:25]
      AluOpReg <= 5'h0; // @[IDU.scala 111:25]
    end else if (_T) begin // @[IDU.scala 128:3]
      if (_contr_code_T_1) begin // @[Lookup.scala 33:37]
        AluOpReg <= 5'h1;
      end else if (_contr_code_T_3) begin // @[Lookup.scala 33:37]
        AluOpReg <= 5'h1;
      end else begin
        AluOpReg <= _contr_code_T_392;
      end
    end
    if (reset) begin // @[IDU.scala 112:29]
      AluSrc1OpReg <= 5'h0; // @[IDU.scala 112:29]
    end else if (_T) begin // @[IDU.scala 128:3]
      AluSrc1OpReg <= {{3'd0}, contr_code_2}; // @[IDU.scala 213:18]
    end
    if (reset) begin // @[IDU.scala 113:29]
      AluSrc2OpReg <= 5'h0; // @[IDU.scala 113:29]
    end else if (_T) begin // @[IDU.scala 128:3]
      AluSrc2OpReg <= {{2'd0}, contr_code_3}; // @[IDU.scala 214:18]
    end
    if (reset) begin // @[IDU.scala 114:25]
      PcSrcReg <= 5'h0; // @[IDU.scala 114:25]
    end else if (_T) begin // @[IDU.scala 128:3]
      PcSrcReg <= {{1'd0}, contr_code_5}; // @[IDU.scala 216:14]
    end
    if (reset) begin // @[IDU.scala 115:26]
      RinCtlReg <= 4'h0; // @[IDU.scala 115:26]
    end else if (_T) begin // @[IDU.scala 128:3]
      if (_contr_code_T_1) begin // @[Lookup.scala 33:37]
        RinCtlReg <= 4'h0;
      end else if (_contr_code_T_3) begin // @[Lookup.scala 33:37]
        RinCtlReg <= 4'h1;
      end else begin
        RinCtlReg <= _contr_code_T_504;
      end
    end
    if (reset) begin // @[IDU.scala 116:27]
      MemMaskReg <= 8'h0; // @[IDU.scala 116:27]
    end else if (_T) begin // @[IDU.scala 128:3]
      if (_contr_code_T_1) begin // @[Lookup.scala 33:37]
        MemMaskReg <= 8'h0;
      end else if (_contr_code_T_3) begin // @[Lookup.scala 33:37]
        MemMaskReg <= 8'h0;
      end else begin
        MemMaskReg <= _contr_code_T_560;
      end
    end
    if (reset) begin // @[IDU.scala 117:25]
      RdestReg <= 5'h0; // @[IDU.scala 117:25]
    end else if (_T) begin // @[IDU.scala 128:3]
      RdestReg <= io_Inst[11:7]; // @[IDU.scala 129:14]
    end
    if (reset) begin // @[IDU.scala 118:22]
      R1Reg <= 5'h0; // @[IDU.scala 118:22]
    end else if (_T) begin // @[IDU.scala 128:3]
      R1Reg <= io_Inst[19:15]; // @[IDU.scala 130:11]
    end
    if (reset) begin // @[IDU.scala 119:22]
      R2Reg <= 5'h0; // @[IDU.scala 119:22]
    end else if (_T) begin // @[IDU.scala 128:3]
      R2Reg <= io_Inst[24:20]; // @[IDU.scala 131:11]
    end
    if (reset) begin // @[IDU.scala 120:23]
      ImmReg <= 64'h0; // @[IDU.scala 120:23]
    end else if (_T) begin // @[IDU.scala 128:3]
      if (7'h63 == opcode) begin // @[Mux.scala 80:57]
        ImmReg <= _ImmReg_T_68;
      end else if (7'h67 == opcode) begin // @[Mux.scala 80:57]
        ImmReg <= _ImmReg_T_9;
      end else begin
        ImmReg <= _ImmReg_T_87;
      end
    end
    if (reset) begin // @[IDU.scala 121:27]
      IDUFlagReg <= 1'h0; // @[IDU.scala 121:27]
    end else if (_T) begin // @[IDU.scala 128:3]
      IDUFlagReg <= io_IFUFlag & ~io_EXUClear; // @[IDU.scala 132:16]
    end
    if (reset) begin // @[IDU.scala 122:28]
      EbreakInReg <= 1'h0; // @[IDU.scala 122:28]
    end else if (_T) begin // @[IDU.scala 128:3]
      EbreakInReg <= _EbreakInReg_T; // @[IDU.scala 133:17]
    end
    if (reset) begin // @[IDU.scala 123:25]
      PcValReg <= 64'h0; // @[IDU.scala 123:25]
    end else if (_T) begin // @[IDU.scala 128:3]
      PcValReg <= io_Pc; // @[IDU.scala 134:14]
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
  RegWriteReg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  MemWriteReg = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  AluOpReg = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  AluSrc1OpReg = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  AluSrc2OpReg = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  PcSrcReg = _RAND_5[4:0];
  _RAND_6 = {1{`RANDOM}};
  RinCtlReg = _RAND_6[3:0];
  _RAND_7 = {1{`RANDOM}};
  MemMaskReg = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  RdestReg = _RAND_8[4:0];
  _RAND_9 = {1{`RANDOM}};
  R1Reg = _RAND_9[4:0];
  _RAND_10 = {1{`RANDOM}};
  R2Reg = _RAND_10[4:0];
  _RAND_11 = {2{`RANDOM}};
  ImmReg = _RAND_11[63:0];
  _RAND_12 = {1{`RANDOM}};
  IDUFlagReg = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  EbreakInReg = _RAND_13[0:0];
  _RAND_14 = {2{`RANDOM}};
  PcValReg = _RAND_14[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_Pc,
  input         io_RegWrite,
  input         io_MemWrite,
  input  [4:0]  io_AluOp,
  input  [4:0]  io_AluSrc1Op,
  input  [4:0]  io_AluSrc2Op,
  input  [4:0]  io_PcSrc,
  input  [3:0]  io_RinCtl,
  input  [63:0] io_DataR1,
  input  [63:0] io_DataR2,
  input  [63:0] io_Imm,
  input         io_EbreakIn,
  input  [4:0]  io_Rdest,
  input  [7:0]  io_MemMask,
  input         io_IDUFlag,
  output [7:0]  io_MemMaskOut,
  output [4:0]  io_RdestOut,
  output [63:0] io_DataR2Out,
  output        io_MemWriteOut,
  output        io_Zero,
  output        io_SignU,
  output        io_SignS,
  output [63:0] io_AluOut,
  output        io_RegWriteOut,
  output [3:0]  io_RinCtlOut,
  output        io_EXUFlag,
  output        io_EbreakInOut,
  output [63:0] io_PcVal,
  output        io_EXUClear,
  output [63:0] io_EXUPc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [63:0] _RAND_12;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] MemMaskOutReg; // @[EXU.scala 59:30]
  reg [4:0] RdestOutReg; // @[EXU.scala 60:28]
  reg [63:0] DataR2OutReg; // @[EXU.scala 61:29]
  reg  MemWriteOutReg; // @[EXU.scala 62:31]
  reg  ZeroReg; // @[EXU.scala 63:24]
  reg  SignUReg; // @[EXU.scala 64:25]
  reg  SignSReg; // @[EXU.scala 65:25]
  reg [63:0] AluOutReg; // @[EXU.scala 66:26]
  reg  RegWriteOutReg; // @[EXU.scala 67:31]
  reg [3:0] RinCtlOutReg; // @[EXU.scala 68:29]
  reg  EXUFlagReg; // @[EXU.scala 69:27]
  reg  EbreakInOutReg; // @[EXU.scala 70:31]
  reg [63:0] PcValReg; // @[EXU.scala 71:25]
  wire [63:0] _AluSrc1_T_5 = 5'h1 == io_AluSrc1Op ? io_Pc : io_DataR1; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc1_T_7 = 5'h2 == io_AluSrc1Op ? {{44'd0}, io_Imm[31:12]} : _AluSrc1_T_5; // @[Mux.scala 80:57]
  wire [63:0] AluSrc1 = 5'h3 == io_AluSrc1Op ? {{32'd0}, io_DataR1[31:0]} : _AluSrc1_T_7; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_6 = 5'h1 == io_AluSrc2Op ? {{58'd0}, io_DataR2[5:0]} : io_DataR2; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_8 = 5'h2 == io_AluSrc2Op ? {{58'd0}, io_Imm[5:0]} : _AluSrc2_T_6; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_10 = 5'h3 == io_AluSrc2Op ? 64'hc : _AluSrc2_T_8; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_12 = 5'h4 == io_AluSrc2Op ? io_Imm : _AluSrc2_T_10; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_14 = 5'h5 == io_AluSrc2Op ? 64'h4 : _AluSrc2_T_12; // @[Mux.scala 80:57]
  wire [63:0] AluSrc2 = 5'h6 == io_AluSrc2Op ? {{32'd0}, io_DataR2[31:0]} : _AluSrc2_T_14; // @[Mux.scala 80:57]
  wire [63:0] _AluOutTmp_T_1 = AluSrc1 + AluSrc2; // @[EXU.scala 108:28]
  wire [63:0] _AluOutTmp_T_3 = AluSrc1 - AluSrc2; // @[EXU.scala 109:28]
  wire [127:0] _AluOutTmp_T_4 = AluSrc1 * AluSrc2; // @[EXU.scala 110:28]
  wire [63:0] _AluOutTmp_T_5 = 5'h3 == io_AluSrc1Op ? {{32'd0}, io_DataR1[31:0]} : _AluSrc1_T_7; // @[EXU.scala 111:34]
  wire [63:0] _AluOutTmp_T_6 = 5'h6 == io_AluSrc2Op ? {{32'd0}, io_DataR2[31:0]} : _AluSrc2_T_14; // @[EXU.scala 111:53]
  wire [64:0] _AluOutTmp_T_8 = $signed(_AluOutTmp_T_5) / $signed(_AluOutTmp_T_6); // @[EXU.scala 111:63]
  wire [63:0] _AluOutTmp_T_9 = AluSrc1 / AluSrc2; // @[EXU.scala 112:28]
  wire [63:0] _AluOutTmp_T_13 = $signed(_AluOutTmp_T_5) % $signed(_AluOutTmp_T_6); // @[EXU.scala 113:63]
  wire [63:0] _GEN_2 = AluSrc1 % AluSrc2; // @[EXU.scala 114:28]
  wire [63:0] _AluOutTmp_T_14 = _GEN_2[63:0]; // @[EXU.scala 114:28]
  wire [126:0] _GEN_0 = {{63'd0}, AluSrc1}; // @[EXU.scala 115:28]
  wire [126:0] _AluOutTmp_T_16 = _GEN_0 << AluSrc2[5:0]; // @[EXU.scala 115:28]
  wire [63:0] _AluOutTmp_T_18 = AluSrc1 >> AluSrc2[5:0]; // @[EXU.scala 116:28]
  wire [63:0] _AluOutTmp_T_22 = $signed(_AluOutTmp_T_5) >>> AluSrc2[5:0]; // @[EXU.scala 117:60]
  wire [63:0] _AluOutTmp_T_23 = AluSrc1 ^ AluSrc2; // @[EXU.scala 118:28]
  wire [63:0] _AluOutTmp_T_24 = AluSrc1 | AluSrc2; // @[EXU.scala 119:28]
  wire [63:0] _AluOutTmp_T_25 = AluSrc1 & AluSrc2; // @[EXU.scala 120:28]
  wire [94:0] _GEN_1 = {{63'd0}, AluSrc1[31:0]}; // @[EXU.scala 121:34]
  wire [94:0] _AluOutTmp_T_28 = _GEN_1 << AluSrc2[5:0]; // @[EXU.scala 121:34]
  wire [31:0] _AluOutTmp_T_31 = AluSrc1[31:0] >> AluSrc2[5:0]; // @[EXU.scala 122:34]
  wire [31:0] _AluOutTmp_T_33 = AluSrc1[31:0]; // @[EXU.scala 123:40]
  wire [31:0] _AluOutTmp_T_36 = $signed(_AluOutTmp_T_33) >>> AluSrc2[5:0]; // @[EXU.scala 123:66]
  wire [31:0] _AluOutTmp_T_40 = AluSrc2[31:0]; // @[EXU.scala 124:65]
  wire [32:0] _AluOutTmp_T_42 = $signed(_AluOutTmp_T_33) / $signed(_AluOutTmp_T_40); // @[EXU.scala 124:75]
  wire [63:0] _AluOutTmp_T_44 = 5'h1 == io_AluOp ? _AluOutTmp_T_1 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _AluOutTmp_T_46 = 5'h2 == io_AluOp ? _AluOutTmp_T_3 : _AluOutTmp_T_44; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_48 = 5'h3 == io_AluOp ? _AluOutTmp_T_4 : {{64'd0}, _AluOutTmp_T_46}; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_50 = 5'h4 == io_AluOp ? {{63'd0}, _AluOutTmp_T_8} : _AluOutTmp_T_48; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_52 = 5'h5 == io_AluOp ? {{64'd0}, _AluOutTmp_T_9} : _AluOutTmp_T_50; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_54 = 5'h6 == io_AluOp ? {{64'd0}, _AluOutTmp_T_13} : _AluOutTmp_T_52; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_56 = 5'h7 == io_AluOp ? {{64'd0}, _AluOutTmp_T_14} : _AluOutTmp_T_54; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_58 = 5'h8 == io_AluOp ? {{1'd0}, _AluOutTmp_T_16} : _AluOutTmp_T_56; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_60 = 5'h9 == io_AluOp ? {{64'd0}, _AluOutTmp_T_18} : _AluOutTmp_T_58; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_62 = 5'ha == io_AluOp ? {{64'd0}, _AluOutTmp_T_22} : _AluOutTmp_T_60; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_64 = 5'hb == io_AluOp ? {{64'd0}, _AluOutTmp_T_23} : _AluOutTmp_T_62; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_66 = 5'hc == io_AluOp ? {{64'd0}, _AluOutTmp_T_24} : _AluOutTmp_T_64; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_68 = 5'hd == io_AluOp ? {{64'd0}, _AluOutTmp_T_25} : _AluOutTmp_T_66; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_70 = 5'he == io_AluOp ? {{33'd0}, _AluOutTmp_T_28} : _AluOutTmp_T_68; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_72 = 5'hf == io_AluOp ? {{96'd0}, _AluOutTmp_T_31} : _AluOutTmp_T_70; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_74 = 5'h10 == io_AluOp ? {{96'd0}, _AluOutTmp_T_36} : _AluOutTmp_T_72; // @[Mux.scala 80:57]
  wire [127:0] _AluOutTmp_T_76 = 5'h11 == io_AluOp ? {{95'd0}, _AluOutTmp_T_42} : _AluOutTmp_T_74; // @[Mux.scala 80:57]
  wire [63:0] AluOutTmp = _AluOutTmp_T_76[63:0]; // @[EXU.scala 102:24 EXU.scala 107:13]
  wire  ZeroTmp = AluOutTmp == 64'h0; // @[EXU.scala 127:27]
  wire  SignSTmp_hi = AluSrc1[63]; // @[EXU.scala 129:36]
  wire  SignSTmp_lo = AluSrc2[63]; // @[EXU.scala 129:48]
  wire [1:0] _SignSTmp_T = {SignSTmp_hi,SignSTmp_lo}; // @[Cat.scala 30:58]
  wire  _SignSTmp_T_2 = ~AluOutTmp[63]; // @[EXU.scala 132:16]
  wire  _SignSTmp_T_8 = 2'h0 == _SignSTmp_T ? _SignSTmp_T_2 : 2'h1 == _SignSTmp_T; // @[Mux.scala 80:57]
  wire  SignSTmp = 2'h3 == _SignSTmp_T ? _SignSTmp_T_2 : _SignSTmp_T_8; // @[Mux.scala 80:57]
  wire  _SignUTmp_T_6 = 2'h1 == _SignSTmp_T ? 1'h0 : 1'h1; // @[Mux.scala 80:57]
  wire  _SignUTmp_T_8 = 2'h0 == _SignSTmp_T ? _SignSTmp_T_2 : _SignUTmp_T_6; // @[Mux.scala 80:57]
  wire  SignUTmp = 2'h3 == _SignSTmp_T ? _SignSTmp_T_2 : _SignUTmp_T_8; // @[Mux.scala 80:57]
  wire  _io_EXUClear_T_1 = ~ZeroTmp; // @[EXU.scala 162:74]
  wire  _io_EXUClear_T_7 = ~SignSTmp; // @[EXU.scala 162:181]
  wire  _io_EXUClear_T_14 = ~SignUTmp; // @[EXU.scala 162:289]
  wire [63:0] _io_EXUPc_T_1 = io_Pc + 64'h4; // @[EXU.scala 164:41]
  wire [20:0] io_EXUPc_lo = io_Imm[20:0]; // @[EXU.scala 166:34]
  wire [42:0] io_EXUPc_hi = io_EXUPc_lo[20] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_EXUPc_T_7 = {io_EXUPc_hi,io_EXUPc_lo}; // @[Cat.scala 30:58]
  wire [63:0] _io_EXUPc_T_10 = io_Pc + _io_EXUPc_T_7; // @[EXU.scala 166:21]
  wire [63:0] _io_EXUPc_T_12 = io_DataR1 + io_Imm; // @[EXU.scala 167:26]
  wire [63:0] _io_EXUPc_T_14 = _io_EXUPc_T_12 & 64'hfffffffffffffffe; // @[EXU.scala 167:36]
  wire [12:0] io_EXUPc_lo_1 = io_Imm[12:0]; // @[EXU.scala 169:34]
  wire [50:0] io_EXUPc_hi_1 = io_EXUPc_lo_1[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_EXUPc_T_21 = {io_EXUPc_hi_1,io_EXUPc_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _io_EXUPc_T_24 = io_Pc + _io_EXUPc_T_21; // @[EXU.scala 169:21]
  wire [63:0] _io_EXUPc_T_26 = _io_EXUClear_T_1 ? _io_EXUPc_T_24 : _io_EXUPc_T_1; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_37 = ZeroTmp ? _io_EXUPc_T_24 : _io_EXUPc_T_1; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_49 = _io_EXUClear_T_7 ? _io_EXUPc_T_24 : _io_EXUPc_T_1; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_60 = SignSTmp ? _io_EXUPc_T_24 : _io_EXUPc_T_1; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_72 = _io_EXUClear_T_14 ? _io_EXUPc_T_24 : _io_EXUPc_T_1; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_83 = SignUTmp ? _io_EXUPc_T_24 : _io_EXUPc_T_1; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_85 = 5'h0 == io_PcSrc ? _io_EXUPc_T_1 : _io_EXUPc_T_1; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_87 = 5'h1 == io_PcSrc ? _io_EXUPc_T_10 : _io_EXUPc_T_85; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_89 = 5'h2 == io_PcSrc ? _io_EXUPc_T_14 : _io_EXUPc_T_87; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_91 = 5'h3 == io_PcSrc ? _io_EXUPc_T_26 : _io_EXUPc_T_89; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_93 = 5'h4 == io_PcSrc ? _io_EXUPc_T_37 : _io_EXUPc_T_91; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_95 = 5'h5 == io_PcSrc ? _io_EXUPc_T_49 : _io_EXUPc_T_93; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_97 = 5'h6 == io_PcSrc ? _io_EXUPc_T_60 : _io_EXUPc_T_95; // @[Mux.scala 80:57]
  wire [63:0] _io_EXUPc_T_99 = 5'h7 == io_PcSrc ? _io_EXUPc_T_72 : _io_EXUPc_T_97; // @[Mux.scala 80:57]
  assign io_MemMaskOut = MemMaskOutReg; // @[EXU.scala 148:17]
  assign io_RdestOut = RdestOutReg; // @[EXU.scala 149:15]
  assign io_DataR2Out = DataR2OutReg; // @[EXU.scala 150:16]
  assign io_MemWriteOut = MemWriteOutReg; // @[EXU.scala 151:18]
  assign io_Zero = ZeroReg; // @[EXU.scala 152:11]
  assign io_SignU = SignUReg; // @[EXU.scala 153:12]
  assign io_SignS = SignSReg; // @[EXU.scala 154:12]
  assign io_AluOut = AluOutReg; // @[EXU.scala 155:13]
  assign io_RegWriteOut = RegWriteOutReg; // @[EXU.scala 156:18]
  assign io_RinCtlOut = RinCtlOutReg; // @[EXU.scala 157:16]
  assign io_EXUFlag = EXUFlagReg; // @[EXU.scala 158:14]
  assign io_EbreakInOut = EbreakInOutReg; // @[EXU.scala 159:18]
  assign io_PcVal = PcValReg; // @[EXU.scala 160:12]
  assign io_EXUClear = io_IDUFlag & (io_PcSrc == 5'h3 & ~ZeroTmp | io_PcSrc == 5'h4 & ZeroTmp | io_PcSrc == 5'h5 & ~
    SignSTmp | io_PcSrc == 5'h6 & SignSTmp | io_PcSrc == 5'h7 & ~SignUTmp | io_PcSrc == 5'h8 & SignUTmp | io_PcSrc == 5'h1
     | io_PcSrc == 5'h2); // @[EXU.scala 162:29]
  assign io_EXUPc = 5'h8 == io_PcSrc ? _io_EXUPc_T_83 : _io_EXUPc_T_99; // @[Mux.scala 80:57]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 59:30]
      MemMaskOutReg <= 8'h0; // @[EXU.scala 59:30]
    end else begin
      MemMaskOutReg <= io_MemMask; // @[EXU.scala 73:17]
    end
    if (reset) begin // @[EXU.scala 60:28]
      RdestOutReg <= 5'h0; // @[EXU.scala 60:28]
    end else begin
      RdestOutReg <= io_Rdest; // @[EXU.scala 74:15]
    end
    if (reset) begin // @[EXU.scala 61:29]
      DataR2OutReg <= 64'h0; // @[EXU.scala 61:29]
    end else begin
      DataR2OutReg <= io_DataR2; // @[EXU.scala 75:16]
    end
    if (reset) begin // @[EXU.scala 62:31]
      MemWriteOutReg <= 1'h0; // @[EXU.scala 62:31]
    end else begin
      MemWriteOutReg <= io_MemWrite; // @[EXU.scala 76:18]
    end
    if (reset) begin // @[EXU.scala 63:24]
      ZeroReg <= 1'h0; // @[EXU.scala 63:24]
    end else begin
      ZeroReg <= ZeroTmp; // @[EXU.scala 144:11]
    end
    if (reset) begin // @[EXU.scala 64:25]
      SignUReg <= 1'h0; // @[EXU.scala 64:25]
    end else if (2'h3 == _SignSTmp_T) begin // @[Mux.scala 80:57]
      SignUReg <= _SignSTmp_T_2;
    end else if (2'h0 == _SignSTmp_T) begin // @[Mux.scala 80:57]
      SignUReg <= _SignSTmp_T_2;
    end else if (2'h1 == _SignSTmp_T) begin // @[Mux.scala 80:57]
      SignUReg <= 1'h0;
    end else begin
      SignUReg <= 1'h1;
    end
    if (reset) begin // @[EXU.scala 65:25]
      SignSReg <= 1'h0; // @[EXU.scala 65:25]
    end else if (2'h3 == _SignSTmp_T) begin // @[Mux.scala 80:57]
      SignSReg <= _SignSTmp_T_2;
    end else if (2'h0 == _SignSTmp_T) begin // @[Mux.scala 80:57]
      SignSReg <= _SignSTmp_T_2;
    end else begin
      SignSReg <= 2'h1 == _SignSTmp_T;
    end
    if (reset) begin // @[EXU.scala 66:26]
      AluOutReg <= 64'h0; // @[EXU.scala 66:26]
    end else begin
      AluOutReg <= AluOutTmp; // @[EXU.scala 143:13]
    end
    if (reset) begin // @[EXU.scala 67:31]
      RegWriteOutReg <= 1'h0; // @[EXU.scala 67:31]
    end else begin
      RegWriteOutReg <= io_RegWrite; // @[EXU.scala 77:18]
    end
    if (reset) begin // @[EXU.scala 68:29]
      RinCtlOutReg <= 4'h0; // @[EXU.scala 68:29]
    end else begin
      RinCtlOutReg <= io_RinCtl; // @[EXU.scala 78:16]
    end
    if (reset) begin // @[EXU.scala 69:27]
      EXUFlagReg <= 1'h0; // @[EXU.scala 69:27]
    end else begin
      EXUFlagReg <= io_IDUFlag; // @[EXU.scala 187:14]
    end
    if (reset) begin // @[EXU.scala 70:31]
      EbreakInOutReg <= 1'h0; // @[EXU.scala 70:31]
    end else begin
      EbreakInOutReg <= io_EbreakIn; // @[EXU.scala 79:18]
    end
    if (reset) begin // @[EXU.scala 71:25]
      PcValReg <= 64'h0; // @[EXU.scala 71:25]
    end else begin
      PcValReg <= io_Pc; // @[EXU.scala 80:12]
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
  MemMaskOutReg = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  RdestOutReg = _RAND_1[4:0];
  _RAND_2 = {2{`RANDOM}};
  DataR2OutReg = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  MemWriteOutReg = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  ZeroReg = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  SignUReg = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  SignSReg = _RAND_6[0:0];
  _RAND_7 = {2{`RANDOM}};
  AluOutReg = _RAND_7[63:0];
  _RAND_8 = {1{`RANDOM}};
  RegWriteOutReg = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  RinCtlOutReg = _RAND_9[3:0];
  _RAND_10 = {1{`RANDOM}};
  EXUFlagReg = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  EbreakInOutReg = _RAND_11[0:0];
  _RAND_12 = {2{`RANDOM}};
  PcValReg = _RAND_12[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MEMU(
  input         clock,
  input         reset,
  input  [63:0] io_Pc,
  input  [7:0]  io_MemMask,
  input  [4:0]  io_Rdest,
  input  [63:0] io_DataR2,
  input         io_MemWrite,
  input         io_Zero,
  input         io_SignU,
  input         io_SignS,
  input  [63:0] io_AluOut,
  input         io_RegWrite,
  input  [3:0]  io_RinCtl,
  input         io_EXUFlag,
  input         io_EbreakIn,
  output        io_MEMUFlag,
  output [63:0] io_MemOut,
  output        io_ZeroOut,
  output        io_SignUOut,
  output        io_SignSOut,
  output [63:0] io_AluOutOut,
  output        io_RegWriteOut,
  output [3:0]  io_RinCtlOut,
  output        io_EbreakInOut,
  output [4:0]  io_RdestOut,
  output [63:0] io_PcVal
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [63:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] mem_Raddr; // @[MEMU.scala 59:19]
  wire [63:0] mem_Rdata; // @[MEMU.scala 59:19]
  wire [63:0] mem_Waddr; // @[MEMU.scala 59:19]
  wire [63:0] mem_Wdata; // @[MEMU.scala 59:19]
  wire [7:0] mem_Wmask; // @[MEMU.scala 59:19]
  wire  mem_MemWrite; // @[MEMU.scala 59:19]
  reg  MEMUFlagReg; // @[MEMU.scala 36:28]
  reg [63:0] MemOutReg; // @[MEMU.scala 37:26]
  reg  ZeroOutReg; // @[MEMU.scala 38:27]
  reg  SignUOutReg; // @[MEMU.scala 39:28]
  reg  SignSOutReg; // @[MEMU.scala 40:28]
  reg [63:0] AluOutOutReg; // @[MEMU.scala 41:29]
  reg  RegWriteOutReg; // @[MEMU.scala 42:31]
  reg [3:0] RinCtlOutReg; // @[MEMU.scala 43:29]
  reg  EbreakInOutReg; // @[MEMU.scala 44:31]
  reg [4:0] RdestOutReg; // @[MEMU.scala 45:28]
  reg [63:0] PcValReg; // @[MEMU.scala 46:25]
  Mem mem ( // @[MEMU.scala 59:19]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  assign io_MEMUFlag = MEMUFlagReg; // @[MEMU.scala 67:15]
  assign io_MemOut = MemOutReg; // @[MEMU.scala 68:13]
  assign io_ZeroOut = ZeroOutReg; // @[MEMU.scala 69:14]
  assign io_SignUOut = SignUOutReg; // @[MEMU.scala 70:15]
  assign io_SignSOut = SignSOutReg; // @[MEMU.scala 71:15]
  assign io_AluOutOut = AluOutOutReg; // @[MEMU.scala 72:16]
  assign io_RegWriteOut = RegWriteOutReg; // @[MEMU.scala 73:18]
  assign io_RinCtlOut = RinCtlOutReg; // @[MEMU.scala 74:16]
  assign io_EbreakInOut = EbreakInOutReg; // @[MEMU.scala 75:18]
  assign io_RdestOut = RdestOutReg; // @[MEMU.scala 76:15]
  assign io_PcVal = PcValReg; // @[MEMU.scala 77:12]
  assign mem_Raddr = io_AluOut; // @[MEMU.scala 61:16]
  assign mem_Waddr = io_AluOut; // @[MEMU.scala 62:16]
  assign mem_Wdata = io_DataR2; // @[MEMU.scala 63:16]
  assign mem_Wmask = io_MemMask; // @[MEMU.scala 64:16]
  assign mem_MemWrite = io_MemWrite & io_EXUFlag; // @[MEMU.scala 65:35]
  always @(posedge clock) begin
    if (reset) begin // @[MEMU.scala 36:28]
      MEMUFlagReg <= 1'h0; // @[MEMU.scala 36:28]
    end else begin
      MEMUFlagReg <= io_EXUFlag; // @[MEMU.scala 48:15]
    end
    if (reset) begin // @[MEMU.scala 37:26]
      MemOutReg <= 64'h0; // @[MEMU.scala 37:26]
    end else begin
      MemOutReg <= mem_Rdata; // @[MEMU.scala 60:13]
    end
    if (reset) begin // @[MEMU.scala 38:27]
      ZeroOutReg <= 1'h0; // @[MEMU.scala 38:27]
    end else begin
      ZeroOutReg <= io_Zero; // @[MEMU.scala 49:14]
    end
    if (reset) begin // @[MEMU.scala 39:28]
      SignUOutReg <= 1'h0; // @[MEMU.scala 39:28]
    end else begin
      SignUOutReg <= io_SignU; // @[MEMU.scala 50:15]
    end
    if (reset) begin // @[MEMU.scala 40:28]
      SignSOutReg <= 1'h0; // @[MEMU.scala 40:28]
    end else begin
      SignSOutReg <= io_SignS; // @[MEMU.scala 51:15]
    end
    if (reset) begin // @[MEMU.scala 41:29]
      AluOutOutReg <= 64'h0; // @[MEMU.scala 41:29]
    end else begin
      AluOutOutReg <= io_AluOut; // @[MEMU.scala 52:16]
    end
    if (reset) begin // @[MEMU.scala 42:31]
      RegWriteOutReg <= 1'h0; // @[MEMU.scala 42:31]
    end else begin
      RegWriteOutReg <= io_RegWrite; // @[MEMU.scala 53:18]
    end
    if (reset) begin // @[MEMU.scala 43:29]
      RinCtlOutReg <= 4'h0; // @[MEMU.scala 43:29]
    end else begin
      RinCtlOutReg <= io_RinCtl; // @[MEMU.scala 54:16]
    end
    if (reset) begin // @[MEMU.scala 44:31]
      EbreakInOutReg <= 1'h0; // @[MEMU.scala 44:31]
    end else begin
      EbreakInOutReg <= io_EbreakIn; // @[MEMU.scala 55:18]
    end
    if (reset) begin // @[MEMU.scala 45:28]
      RdestOutReg <= 5'h0; // @[MEMU.scala 45:28]
    end else begin
      RdestOutReg <= io_Rdest; // @[MEMU.scala 56:15]
    end
    if (reset) begin // @[MEMU.scala 46:25]
      PcValReg <= 64'h0; // @[MEMU.scala 46:25]
    end else begin
      PcValReg <= io_Pc; // @[MEMU.scala 57:12]
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
  MEMUFlagReg = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  MemOutReg = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  ZeroOutReg = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  SignUOutReg = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  SignSOutReg = _RAND_4[0:0];
  _RAND_5 = {2{`RANDOM}};
  AluOutOutReg = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  RegWriteOutReg = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  RinCtlOutReg = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  EbreakInOutReg = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  RdestOutReg = _RAND_9[4:0];
  _RAND_10 = {2{`RANDOM}};
  PcValReg = _RAND_10[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module WBU(
  input         clock,
  input         reset,
  input  [63:0] io_Pc,
  input  [63:0] io_MemOut,
  input         io_Zero,
  input         io_SignU,
  input         io_SignS,
  input  [63:0] io_AluOut,
  input         io_RegWrite,
  input  [3:0]  io_RinCtl,
  input         io_MEMUFlag,
  input         io_EbreakIn,
  input  [4:0]  io_Rdest,
  output        io_RegWriteOut,
  output [63:0] io_DataIn,
  output [4:0]  io_RdestOut,
  output [63:0] io_PcVal
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  ebreak_ebreak_in; // @[WBU.scala 34:20]
  reg [63:0] PcValReg; // @[WBU.scala 28:25]
  wire [7:0] io_DataIn_lo = io_AluOut[7:0]; // @[WBU.scala 40:28]
  wire [55:0] io_DataIn_hi = io_DataIn_lo[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_DataIn_T_3 = {io_DataIn_hi,io_DataIn_lo}; // @[Cat.scala 30:58]
  wire [7:0] io_DataIn_lo_1 = io_MemOut[7:0]; // @[WBU.scala 41:28]
  wire [55:0] io_DataIn_hi_1 = io_DataIn_lo_1[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_DataIn_T_8 = {io_DataIn_hi_1,io_DataIn_lo_1}; // @[Cat.scala 30:58]
  wire [15:0] io_DataIn_lo_2 = io_AluOut[15:0]; // @[WBU.scala 42:28]
  wire [47:0] io_DataIn_hi_2 = io_DataIn_lo_2[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_DataIn_T_13 = {io_DataIn_hi_2,io_DataIn_lo_2}; // @[Cat.scala 30:58]
  wire [15:0] io_DataIn_lo_3 = io_MemOut[15:0]; // @[WBU.scala 43:28]
  wire [47:0] io_DataIn_hi_3 = io_DataIn_lo_3[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_DataIn_T_18 = {io_DataIn_hi_3,io_DataIn_lo_3}; // @[Cat.scala 30:58]
  wire [31:0] io_DataIn_lo_4 = io_AluOut[31:0]; // @[WBU.scala 44:28]
  wire [31:0] io_DataIn_hi_4 = io_DataIn_lo_4[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_DataIn_T_23 = {io_DataIn_hi_4,io_DataIn_lo_4}; // @[Cat.scala 30:58]
  wire [31:0] io_DataIn_lo_5 = io_MemOut[31:0]; // @[WBU.scala 45:28]
  wire [31:0] io_DataIn_hi_5 = io_DataIn_lo_5[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_DataIn_T_28 = {io_DataIn_hi_5,io_DataIn_lo_5}; // @[Cat.scala 30:58]
  wire  _io_DataIn_T_33 = ~io_SignU; // @[WBU.scala 52:15]
  wire  _io_DataIn_T_34 = ~io_SignS; // @[WBU.scala 53:15]
  wire [63:0] _io_DataIn_T_36 = 4'h1 == io_RinCtl ? io_MemOut : io_AluOut; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_38 = 4'h2 == io_RinCtl ? _io_DataIn_T_3 : _io_DataIn_T_36; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_40 = 4'h3 == io_RinCtl ? _io_DataIn_T_8 : _io_DataIn_T_38; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_42 = 4'h4 == io_RinCtl ? _io_DataIn_T_13 : _io_DataIn_T_40; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_44 = 4'h5 == io_RinCtl ? _io_DataIn_T_18 : _io_DataIn_T_42; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_46 = 4'h6 == io_RinCtl ? _io_DataIn_T_23 : _io_DataIn_T_44; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_48 = 4'h7 == io_RinCtl ? _io_DataIn_T_28 : _io_DataIn_T_46; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_50 = 4'h8 == io_RinCtl ? {{56'd0}, io_DataIn_lo_1} : _io_DataIn_T_48; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_52 = 4'h9 == io_RinCtl ? {{48'd0}, io_DataIn_lo_3} : _io_DataIn_T_50; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_54 = 4'ha == io_RinCtl ? {{32'd0}, io_DataIn_lo_5} : _io_DataIn_T_52; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_56 = 4'hb == io_RinCtl ? {{63'd0}, io_Zero} : _io_DataIn_T_54; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_58 = 4'hc == io_RinCtl ? {{63'd0}, io_SignU} : _io_DataIn_T_56; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_60 = 4'hd == io_RinCtl ? {{63'd0}, io_SignS} : _io_DataIn_T_58; // @[Mux.scala 80:57]
  wire [63:0] _io_DataIn_T_62 = 4'he == io_RinCtl ? {{63'd0}, _io_DataIn_T_33} : _io_DataIn_T_60; // @[Mux.scala 80:57]
  Ebreak ebreak ( // @[WBU.scala 34:20]
    .ebreak_in(ebreak_ebreak_in)
  );
  assign io_RegWriteOut = io_RegWrite & io_MEMUFlag; // @[WBU.scala 55:34]
  assign io_DataIn = 4'hf == io_RinCtl ? {{63'd0}, _io_DataIn_T_34} : _io_DataIn_T_62; // @[Mux.scala 80:57]
  assign io_RdestOut = io_Rdest; // @[WBU.scala 56:15]
  assign io_PcVal = PcValReg; // @[WBU.scala 57:12]
  assign ebreak_ebreak_in = io_EbreakIn & io_MEMUFlag; // @[WBU.scala 35:39]
  always @(posedge clock) begin
    if (reset) begin // @[WBU.scala 28:25]
      PcValReg <= 64'h0; // @[WBU.scala 28:25]
    end else if (io_MEMUFlag) begin // @[WBU.scala 30:3]
      PcValReg <= io_Pc; // @[WBU.scala 31:14]
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
  PcValReg = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Regs(
  input         clock,
  input         reset,
  input  [63:0] io_Pc,
  input  [4:0]  io_R1,
  input  [4:0]  io_R2,
  input  [4:0]  io_Rdest,
  input  [63:0] io_DataIn,
  input         io_RegWrite,
  output [63:0] io_DataR1,
  output [63:0] io_DataR2
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] difftest_gpr_0; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_1; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_2; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_3; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_4; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_5; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_6; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_7; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_8; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_9; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_10; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_11; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_12; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_13; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_14; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_15; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_16; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_17; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_18; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_19; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_20; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_21; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_22; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_23; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_24; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_25; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_26; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_27; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_28; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_29; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_30; // @[Regs.scala 21:24]
  wire [63:0] difftest_gpr_31; // @[Regs.scala 21:24]
  wire [63:0] difftest_PcVal; // @[Regs.scala 21:24]
  reg [63:0] Regs_1; // @[Regs.scala 19:21]
  reg [63:0] Regs_2; // @[Regs.scala 19:21]
  reg [63:0] Regs_3; // @[Regs.scala 19:21]
  reg [63:0] Regs_4; // @[Regs.scala 19:21]
  reg [63:0] Regs_5; // @[Regs.scala 19:21]
  reg [63:0] Regs_6; // @[Regs.scala 19:21]
  reg [63:0] Regs_7; // @[Regs.scala 19:21]
  reg [63:0] Regs_8; // @[Regs.scala 19:21]
  reg [63:0] Regs_9; // @[Regs.scala 19:21]
  reg [63:0] Regs_10; // @[Regs.scala 19:21]
  reg [63:0] Regs_11; // @[Regs.scala 19:21]
  reg [63:0] Regs_12; // @[Regs.scala 19:21]
  reg [63:0] Regs_13; // @[Regs.scala 19:21]
  reg [63:0] Regs_14; // @[Regs.scala 19:21]
  reg [63:0] Regs_15; // @[Regs.scala 19:21]
  reg [63:0] Regs_16; // @[Regs.scala 19:21]
  reg [63:0] Regs_17; // @[Regs.scala 19:21]
  reg [63:0] Regs_18; // @[Regs.scala 19:21]
  reg [63:0] Regs_19; // @[Regs.scala 19:21]
  reg [63:0] Regs_20; // @[Regs.scala 19:21]
  reg [63:0] Regs_21; // @[Regs.scala 19:21]
  reg [63:0] Regs_22; // @[Regs.scala 19:21]
  reg [63:0] Regs_23; // @[Regs.scala 19:21]
  reg [63:0] Regs_24; // @[Regs.scala 19:21]
  reg [63:0] Regs_25; // @[Regs.scala 19:21]
  reg [63:0] Regs_26; // @[Regs.scala 19:21]
  reg [63:0] Regs_27; // @[Regs.scala 19:21]
  reg [63:0] Regs_28; // @[Regs.scala 19:21]
  reg [63:0] Regs_29; // @[Regs.scala 19:21]
  reg [63:0] Regs_30; // @[Regs.scala 19:21]
  reg [63:0] Regs_31; // @[Regs.scala 19:21]
  wire [63:0] _GEN_1 = 5'h1 == io_R1 ? Regs_1 : 64'h0; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_2 = 5'h2 == io_R1 ? Regs_2 : _GEN_1; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_3 = 5'h3 == io_R1 ? Regs_3 : _GEN_2; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_4 = 5'h4 == io_R1 ? Regs_4 : _GEN_3; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_5 = 5'h5 == io_R1 ? Regs_5 : _GEN_4; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_6 = 5'h6 == io_R1 ? Regs_6 : _GEN_5; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_7 = 5'h7 == io_R1 ? Regs_7 : _GEN_6; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_8 = 5'h8 == io_R1 ? Regs_8 : _GEN_7; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_9 = 5'h9 == io_R1 ? Regs_9 : _GEN_8; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_10 = 5'ha == io_R1 ? Regs_10 : _GEN_9; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_11 = 5'hb == io_R1 ? Regs_11 : _GEN_10; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_12 = 5'hc == io_R1 ? Regs_12 : _GEN_11; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_13 = 5'hd == io_R1 ? Regs_13 : _GEN_12; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_14 = 5'he == io_R1 ? Regs_14 : _GEN_13; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_15 = 5'hf == io_R1 ? Regs_15 : _GEN_14; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_16 = 5'h10 == io_R1 ? Regs_16 : _GEN_15; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_17 = 5'h11 == io_R1 ? Regs_17 : _GEN_16; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_18 = 5'h12 == io_R1 ? Regs_18 : _GEN_17; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_19 = 5'h13 == io_R1 ? Regs_19 : _GEN_18; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_20 = 5'h14 == io_R1 ? Regs_20 : _GEN_19; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_21 = 5'h15 == io_R1 ? Regs_21 : _GEN_20; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_22 = 5'h16 == io_R1 ? Regs_22 : _GEN_21; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_23 = 5'h17 == io_R1 ? Regs_23 : _GEN_22; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_24 = 5'h18 == io_R1 ? Regs_24 : _GEN_23; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_25 = 5'h19 == io_R1 ? Regs_25 : _GEN_24; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_26 = 5'h1a == io_R1 ? Regs_26 : _GEN_25; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_27 = 5'h1b == io_R1 ? Regs_27 : _GEN_26; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_28 = 5'h1c == io_R1 ? Regs_28 : _GEN_27; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_29 = 5'h1d == io_R1 ? Regs_29 : _GEN_28; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_30 = 5'h1e == io_R1 ? Regs_30 : _GEN_29; // @[Regs.scala 25:13 Regs.scala 25:13]
  wire [63:0] _GEN_33 = 5'h1 == io_R2 ? Regs_1 : 64'h0; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_34 = 5'h2 == io_R2 ? Regs_2 : _GEN_33; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_35 = 5'h3 == io_R2 ? Regs_3 : _GEN_34; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_36 = 5'h4 == io_R2 ? Regs_4 : _GEN_35; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_37 = 5'h5 == io_R2 ? Regs_5 : _GEN_36; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_38 = 5'h6 == io_R2 ? Regs_6 : _GEN_37; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_39 = 5'h7 == io_R2 ? Regs_7 : _GEN_38; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_40 = 5'h8 == io_R2 ? Regs_8 : _GEN_39; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_41 = 5'h9 == io_R2 ? Regs_9 : _GEN_40; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_42 = 5'ha == io_R2 ? Regs_10 : _GEN_41; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_43 = 5'hb == io_R2 ? Regs_11 : _GEN_42; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_44 = 5'hc == io_R2 ? Regs_12 : _GEN_43; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_45 = 5'hd == io_R2 ? Regs_13 : _GEN_44; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_46 = 5'he == io_R2 ? Regs_14 : _GEN_45; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_47 = 5'hf == io_R2 ? Regs_15 : _GEN_46; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_48 = 5'h10 == io_R2 ? Regs_16 : _GEN_47; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_49 = 5'h11 == io_R2 ? Regs_17 : _GEN_48; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_50 = 5'h12 == io_R2 ? Regs_18 : _GEN_49; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_51 = 5'h13 == io_R2 ? Regs_19 : _GEN_50; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_52 = 5'h14 == io_R2 ? Regs_20 : _GEN_51; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_53 = 5'h15 == io_R2 ? Regs_21 : _GEN_52; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_54 = 5'h16 == io_R2 ? Regs_22 : _GEN_53; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_55 = 5'h17 == io_R2 ? Regs_23 : _GEN_54; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_56 = 5'h18 == io_R2 ? Regs_24 : _GEN_55; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_57 = 5'h19 == io_R2 ? Regs_25 : _GEN_56; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_58 = 5'h1a == io_R2 ? Regs_26 : _GEN_57; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_59 = 5'h1b == io_R2 ? Regs_27 : _GEN_58; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_60 = 5'h1c == io_R2 ? Regs_28 : _GEN_59; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_61 = 5'h1d == io_R2 ? Regs_29 : _GEN_60; // @[Regs.scala 26:13 Regs.scala 26:13]
  wire [63:0] _GEN_62 = 5'h1e == io_R2 ? Regs_30 : _GEN_61; // @[Regs.scala 26:13 Regs.scala 26:13]
  Difftest difftest ( // @[Regs.scala 21:24]
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
  assign io_DataR1 = 5'h1f == io_R1 ? Regs_31 : _GEN_30; // @[Regs.scala 25:13 Regs.scala 25:13]
  assign io_DataR2 = 5'h1f == io_R2 ? Regs_31 : _GEN_62; // @[Regs.scala 26:13 Regs.scala 26:13]
  assign difftest_gpr_0 = 64'h0; // @[Regs.scala 22:19]
  assign difftest_gpr_1 = Regs_1; // @[Regs.scala 22:19]
  assign difftest_gpr_2 = Regs_2; // @[Regs.scala 22:19]
  assign difftest_gpr_3 = Regs_3; // @[Regs.scala 22:19]
  assign difftest_gpr_4 = Regs_4; // @[Regs.scala 22:19]
  assign difftest_gpr_5 = Regs_5; // @[Regs.scala 22:19]
  assign difftest_gpr_6 = Regs_6; // @[Regs.scala 22:19]
  assign difftest_gpr_7 = Regs_7; // @[Regs.scala 22:19]
  assign difftest_gpr_8 = Regs_8; // @[Regs.scala 22:19]
  assign difftest_gpr_9 = Regs_9; // @[Regs.scala 22:19]
  assign difftest_gpr_10 = Regs_10; // @[Regs.scala 22:19]
  assign difftest_gpr_11 = Regs_11; // @[Regs.scala 22:19]
  assign difftest_gpr_12 = Regs_12; // @[Regs.scala 22:19]
  assign difftest_gpr_13 = Regs_13; // @[Regs.scala 22:19]
  assign difftest_gpr_14 = Regs_14; // @[Regs.scala 22:19]
  assign difftest_gpr_15 = Regs_15; // @[Regs.scala 22:19]
  assign difftest_gpr_16 = Regs_16; // @[Regs.scala 22:19]
  assign difftest_gpr_17 = Regs_17; // @[Regs.scala 22:19]
  assign difftest_gpr_18 = Regs_18; // @[Regs.scala 22:19]
  assign difftest_gpr_19 = Regs_19; // @[Regs.scala 22:19]
  assign difftest_gpr_20 = Regs_20; // @[Regs.scala 22:19]
  assign difftest_gpr_21 = Regs_21; // @[Regs.scala 22:19]
  assign difftest_gpr_22 = Regs_22; // @[Regs.scala 22:19]
  assign difftest_gpr_23 = Regs_23; // @[Regs.scala 22:19]
  assign difftest_gpr_24 = Regs_24; // @[Regs.scala 22:19]
  assign difftest_gpr_25 = Regs_25; // @[Regs.scala 22:19]
  assign difftest_gpr_26 = Regs_26; // @[Regs.scala 22:19]
  assign difftest_gpr_27 = Regs_27; // @[Regs.scala 22:19]
  assign difftest_gpr_28 = Regs_28; // @[Regs.scala 22:19]
  assign difftest_gpr_29 = Regs_29; // @[Regs.scala 22:19]
  assign difftest_gpr_30 = Regs_30; // @[Regs.scala 22:19]
  assign difftest_gpr_31 = Regs_31; // @[Regs.scala 22:19]
  assign difftest_PcVal = io_Pc; // @[Regs.scala 23:21]
  always @(posedge clock) begin
    if (reset) begin // @[Regs.scala 19:21]
      Regs_1 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h1 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_1 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_2 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h2 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_2 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_3 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h3 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_3 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_4 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h4 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_4 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_5 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h5 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_5 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_6 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h6 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_6 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_7 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h7 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_7 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_8 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h8 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_8 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_9 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h9 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_9 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_10 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'ha == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_10 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_11 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'hb == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_11 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_12 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'hc == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_12 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_13 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'hd == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_13 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_14 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'he == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_14 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_15 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'hf == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_15 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_16 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h10 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_16 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_17 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h11 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_17 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_18 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h12 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_18 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_19 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h13 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_19 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_20 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h14 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_20 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_21 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h15 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_21 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_22 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h16 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_22 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_23 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h17 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_23 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_24 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h18 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_24 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_25 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h19 == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_25 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_26 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h1a == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_26 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_27 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h1b == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_27 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_28 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h1c == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_28 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_29 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h1d == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_29 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_30 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h1e == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_30 <= io_DataIn; // @[Regs.scala 30:20]
      end
    end
    if (reset) begin // @[Regs.scala 19:21]
      Regs_31 <= 64'h0; // @[Regs.scala 19:21]
    end else if (io_RegWrite) begin // @[Regs.scala 29:3]
      if (5'h1f == io_Rdest) begin // @[Regs.scala 30:20]
        Regs_31 <= io_DataIn; // @[Regs.scala 30:20]
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
  _RAND_0 = {2{`RANDOM}};
  Regs_1 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  Regs_2 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  Regs_3 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  Regs_4 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  Regs_5 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  Regs_6 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  Regs_7 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  Regs_8 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  Regs_9 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  Regs_10 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  Regs_11 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  Regs_12 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  Regs_13 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  Regs_14 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  Regs_15 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  Regs_16 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  Regs_17 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  Regs_18 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  Regs_19 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  Regs_20 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  Regs_21 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  Regs_22 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  Regs_23 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  Regs_24 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  Regs_25 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  Regs_26 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  Regs_27 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  Regs_28 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  Regs_29 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  Regs_30 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  Regs_31 = _RAND_30[63:0];
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
  output [31:0] io_Inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  ifu_clock; // @[Main.scala 18:17]
  wire  ifu_reset; // @[Main.scala 18:17]
  wire [63:0] ifu_io_Pc; // @[Main.scala 18:17]
  wire [31:0] ifu_io_EXUClear; // @[Main.scala 18:17]
  wire  ifu_io_IDUWait; // @[Main.scala 18:17]
  wire [31:0] ifu_io_Inst; // @[Main.scala 18:17]
  wire [31:0] ifu_io_IFUFlag; // @[Main.scala 18:17]
  wire [63:0] ifu_io_PcVal; // @[Main.scala 18:17]
  wire  idu_clock; // @[Main.scala 19:17]
  wire  idu_reset; // @[Main.scala 19:17]
  wire [63:0] idu_io_Pc; // @[Main.scala 19:17]
  wire [31:0] idu_io_Inst; // @[Main.scala 19:17]
  wire  idu_io_IFUFlag; // @[Main.scala 19:17]
  wire  idu_io_EXUClear; // @[Main.scala 19:17]
  wire  idu_io_IDUWait; // @[Main.scala 19:17]
  wire  idu_io_RegWrite; // @[Main.scala 19:17]
  wire  idu_io_MemWrite; // @[Main.scala 19:17]
  wire [4:0] idu_io_AluOp; // @[Main.scala 19:17]
  wire [4:0] idu_io_AluSrc1Op; // @[Main.scala 19:17]
  wire [4:0] idu_io_AluSrc2Op; // @[Main.scala 19:17]
  wire [4:0] idu_io_PcSrc; // @[Main.scala 19:17]
  wire [3:0] idu_io_RinCtl; // @[Main.scala 19:17]
  wire [7:0] idu_io_MemMask; // @[Main.scala 19:17]
  wire [4:0] idu_io_Rdest; // @[Main.scala 19:17]
  wire [4:0] idu_io_R1; // @[Main.scala 19:17]
  wire [4:0] idu_io_R2; // @[Main.scala 19:17]
  wire [63:0] idu_io_Imm; // @[Main.scala 19:17]
  wire  idu_io_EbreakIn; // @[Main.scala 19:17]
  wire [63:0] idu_io_PcVal; // @[Main.scala 19:17]
  wire  idu_io_IDUFlag; // @[Main.scala 19:17]
  wire  exu_clock; // @[Main.scala 20:17]
  wire  exu_reset; // @[Main.scala 20:17]
  wire [63:0] exu_io_Pc; // @[Main.scala 20:17]
  wire  exu_io_RegWrite; // @[Main.scala 20:17]
  wire  exu_io_MemWrite; // @[Main.scala 20:17]
  wire [4:0] exu_io_AluOp; // @[Main.scala 20:17]
  wire [4:0] exu_io_AluSrc1Op; // @[Main.scala 20:17]
  wire [4:0] exu_io_AluSrc2Op; // @[Main.scala 20:17]
  wire [4:0] exu_io_PcSrc; // @[Main.scala 20:17]
  wire [3:0] exu_io_RinCtl; // @[Main.scala 20:17]
  wire [63:0] exu_io_DataR1; // @[Main.scala 20:17]
  wire [63:0] exu_io_DataR2; // @[Main.scala 20:17]
  wire [63:0] exu_io_Imm; // @[Main.scala 20:17]
  wire  exu_io_EbreakIn; // @[Main.scala 20:17]
  wire [4:0] exu_io_Rdest; // @[Main.scala 20:17]
  wire [7:0] exu_io_MemMask; // @[Main.scala 20:17]
  wire  exu_io_IDUFlag; // @[Main.scala 20:17]
  wire [7:0] exu_io_MemMaskOut; // @[Main.scala 20:17]
  wire [4:0] exu_io_RdestOut; // @[Main.scala 20:17]
  wire [63:0] exu_io_DataR2Out; // @[Main.scala 20:17]
  wire  exu_io_MemWriteOut; // @[Main.scala 20:17]
  wire  exu_io_Zero; // @[Main.scala 20:17]
  wire  exu_io_SignU; // @[Main.scala 20:17]
  wire  exu_io_SignS; // @[Main.scala 20:17]
  wire [63:0] exu_io_AluOut; // @[Main.scala 20:17]
  wire  exu_io_RegWriteOut; // @[Main.scala 20:17]
  wire [3:0] exu_io_RinCtlOut; // @[Main.scala 20:17]
  wire  exu_io_EXUFlag; // @[Main.scala 20:17]
  wire  exu_io_EbreakInOut; // @[Main.scala 20:17]
  wire [63:0] exu_io_PcVal; // @[Main.scala 20:17]
  wire  exu_io_EXUClear; // @[Main.scala 20:17]
  wire [63:0] exu_io_EXUPc; // @[Main.scala 20:17]
  wire  memu_clock; // @[Main.scala 21:18]
  wire  memu_reset; // @[Main.scala 21:18]
  wire [63:0] memu_io_Pc; // @[Main.scala 21:18]
  wire [7:0] memu_io_MemMask; // @[Main.scala 21:18]
  wire [4:0] memu_io_Rdest; // @[Main.scala 21:18]
  wire [63:0] memu_io_DataR2; // @[Main.scala 21:18]
  wire  memu_io_MemWrite; // @[Main.scala 21:18]
  wire  memu_io_Zero; // @[Main.scala 21:18]
  wire  memu_io_SignU; // @[Main.scala 21:18]
  wire  memu_io_SignS; // @[Main.scala 21:18]
  wire [63:0] memu_io_AluOut; // @[Main.scala 21:18]
  wire  memu_io_RegWrite; // @[Main.scala 21:18]
  wire [3:0] memu_io_RinCtl; // @[Main.scala 21:18]
  wire  memu_io_EXUFlag; // @[Main.scala 21:18]
  wire  memu_io_EbreakIn; // @[Main.scala 21:18]
  wire  memu_io_MEMUFlag; // @[Main.scala 21:18]
  wire [63:0] memu_io_MemOut; // @[Main.scala 21:18]
  wire  memu_io_ZeroOut; // @[Main.scala 21:18]
  wire  memu_io_SignUOut; // @[Main.scala 21:18]
  wire  memu_io_SignSOut; // @[Main.scala 21:18]
  wire [63:0] memu_io_AluOutOut; // @[Main.scala 21:18]
  wire  memu_io_RegWriteOut; // @[Main.scala 21:18]
  wire [3:0] memu_io_RinCtlOut; // @[Main.scala 21:18]
  wire  memu_io_EbreakInOut; // @[Main.scala 21:18]
  wire [4:0] memu_io_RdestOut; // @[Main.scala 21:18]
  wire [63:0] memu_io_PcVal; // @[Main.scala 21:18]
  wire  wbu_clock; // @[Main.scala 22:17]
  wire  wbu_reset; // @[Main.scala 22:17]
  wire [63:0] wbu_io_Pc; // @[Main.scala 22:17]
  wire [63:0] wbu_io_MemOut; // @[Main.scala 22:17]
  wire  wbu_io_Zero; // @[Main.scala 22:17]
  wire  wbu_io_SignU; // @[Main.scala 22:17]
  wire  wbu_io_SignS; // @[Main.scala 22:17]
  wire [63:0] wbu_io_AluOut; // @[Main.scala 22:17]
  wire  wbu_io_RegWrite; // @[Main.scala 22:17]
  wire [3:0] wbu_io_RinCtl; // @[Main.scala 22:17]
  wire  wbu_io_MEMUFlag; // @[Main.scala 22:17]
  wire  wbu_io_EbreakIn; // @[Main.scala 22:17]
  wire [4:0] wbu_io_Rdest; // @[Main.scala 22:17]
  wire  wbu_io_RegWriteOut; // @[Main.scala 22:17]
  wire [63:0] wbu_io_DataIn; // @[Main.scala 22:17]
  wire [4:0] wbu_io_RdestOut; // @[Main.scala 22:17]
  wire [63:0] wbu_io_PcVal; // @[Main.scala 22:17]
  wire  regs_clock; // @[Main.scala 23:18]
  wire  regs_reset; // @[Main.scala 23:18]
  wire [63:0] regs_io_Pc; // @[Main.scala 23:18]
  wire [4:0] regs_io_R1; // @[Main.scala 23:18]
  wire [4:0] regs_io_R2; // @[Main.scala 23:18]
  wire [4:0] regs_io_Rdest; // @[Main.scala 23:18]
  wire [63:0] regs_io_DataIn; // @[Main.scala 23:18]
  wire  regs_io_RegWrite; // @[Main.scala 23:18]
  wire [63:0] regs_io_DataR1; // @[Main.scala 23:18]
  wire [63:0] regs_io_DataR2; // @[Main.scala 23:18]
  reg [63:0] pc; // @[Main.scala 17:19]
  wire  IDUWait = (idu_io_R1 == exu_io_RdestOut & exu_io_EXUFlag | idu_io_R2 == exu_io_RdestOut & exu_io_EXUFlag |
    idu_io_R1 == memu_io_RdestOut & memu_io_MEMUFlag | idu_io_R2 == memu_io_RdestOut & memu_io_MEMUFlag) &
    idu_io_IDUFlag; // @[Main.scala 86:266]
  wire [1:0] _pc_T = {IDUWait,exu_io_EXUClear}; // @[Cat.scala 30:58]
  wire [63:0] _pc_T_2 = pc + 64'h4; // @[Main.scala 88:52]
  IFU ifu ( // @[Main.scala 18:17]
    .clock(ifu_clock),
    .reset(ifu_reset),
    .io_Pc(ifu_io_Pc),
    .io_EXUClear(ifu_io_EXUClear),
    .io_IDUWait(ifu_io_IDUWait),
    .io_Inst(ifu_io_Inst),
    .io_IFUFlag(ifu_io_IFUFlag),
    .io_PcVal(ifu_io_PcVal)
  );
  IDU idu ( // @[Main.scala 19:17]
    .clock(idu_clock),
    .reset(idu_reset),
    .io_Pc(idu_io_Pc),
    .io_Inst(idu_io_Inst),
    .io_IFUFlag(idu_io_IFUFlag),
    .io_EXUClear(idu_io_EXUClear),
    .io_IDUWait(idu_io_IDUWait),
    .io_RegWrite(idu_io_RegWrite),
    .io_MemWrite(idu_io_MemWrite),
    .io_AluOp(idu_io_AluOp),
    .io_AluSrc1Op(idu_io_AluSrc1Op),
    .io_AluSrc2Op(idu_io_AluSrc2Op),
    .io_PcSrc(idu_io_PcSrc),
    .io_RinCtl(idu_io_RinCtl),
    .io_MemMask(idu_io_MemMask),
    .io_Rdest(idu_io_Rdest),
    .io_R1(idu_io_R1),
    .io_R2(idu_io_R2),
    .io_Imm(idu_io_Imm),
    .io_EbreakIn(idu_io_EbreakIn),
    .io_PcVal(idu_io_PcVal),
    .io_IDUFlag(idu_io_IDUFlag)
  );
  EXU exu ( // @[Main.scala 20:17]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_Pc(exu_io_Pc),
    .io_RegWrite(exu_io_RegWrite),
    .io_MemWrite(exu_io_MemWrite),
    .io_AluOp(exu_io_AluOp),
    .io_AluSrc1Op(exu_io_AluSrc1Op),
    .io_AluSrc2Op(exu_io_AluSrc2Op),
    .io_PcSrc(exu_io_PcSrc),
    .io_RinCtl(exu_io_RinCtl),
    .io_DataR1(exu_io_DataR1),
    .io_DataR2(exu_io_DataR2),
    .io_Imm(exu_io_Imm),
    .io_EbreakIn(exu_io_EbreakIn),
    .io_Rdest(exu_io_Rdest),
    .io_MemMask(exu_io_MemMask),
    .io_IDUFlag(exu_io_IDUFlag),
    .io_MemMaskOut(exu_io_MemMaskOut),
    .io_RdestOut(exu_io_RdestOut),
    .io_DataR2Out(exu_io_DataR2Out),
    .io_MemWriteOut(exu_io_MemWriteOut),
    .io_Zero(exu_io_Zero),
    .io_SignU(exu_io_SignU),
    .io_SignS(exu_io_SignS),
    .io_AluOut(exu_io_AluOut),
    .io_RegWriteOut(exu_io_RegWriteOut),
    .io_RinCtlOut(exu_io_RinCtlOut),
    .io_EXUFlag(exu_io_EXUFlag),
    .io_EbreakInOut(exu_io_EbreakInOut),
    .io_PcVal(exu_io_PcVal),
    .io_EXUClear(exu_io_EXUClear),
    .io_EXUPc(exu_io_EXUPc)
  );
  MEMU memu ( // @[Main.scala 21:18]
    .clock(memu_clock),
    .reset(memu_reset),
    .io_Pc(memu_io_Pc),
    .io_MemMask(memu_io_MemMask),
    .io_Rdest(memu_io_Rdest),
    .io_DataR2(memu_io_DataR2),
    .io_MemWrite(memu_io_MemWrite),
    .io_Zero(memu_io_Zero),
    .io_SignU(memu_io_SignU),
    .io_SignS(memu_io_SignS),
    .io_AluOut(memu_io_AluOut),
    .io_RegWrite(memu_io_RegWrite),
    .io_RinCtl(memu_io_RinCtl),
    .io_EXUFlag(memu_io_EXUFlag),
    .io_EbreakIn(memu_io_EbreakIn),
    .io_MEMUFlag(memu_io_MEMUFlag),
    .io_MemOut(memu_io_MemOut),
    .io_ZeroOut(memu_io_ZeroOut),
    .io_SignUOut(memu_io_SignUOut),
    .io_SignSOut(memu_io_SignSOut),
    .io_AluOutOut(memu_io_AluOutOut),
    .io_RegWriteOut(memu_io_RegWriteOut),
    .io_RinCtlOut(memu_io_RinCtlOut),
    .io_EbreakInOut(memu_io_EbreakInOut),
    .io_RdestOut(memu_io_RdestOut),
    .io_PcVal(memu_io_PcVal)
  );
  WBU wbu ( // @[Main.scala 22:17]
    .clock(wbu_clock),
    .reset(wbu_reset),
    .io_Pc(wbu_io_Pc),
    .io_MemOut(wbu_io_MemOut),
    .io_Zero(wbu_io_Zero),
    .io_SignU(wbu_io_SignU),
    .io_SignS(wbu_io_SignS),
    .io_AluOut(wbu_io_AluOut),
    .io_RegWrite(wbu_io_RegWrite),
    .io_RinCtl(wbu_io_RinCtl),
    .io_MEMUFlag(wbu_io_MEMUFlag),
    .io_EbreakIn(wbu_io_EbreakIn),
    .io_Rdest(wbu_io_Rdest),
    .io_RegWriteOut(wbu_io_RegWriteOut),
    .io_DataIn(wbu_io_DataIn),
    .io_RdestOut(wbu_io_RdestOut),
    .io_PcVal(wbu_io_PcVal)
  );
  Regs regs ( // @[Main.scala 23:18]
    .clock(regs_clock),
    .reset(regs_reset),
    .io_Pc(regs_io_Pc),
    .io_R1(regs_io_R1),
    .io_R2(regs_io_R2),
    .io_Rdest(regs_io_Rdest),
    .io_DataIn(regs_io_DataIn),
    .io_RegWrite(regs_io_RegWrite),
    .io_DataR1(regs_io_DataR1),
    .io_DataR2(regs_io_DataR2)
  );
  assign io_Inst = ifu_io_Inst; // @[Main.scala 26:11]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_Pc = pc; // @[Main.scala 27:13]
  assign ifu_io_EXUClear = {{31'd0}, exu_io_EXUClear}; // @[Main.scala 28:19]
  assign ifu_io_IDUWait = (idu_io_R1 == exu_io_RdestOut & exu_io_EXUFlag | idu_io_R2 == exu_io_RdestOut & exu_io_EXUFlag
     | idu_io_R1 == memu_io_RdestOut & memu_io_MEMUFlag | idu_io_R2 == memu_io_RdestOut & memu_io_MEMUFlag) &
    idu_io_IDUFlag; // @[Main.scala 86:266]
  assign idu_clock = clock;
  assign idu_reset = reset;
  assign idu_io_Pc = ifu_io_PcVal; // @[Main.scala 31:13]
  assign idu_io_Inst = ifu_io_Inst; // @[Main.scala 32:15]
  assign idu_io_IFUFlag = ifu_io_IFUFlag[0]; // @[Main.scala 33:18]
  assign idu_io_EXUClear = exu_io_EXUClear; // @[Main.scala 34:19]
  assign idu_io_IDUWait = (idu_io_R1 == exu_io_RdestOut & exu_io_EXUFlag | idu_io_R2 == exu_io_RdestOut & exu_io_EXUFlag
     | idu_io_R1 == memu_io_RdestOut & memu_io_MEMUFlag | idu_io_R2 == memu_io_RdestOut & memu_io_MEMUFlag) &
    idu_io_IDUFlag; // @[Main.scala 86:266]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_Pc = idu_io_PcVal; // @[Main.scala 37:13]
  assign exu_io_RegWrite = idu_io_RegWrite; // @[Main.scala 38:19]
  assign exu_io_MemWrite = idu_io_MemWrite; // @[Main.scala 39:19]
  assign exu_io_AluOp = idu_io_AluOp; // @[Main.scala 40:16]
  assign exu_io_AluSrc1Op = idu_io_AluSrc1Op; // @[Main.scala 41:20]
  assign exu_io_AluSrc2Op = idu_io_AluSrc2Op; // @[Main.scala 42:20]
  assign exu_io_PcSrc = idu_io_PcSrc; // @[Main.scala 43:16]
  assign exu_io_RinCtl = idu_io_RinCtl; // @[Main.scala 44:17]
  assign exu_io_DataR1 = regs_io_DataR1; // @[Main.scala 47:17]
  assign exu_io_DataR2 = regs_io_DataR2; // @[Main.scala 48:17]
  assign exu_io_Imm = idu_io_Imm; // @[Main.scala 49:14]
  assign exu_io_EbreakIn = idu_io_EbreakIn; // @[Main.scala 50:19]
  assign exu_io_Rdest = idu_io_Rdest; // @[Main.scala 51:16]
  assign exu_io_MemMask = idu_io_MemMask; // @[Main.scala 52:18]
  assign exu_io_IDUFlag = idu_io_IDUFlag & ~IDUWait; // @[Main.scala 53:37]
  assign memu_clock = clock;
  assign memu_reset = reset;
  assign memu_io_Pc = exu_io_PcVal; // @[Main.scala 55:14]
  assign memu_io_MemMask = exu_io_MemMaskOut; // @[Main.scala 56:19]
  assign memu_io_Rdest = exu_io_RdestOut; // @[Main.scala 57:17]
  assign memu_io_DataR2 = exu_io_DataR2Out; // @[Main.scala 58:18]
  assign memu_io_MemWrite = exu_io_MemWriteOut; // @[Main.scala 59:20]
  assign memu_io_Zero = exu_io_Zero; // @[Main.scala 60:16]
  assign memu_io_SignU = exu_io_SignU; // @[Main.scala 61:17]
  assign memu_io_SignS = exu_io_SignS; // @[Main.scala 62:17]
  assign memu_io_AluOut = exu_io_AluOut; // @[Main.scala 63:18]
  assign memu_io_RegWrite = exu_io_RegWriteOut; // @[Main.scala 64:20]
  assign memu_io_RinCtl = exu_io_RinCtlOut; // @[Main.scala 65:18]
  assign memu_io_EXUFlag = exu_io_EXUFlag; // @[Main.scala 66:19]
  assign memu_io_EbreakIn = exu_io_EbreakInOut; // @[Main.scala 67:20]
  assign wbu_clock = clock;
  assign wbu_reset = reset;
  assign wbu_io_Pc = memu_io_PcVal; // @[Main.scala 69:13]
  assign wbu_io_MemOut = memu_io_MemOut; // @[Main.scala 70:17]
  assign wbu_io_Zero = memu_io_ZeroOut; // @[Main.scala 71:15]
  assign wbu_io_SignU = memu_io_SignUOut; // @[Main.scala 72:16]
  assign wbu_io_SignS = memu_io_SignSOut; // @[Main.scala 73:16]
  assign wbu_io_AluOut = memu_io_AluOutOut; // @[Main.scala 74:17]
  assign wbu_io_RegWrite = memu_io_RegWriteOut; // @[Main.scala 75:19]
  assign wbu_io_RinCtl = memu_io_RinCtlOut; // @[Main.scala 76:17]
  assign wbu_io_MEMUFlag = memu_io_MEMUFlag; // @[Main.scala 77:19]
  assign wbu_io_EbreakIn = memu_io_EbreakInOut; // @[Main.scala 78:19]
  assign wbu_io_Rdest = memu_io_RdestOut; // @[Main.scala 79:16]
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_Pc = wbu_io_PcVal; // @[Main.scala 84:14]
  assign regs_io_R1 = idu_io_R1; // @[Main.scala 45:14]
  assign regs_io_R2 = idu_io_R2; // @[Main.scala 46:14]
  assign regs_io_Rdest = wbu_io_RdestOut; // @[Main.scala 82:17]
  assign regs_io_DataIn = wbu_io_DataIn; // @[Main.scala 81:18]
  assign regs_io_RegWrite = wbu_io_RegWriteOut; // @[Main.scala 83:20]
  always @(posedge clock) begin
    if (reset) begin // @[Main.scala 17:19]
      pc <= 64'h80000000; // @[Main.scala 17:19]
    end else if (2'h3 == _pc_T) begin // @[Mux.scala 80:57]
      pc <= exu_io_EXUPc;
    end else if (!(2'h2 == _pc_T)) begin // @[Mux.scala 80:57]
      if (2'h1 == _pc_T) begin // @[Mux.scala 80:57]
        pc <= exu_io_EXUPc;
      end else begin
        pc <= _pc_T_2;
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
