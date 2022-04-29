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
  input  [31:0] io_Inst,
  output        io_RegWrite,
  output        io_MemWrite,
  output [4:0]  io_AluOp,
  output [4:0]  io_AluSrc1Op,
  output [4:0]  io_AluSrc2Op,
  output [4:0]  io_PcSrc,
  output [2:0]  io_RinCtl,
  output [7:0]  io_MemMask,
  output [4:0]  io_Rdest,
  output [4:0]  io_R1,
  output [4:0]  io_R2,
  output [63:0] io_Imm
);
  wire  ebreak_ebreak_in; // @[IDU.scala 41:20]
  wire [6:0] opcode = io_Inst[6:0]; // @[IDU.scala 45:23]
  wire [31:0] io_Imm_lo = {io_Inst[31:12], 12'h0}; // @[IDU.scala 37:39]
  wire [63:0] io_Imm_hi = io_Imm_lo[31] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 72:12]
  wire [95:0] _io_Imm_T_3 = {io_Imm_hi,io_Imm_lo}; // @[Cat.scala 30:58]
  wire [11:0] io_Imm_lo_1 = io_Inst[31:20]; // @[IDU.scala 34:31]
  wire [63:0] io_Imm_hi_1 = io_Imm_lo_1[11] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 72:12]
  wire [75:0] _io_Imm_T_7 = {io_Imm_hi_1,io_Imm_lo_1}; // @[Cat.scala 30:58]
  wire [11:0] _io_Imm_T_10 = {io_Inst[31:25], 5'h0}; // @[IDU.scala 35:40]
  wire [11:0] _GEN_0 = {{7'd0}, io_Inst[11:7]}; // @[IDU.scala 35:45]
  wire [11:0] io_Imm_lo_2 = _io_Imm_T_10 | _GEN_0; // @[IDU.scala 35:45]
  wire [63:0] io_Imm_hi_2 = io_Imm_lo_2[11] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 72:12]
  wire [75:0] _io_Imm_T_14 = {io_Imm_hi_2,io_Imm_lo_2}; // @[Cat.scala 30:58]
  wire [20:0] _io_Imm_T_30 = {io_Inst[31], 20'h0}; // @[IDU.scala 38:40]
  wire [10:0] _io_Imm_T_32 = {io_Inst[30:21], 1'h0}; // @[IDU.scala 38:63]
  wire [20:0] _GEN_1 = {{10'd0}, _io_Imm_T_32}; // @[IDU.scala 38:46]
  wire [20:0] _io_Imm_T_33 = _io_Imm_T_30 | _GEN_1; // @[IDU.scala 38:46]
  wire [11:0] _io_Imm_T_35 = {io_Inst[20], 11'h0}; // @[IDU.scala 38:85]
  wire [20:0] _GEN_2 = {{9'd0}, _io_Imm_T_35}; // @[IDU.scala 38:68]
  wire [20:0] _io_Imm_T_36 = _io_Imm_T_33 | _GEN_2; // @[IDU.scala 38:68]
  wire [19:0] _io_Imm_T_38 = {io_Inst[19:12], 12'h0}; // @[IDU.scala 38:108]
  wire [20:0] _GEN_3 = {{1'd0}, _io_Imm_T_38}; // @[IDU.scala 38:91]
  wire [20:0] io_Imm_lo_6 = _io_Imm_T_36 | _GEN_3; // @[IDU.scala 38:91]
  wire [63:0] io_Imm_hi_6 = io_Imm_lo_6[20] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 72:12]
  wire [84:0] _io_Imm_T_41 = {io_Imm_hi_6,io_Imm_lo_6}; // @[Cat.scala 30:58]
  wire [12:0] _io_Imm_T_48 = {io_Inst[31], 12'h0}; // @[IDU.scala 36:40]
  wire [10:0] _io_Imm_T_50 = {io_Inst[30:25], 5'h0}; // @[IDU.scala 36:63]
  wire [12:0] _GEN_4 = {{2'd0}, _io_Imm_T_50}; // @[IDU.scala 36:46]
  wire [12:0] _io_Imm_T_51 = _io_Imm_T_48 | _GEN_4; // @[IDU.scala 36:46]
  wire [4:0] _io_Imm_T_53 = {io_Inst[11:8], 1'h0}; // @[IDU.scala 36:84]
  wire [12:0] _GEN_5 = {{8'd0}, _io_Imm_T_53}; // @[IDU.scala 36:68]
  wire [12:0] _io_Imm_T_54 = _io_Imm_T_51 | _GEN_5; // @[IDU.scala 36:68]
  wire [11:0] _io_Imm_T_56 = {io_Inst[7], 11'h0}; // @[IDU.scala 36:104]
  wire [12:0] _GEN_6 = {{1'd0}, _io_Imm_T_56}; // @[IDU.scala 36:89]
  wire [12:0] io_Imm_lo_8 = _io_Imm_T_54 | _GEN_6; // @[IDU.scala 36:89]
  wire [63:0] io_Imm_hi_8 = io_Imm_lo_8[12] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 72:12]
  wire [76:0] _io_Imm_T_59 = {io_Imm_hi_8,io_Imm_lo_8}; // @[Cat.scala 30:58]
  wire [63:0] _io_Imm_T_84 = 7'h17 == opcode ? _io_Imm_T_3[63:0] : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_86 = 7'h3 == opcode ? _io_Imm_T_7[63:0] : _io_Imm_T_84; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_88 = 7'h23 == opcode ? _io_Imm_T_14[63:0] : _io_Imm_T_86; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_90 = 7'h13 == opcode ? _io_Imm_T_7[63:0] : _io_Imm_T_88; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_92 = 7'h33 == opcode ? 64'h0 : _io_Imm_T_90; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_94 = 7'h1b == opcode ? _io_Imm_T_7[63:0] : _io_Imm_T_92; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_96 = 7'h3b == opcode ? 64'h0 : _io_Imm_T_94; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_98 = 7'h37 == opcode ? _io_Imm_T_3[63:0] : _io_Imm_T_96; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_100 = 7'h6f == opcode ? _io_Imm_T_41[63:0] : _io_Imm_T_98; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_102 = 7'h67 == opcode ? _io_Imm_T_7[63:0] : _io_Imm_T_100; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_104 = 7'h63 == opcode ? _io_Imm_T_59[63:0] : _io_Imm_T_102; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_106 = 7'h3 == opcode ? _io_Imm_T_7[63:0] : _io_Imm_T_104; // @[Mux.scala 80:57]
  wire [63:0] _io_Imm_T_108 = 7'h13 == opcode ? _io_Imm_T_7[63:0] : _io_Imm_T_106; // @[Mux.scala 80:57]
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
  wire  _contr_code_T_49 = 32'h6f == _contr_code_T; // @[Lookup.scala 31:38]
  wire  _contr_code_T_51 = 32'h67 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_53 = 32'h63 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_55 = 32'h2003 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_57 = 32'h3013 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_59 = 32'h1063 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_63 = _contr_code_T_53 ? 1'h0 : _contr_code_T_55 | _contr_code_T_57; // @[Lookup.scala 33:37]
  wire  _contr_code_T_87 = _contr_code_T_5 ? 1'h0 : _contr_code_T_7 | (_contr_code_T_9 | (_contr_code_T_11 | (
    _contr_code_T_13 | (_contr_code_T_15 | (_contr_code_T_17 | (_contr_code_T_19 | (_contr_code_T_21 | (_contr_code_T_23
     | (_contr_code_T_25 | (_contr_code_T_27 | (_contr_code_T_29 | (_contr_code_T_31 | (_contr_code_T_33 | (
    _contr_code_T_35 | (_contr_code_T_37 | (_contr_code_T_39 | (_contr_code_T_41 | (_contr_code_T_43 | (_contr_code_T_45
     | (_contr_code_T_47 | (_contr_code_T_49 | (_contr_code_T_51 | _contr_code_T_63)))))))))))))))))))))); // @[Lookup.scala 33:37]
  wire  contr_code_0 = _contr_code_T_1 | (_contr_code_T_3 | _contr_code_T_87); // @[Lookup.scala 33:37]
  wire  _contr_code_T_117 = _contr_code_T_3 ? 1'h0 : _contr_code_T_5; // @[Lookup.scala 33:37]
  wire  contr_code_1 = _contr_code_T_1 ? 1'h0 : _contr_code_T_117; // @[Lookup.scala 33:37]
  wire  _contr_code_T_124 = _contr_code_T_47 ? 1'h0 : _contr_code_T_49 | _contr_code_T_51; // @[Lookup.scala 33:37]
  wire  _contr_code_T_125 = _contr_code_T_45 ? 1'h0 : _contr_code_T_124; // @[Lookup.scala 33:37]
  wire  _contr_code_T_126 = _contr_code_T_43 ? 1'h0 : _contr_code_T_125; // @[Lookup.scala 33:37]
  wire  _contr_code_T_127 = _contr_code_T_41 ? 1'h0 : _contr_code_T_126; // @[Lookup.scala 33:37]
  wire  _contr_code_T_128 = _contr_code_T_39 ? 1'h0 : _contr_code_T_127; // @[Lookup.scala 33:37]
  wire  _contr_code_T_129 = _contr_code_T_37 ? 1'h0 : _contr_code_T_128; // @[Lookup.scala 33:37]
  wire  _contr_code_T_130 = _contr_code_T_35 ? 1'h0 : _contr_code_T_129; // @[Lookup.scala 33:37]
  wire  _contr_code_T_131 = _contr_code_T_33 ? 1'h0 : _contr_code_T_130; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_132 = _contr_code_T_31 ? 2'h2 : {{1'd0}, _contr_code_T_131}; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_133 = _contr_code_T_29 ? 2'h0 : _contr_code_T_132; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_134 = _contr_code_T_27 ? 2'h0 : _contr_code_T_133; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_135 = _contr_code_T_25 ? 2'h0 : _contr_code_T_134; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_136 = _contr_code_T_23 ? 2'h0 : _contr_code_T_135; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_137 = _contr_code_T_21 ? 2'h0 : _contr_code_T_136; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_138 = _contr_code_T_19 ? 2'h0 : _contr_code_T_137; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_139 = _contr_code_T_17 ? 2'h0 : _contr_code_T_138; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_140 = _contr_code_T_15 ? 2'h0 : _contr_code_T_139; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_141 = _contr_code_T_13 ? 2'h0 : _contr_code_T_140; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_142 = _contr_code_T_11 ? 2'h0 : _contr_code_T_141; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_143 = _contr_code_T_9 ? 2'h0 : _contr_code_T_142; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_144 = _contr_code_T_7 ? 2'h0 : _contr_code_T_143; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_145 = _contr_code_T_5 ? 2'h0 : _contr_code_T_144; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_146 = _contr_code_T_3 ? 2'h0 : _contr_code_T_145; // @[Lookup.scala 33:37]
  wire [1:0] contr_code_2 = _contr_code_T_1 ? 2'h0 : _contr_code_T_146; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_148 = _contr_code_T_57 ? 3'h4 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_149 = _contr_code_T_55 ? 3'h4 : _contr_code_T_148; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_150 = _contr_code_T_53 ? 3'h0 : _contr_code_T_149; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_151 = _contr_code_T_51 ? 3'h6 : _contr_code_T_150; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_152 = _contr_code_T_49 ? 3'h6 : _contr_code_T_151; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_153 = _contr_code_T_47 ? 3'h4 : _contr_code_T_152; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_154 = _contr_code_T_45 ? 3'h0 : _contr_code_T_153; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_155 = _contr_code_T_43 ? 3'h4 : _contr_code_T_154; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_156 = _contr_code_T_41 ? 3'h0 : _contr_code_T_155; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_157 = _contr_code_T_39 ? 3'h4 : _contr_code_T_156; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_158 = _contr_code_T_37 ? 3'h0 : _contr_code_T_157; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_159 = _contr_code_T_35 ? 3'h4 : _contr_code_T_158; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_160 = _contr_code_T_33 ? 3'h0 : _contr_code_T_159; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_161 = _contr_code_T_31 ? 3'h3 : _contr_code_T_160; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_162 = _contr_code_T_29 ? 3'h0 : _contr_code_T_161; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_163 = _contr_code_T_27 ? 3'h0 : _contr_code_T_162; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_164 = _contr_code_T_25 ? 3'h2 : _contr_code_T_163; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_165 = _contr_code_T_23 ? 3'h1 : _contr_code_T_164; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_166 = _contr_code_T_21 ? 3'h2 : _contr_code_T_165; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_167 = _contr_code_T_19 ? 3'h1 : _contr_code_T_166; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_168 = _contr_code_T_17 ? 3'h2 : _contr_code_T_167; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_169 = _contr_code_T_15 ? 3'h1 : _contr_code_T_168; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_170 = _contr_code_T_13 ? 3'h0 : _contr_code_T_169; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_171 = _contr_code_T_11 ? 3'h4 : _contr_code_T_170; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_172 = _contr_code_T_9 ? 3'h0 : _contr_code_T_171; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_173 = _contr_code_T_7 ? 3'h4 : _contr_code_T_172; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_174 = _contr_code_T_5 ? 3'h4 : _contr_code_T_173; // @[Lookup.scala 33:37]
  wire [2:0] _contr_code_T_175 = _contr_code_T_3 ? 3'h4 : _contr_code_T_174; // @[Lookup.scala 33:37]
  wire [2:0] contr_code_3 = _contr_code_T_1 ? 3'h7 : _contr_code_T_175; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_176 = _contr_code_T_59 ? 4'h9 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_177 = _contr_code_T_57 ? 4'ha : _contr_code_T_176; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_178 = _contr_code_T_55 ? 4'h8 : _contr_code_T_177; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_179 = _contr_code_T_53 ? 4'h8 : _contr_code_T_178; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_180 = _contr_code_T_51 ? 4'h1 : _contr_code_T_179; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_181 = _contr_code_T_49 ? 4'h1 : _contr_code_T_180; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_182 = _contr_code_T_47 ? 4'hc : _contr_code_T_181; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_183 = _contr_code_T_45 ? 4'hc : _contr_code_T_182; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_184 = _contr_code_T_43 ? 4'h1 : _contr_code_T_183; // @[Lookup.scala 33:37]
  wire [3:0] _contr_code_T_185 = _contr_code_T_41 ? 4'h1 : _contr_code_T_184; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_186 = _contr_code_T_39 ? 5'h12 : {{1'd0}, _contr_code_T_185}; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_187 = _contr_code_T_37 ? 5'h12 : _contr_code_T_186; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_188 = _contr_code_T_35 ? 5'h11 : _contr_code_T_187; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_189 = _contr_code_T_33 ? 5'h11 : _contr_code_T_188; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_190 = _contr_code_T_31 ? 5'he : _contr_code_T_189; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_191 = _contr_code_T_29 ? 5'h2 : _contr_code_T_190; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_192 = _contr_code_T_27 ? 5'h2 : _contr_code_T_191; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_193 = _contr_code_T_25 ? 5'h10 : _contr_code_T_192; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_194 = _contr_code_T_23 ? 5'h10 : _contr_code_T_193; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_195 = _contr_code_T_21 ? 5'hf : _contr_code_T_194; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_196 = _contr_code_T_19 ? 5'hf : _contr_code_T_195; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_197 = _contr_code_T_17 ? 5'he : _contr_code_T_196; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_198 = _contr_code_T_15 ? 5'he : _contr_code_T_197; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_199 = _contr_code_T_13 ? 5'h1 : _contr_code_T_198; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_200 = _contr_code_T_11 ? 5'h1 : _contr_code_T_199; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_201 = _contr_code_T_9 ? 5'h1 : _contr_code_T_200; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_202 = _contr_code_T_7 ? 5'h1 : _contr_code_T_201; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_203 = _contr_code_T_5 ? 5'h1 : _contr_code_T_202; // @[Lookup.scala 33:37]
  wire [4:0] _contr_code_T_204 = _contr_code_T_3 ? 5'h1 : _contr_code_T_203; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_205 = _contr_code_T_59 ? 2'h3 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_206 = _contr_code_T_57 ? 2'h3 : _contr_code_T_205; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_207 = _contr_code_T_55 ? 2'h3 : _contr_code_T_206; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_208 = _contr_code_T_53 ? 2'h3 : _contr_code_T_207; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_209 = _contr_code_T_51 ? 2'h2 : _contr_code_T_208; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_210 = _contr_code_T_49 ? 2'h1 : _contr_code_T_209; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_211 = _contr_code_T_47 ? 2'h0 : _contr_code_T_210; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_212 = _contr_code_T_45 ? 2'h0 : _contr_code_T_211; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_213 = _contr_code_T_43 ? 2'h0 : _contr_code_T_212; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_214 = _contr_code_T_41 ? 2'h0 : _contr_code_T_213; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_215 = _contr_code_T_39 ? 2'h0 : _contr_code_T_214; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_216 = _contr_code_T_37 ? 2'h0 : _contr_code_T_215; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_217 = _contr_code_T_35 ? 2'h0 : _contr_code_T_216; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_218 = _contr_code_T_33 ? 2'h0 : _contr_code_T_217; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_219 = _contr_code_T_31 ? 2'h0 : _contr_code_T_218; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_220 = _contr_code_T_29 ? 2'h0 : _contr_code_T_219; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_221 = _contr_code_T_27 ? 2'h0 : _contr_code_T_220; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_222 = _contr_code_T_25 ? 2'h0 : _contr_code_T_221; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_223 = _contr_code_T_23 ? 2'h0 : _contr_code_T_222; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_224 = _contr_code_T_21 ? 2'h0 : _contr_code_T_223; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_225 = _contr_code_T_19 ? 2'h0 : _contr_code_T_224; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_226 = _contr_code_T_17 ? 2'h0 : _contr_code_T_225; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_227 = _contr_code_T_15 ? 2'h0 : _contr_code_T_226; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_228 = _contr_code_T_13 ? 2'h0 : _contr_code_T_227; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_229 = _contr_code_T_11 ? 2'h0 : _contr_code_T_228; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_230 = _contr_code_T_9 ? 2'h0 : _contr_code_T_229; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_231 = _contr_code_T_7 ? 2'h0 : _contr_code_T_230; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_232 = _contr_code_T_5 ? 2'h0 : _contr_code_T_231; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_233 = _contr_code_T_3 ? 2'h0 : _contr_code_T_232; // @[Lookup.scala 33:37]
  wire [1:0] contr_code_5 = _contr_code_T_1 ? 2'h0 : _contr_code_T_233; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_237 = _contr_code_T_53 ? 2'h0 : _contr_code_T_207; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_238 = _contr_code_T_51 ? 2'h0 : _contr_code_T_237; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_239 = _contr_code_T_49 ? 2'h0 : _contr_code_T_238; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_240 = _contr_code_T_47 ? 2'h0 : _contr_code_T_239; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_241 = _contr_code_T_45 ? 2'h0 : _contr_code_T_240; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_242 = _contr_code_T_43 ? 2'h0 : _contr_code_T_241; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_243 = _contr_code_T_41 ? 2'h0 : _contr_code_T_242; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_244 = _contr_code_T_39 ? 2'h0 : _contr_code_T_243; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_245 = _contr_code_T_37 ? 2'h0 : _contr_code_T_244; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_246 = _contr_code_T_35 ? 2'h0 : _contr_code_T_245; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_247 = _contr_code_T_33 ? 2'h0 : _contr_code_T_246; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_248 = _contr_code_T_31 ? 2'h2 : _contr_code_T_247; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_249 = _contr_code_T_29 ? 2'h2 : _contr_code_T_248; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_250 = _contr_code_T_27 ? 2'h0 : _contr_code_T_249; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_251 = _contr_code_T_25 ? 2'h0 : _contr_code_T_250; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_252 = _contr_code_T_23 ? 2'h0 : _contr_code_T_251; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_253 = _contr_code_T_21 ? 2'h0 : _contr_code_T_252; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_254 = _contr_code_T_19 ? 2'h0 : _contr_code_T_253; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_255 = _contr_code_T_17 ? 2'h0 : _contr_code_T_254; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_256 = _contr_code_T_15 ? 2'h0 : _contr_code_T_255; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_257 = _contr_code_T_13 ? 2'h0 : _contr_code_T_256; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_258 = _contr_code_T_11 ? 2'h2 : _contr_code_T_257; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_259 = _contr_code_T_9 ? 2'h0 : _contr_code_T_258; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_260 = _contr_code_T_7 ? 2'h0 : _contr_code_T_259; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_261 = _contr_code_T_5 ? 2'h0 : _contr_code_T_260; // @[Lookup.scala 33:37]
  wire [1:0] _contr_code_T_262 = _contr_code_T_3 ? 2'h1 : _contr_code_T_261; // @[Lookup.scala 33:37]
  wire [1:0] contr_code_6 = _contr_code_T_1 ? 2'h0 : _contr_code_T_262; // @[Lookup.scala 33:37]
  wire [7:0] _contr_code_T_290 = _contr_code_T_5 ? 8'hff : 8'h0; // @[Lookup.scala 33:37]
  wire [7:0] _contr_code_T_291 = _contr_code_T_3 ? 8'h0 : _contr_code_T_290; // @[Lookup.scala 33:37]
  wire [7:0] contr_code_7 = _contr_code_T_1 ? 8'h0 : _contr_code_T_291; // @[Lookup.scala 33:37]
  Ebreak ebreak ( // @[IDU.scala 41:20]
    .ebreak_in(ebreak_ebreak_in)
  );
  assign io_RegWrite = contr_code_7[0]; // @[IDU.scala 155:15]
  assign io_MemWrite = contr_code_6[0]; // @[IDU.scala 156:15]
  assign io_AluOp = {{2'd0}, contr_code_3}; // @[Lookup.scala 33:37]
  assign io_AluSrc1Op = {{3'd0}, contr_code_5}; // @[Lookup.scala 33:37]
  assign io_AluSrc2Op = _contr_code_T_1 ? 5'h1 : _contr_code_T_204; // @[Lookup.scala 33:37]
  assign io_PcSrc = {{3'd0}, contr_code_2}; // @[Lookup.scala 33:37]
  assign io_RinCtl = {{2'd0}, contr_code_1}; // @[Lookup.scala 33:37]
  assign io_MemMask = {{7'd0}, contr_code_0}; // @[Lookup.scala 33:37]
  assign io_Rdest = io_Inst[11:7]; // @[IDU.scala 27:22]
  assign io_R1 = io_Inst[19:15]; // @[IDU.scala 28:19]
  assign io_R2 = io_Inst[24:20]; // @[IDU.scala 29:19]
  assign io_Imm = 7'h63 == opcode ? _io_Imm_T_59[63:0] : _io_Imm_T_108; // @[Mux.scala 80:57]
  assign ebreak_ebreak_in = 32'h100073 == io_Inst; // @[Mux.scala 80:60]
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [4:0]  io_Rdest,
  input  [4:0]  io_R1,
  input  [4:0]  io_R2,
  input  [63:0] io_Imm,
  input         io_RegWrite,
  input         io_MemWrite,
  input  [4:0]  io_AluOp,
  input  [4:0]  io_AluSrc1Op,
  input  [4:0]  io_AluSrc2Op,
  input  [4:0]  io_PcSrc,
  input  [2:0]  io_RinCtl,
  input  [7:0]  io_MemMask,
  output [63:0] io_PcVal
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
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] mem_Raddr; // @[EXU.scala 30:19]
  wire [63:0] mem_Rdata; // @[EXU.scala 30:19]
  wire [63:0] mem_Waddr; // @[EXU.scala 30:19]
  wire [63:0] mem_Wdata; // @[EXU.scala 30:19]
  wire [7:0] mem_Wmask; // @[EXU.scala 30:19]
  wire  mem_MemWrite; // @[EXU.scala 30:19]
  wire [63:0] difftest_gpr_0; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_1; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_2; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_3; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_4; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_5; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_6; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_7; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_8; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_9; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_10; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_11; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_12; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_13; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_14; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_15; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_16; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_17; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_18; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_19; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_20; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_21; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_22; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_23; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_24; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_25; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_26; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_27; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_28; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_29; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_30; // @[EXU.scala 31:24]
  wire [63:0] difftest_gpr_31; // @[EXU.scala 31:24]
  wire [63:0] difftest_PcVal; // @[EXU.scala 31:24]
  reg [63:0] Regs_1; // @[EXU.scala 29:21]
  reg [63:0] Regs_2; // @[EXU.scala 29:21]
  reg [63:0] Regs_3; // @[EXU.scala 29:21]
  reg [63:0] Regs_4; // @[EXU.scala 29:21]
  reg [63:0] Regs_5; // @[EXU.scala 29:21]
  reg [63:0] Regs_6; // @[EXU.scala 29:21]
  reg [63:0] Regs_7; // @[EXU.scala 29:21]
  reg [63:0] Regs_8; // @[EXU.scala 29:21]
  reg [63:0] Regs_9; // @[EXU.scala 29:21]
  reg [63:0] Regs_10; // @[EXU.scala 29:21]
  reg [63:0] Regs_11; // @[EXU.scala 29:21]
  reg [63:0] Regs_12; // @[EXU.scala 29:21]
  reg [63:0] Regs_13; // @[EXU.scala 29:21]
  reg [63:0] Regs_14; // @[EXU.scala 29:21]
  reg [63:0] Regs_15; // @[EXU.scala 29:21]
  reg [63:0] Regs_16; // @[EXU.scala 29:21]
  reg [63:0] Regs_17; // @[EXU.scala 29:21]
  reg [63:0] Regs_18; // @[EXU.scala 29:21]
  reg [63:0] Regs_19; // @[EXU.scala 29:21]
  reg [63:0] Regs_20; // @[EXU.scala 29:21]
  reg [63:0] Regs_21; // @[EXU.scala 29:21]
  reg [63:0] Regs_22; // @[EXU.scala 29:21]
  reg [63:0] Regs_23; // @[EXU.scala 29:21]
  reg [63:0] Regs_24; // @[EXU.scala 29:21]
  reg [63:0] Regs_25; // @[EXU.scala 29:21]
  reg [63:0] Regs_26; // @[EXU.scala 29:21]
  reg [63:0] Regs_27; // @[EXU.scala 29:21]
  reg [63:0] Regs_28; // @[EXU.scala 29:21]
  reg [63:0] Regs_29; // @[EXU.scala 29:21]
  reg [63:0] Regs_30; // @[EXU.scala 29:21]
  reg [63:0] Regs_31; // @[EXU.scala 29:21]
  reg [63:0] pc; // @[EXU.scala 32:19]
  wire [63:0] _GEN_1 = 5'h1 == io_R1 ? Regs_1 : 64'h0; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_2 = 5'h2 == io_R1 ? Regs_2 : _GEN_1; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_3 = 5'h3 == io_R1 ? Regs_3 : _GEN_2; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_4 = 5'h4 == io_R1 ? Regs_4 : _GEN_3; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_5 = 5'h5 == io_R1 ? Regs_5 : _GEN_4; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_6 = 5'h6 == io_R1 ? Regs_6 : _GEN_5; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_7 = 5'h7 == io_R1 ? Regs_7 : _GEN_6; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_8 = 5'h8 == io_R1 ? Regs_8 : _GEN_7; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_9 = 5'h9 == io_R1 ? Regs_9 : _GEN_8; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_10 = 5'ha == io_R1 ? Regs_10 : _GEN_9; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_11 = 5'hb == io_R1 ? Regs_11 : _GEN_10; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_12 = 5'hc == io_R1 ? Regs_12 : _GEN_11; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_13 = 5'hd == io_R1 ? Regs_13 : _GEN_12; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_14 = 5'he == io_R1 ? Regs_14 : _GEN_13; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_15 = 5'hf == io_R1 ? Regs_15 : _GEN_14; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_16 = 5'h10 == io_R1 ? Regs_16 : _GEN_15; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_17 = 5'h11 == io_R1 ? Regs_17 : _GEN_16; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_18 = 5'h12 == io_R1 ? Regs_18 : _GEN_17; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_19 = 5'h13 == io_R1 ? Regs_19 : _GEN_18; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_20 = 5'h14 == io_R1 ? Regs_20 : _GEN_19; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_21 = 5'h15 == io_R1 ? Regs_21 : _GEN_20; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_22 = 5'h16 == io_R1 ? Regs_22 : _GEN_21; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_23 = 5'h17 == io_R1 ? Regs_23 : _GEN_22; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_24 = 5'h18 == io_R1 ? Regs_24 : _GEN_23; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_25 = 5'h19 == io_R1 ? Regs_25 : _GEN_24; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_26 = 5'h1a == io_R1 ? Regs_26 : _GEN_25; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_27 = 5'h1b == io_R1 ? Regs_27 : _GEN_26; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_28 = 5'h1c == io_R1 ? Regs_28 : _GEN_27; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_29 = 5'h1d == io_R1 ? Regs_29 : _GEN_28; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_30 = 5'h1e == io_R1 ? Regs_30 : _GEN_29; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] DataR1 = 5'h1f == io_R1 ? Regs_31 : _GEN_30; // @[EXU.scala 41:10 EXU.scala 41:10]
  wire [63:0] _GEN_33 = 5'h1 == io_R2 ? Regs_1 : 64'h0; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_34 = 5'h2 == io_R2 ? Regs_2 : _GEN_33; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_35 = 5'h3 == io_R2 ? Regs_3 : _GEN_34; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_36 = 5'h4 == io_R2 ? Regs_4 : _GEN_35; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_37 = 5'h5 == io_R2 ? Regs_5 : _GEN_36; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_38 = 5'h6 == io_R2 ? Regs_6 : _GEN_37; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_39 = 5'h7 == io_R2 ? Regs_7 : _GEN_38; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_40 = 5'h8 == io_R2 ? Regs_8 : _GEN_39; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_41 = 5'h9 == io_R2 ? Regs_9 : _GEN_40; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_42 = 5'ha == io_R2 ? Regs_10 : _GEN_41; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_43 = 5'hb == io_R2 ? Regs_11 : _GEN_42; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_44 = 5'hc == io_R2 ? Regs_12 : _GEN_43; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_45 = 5'hd == io_R2 ? Regs_13 : _GEN_44; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_46 = 5'he == io_R2 ? Regs_14 : _GEN_45; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_47 = 5'hf == io_R2 ? Regs_15 : _GEN_46; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_48 = 5'h10 == io_R2 ? Regs_16 : _GEN_47; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_49 = 5'h11 == io_R2 ? Regs_17 : _GEN_48; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_50 = 5'h12 == io_R2 ? Regs_18 : _GEN_49; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_51 = 5'h13 == io_R2 ? Regs_19 : _GEN_50; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_52 = 5'h14 == io_R2 ? Regs_20 : _GEN_51; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_53 = 5'h15 == io_R2 ? Regs_21 : _GEN_52; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_54 = 5'h16 == io_R2 ? Regs_22 : _GEN_53; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_55 = 5'h17 == io_R2 ? Regs_23 : _GEN_54; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_56 = 5'h18 == io_R2 ? Regs_24 : _GEN_55; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_57 = 5'h19 == io_R2 ? Regs_25 : _GEN_56; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_58 = 5'h1a == io_R2 ? Regs_26 : _GEN_57; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_59 = 5'h1b == io_R2 ? Regs_27 : _GEN_58; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_60 = 5'h1c == io_R2 ? Regs_28 : _GEN_59; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_61 = 5'h1d == io_R2 ? Regs_29 : _GEN_60; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _GEN_62 = 5'h1e == io_R2 ? Regs_30 : _GEN_61; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] DataR2 = 5'h1f == io_R2 ? Regs_31 : _GEN_62; // @[EXU.scala 42:10 EXU.scala 42:10]
  wire [63:0] _AluSrc1_T_4 = 5'h1 == io_AluSrc1Op ? pc : DataR1; // @[Mux.scala 80:57]
  wire [63:0] AluSrc1 = 5'h2 == io_AluSrc1Op ? {{44'd0}, io_Imm[31:12]} : _AluSrc1_T_4; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_5 = 5'h1 == io_AluSrc2Op ? {{58'd0}, DataR2[5:0]} : DataR2; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_7 = 5'h2 == io_AluSrc2Op ? {{58'd0}, io_Imm[5:0]} : _AluSrc2_T_5; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_9 = 5'h3 == io_AluSrc2Op ? 64'hc : _AluSrc2_T_7; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_11 = 5'h4 == io_AluSrc2Op ? io_Imm : _AluSrc2_T_9; // @[Mux.scala 80:57]
  wire [63:0] _AluSrc2_T_13 = 5'h6 == io_AluSrc2Op ? 64'h4 : _AluSrc2_T_11; // @[Mux.scala 80:57]
  wire [63:0] AluSrc2 = 5'h7 == io_AluSrc2Op ? pc : _AluSrc2_T_13; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_35 = AluSrc1 & AluSrc2; // @[EXU.scala 105:28]
  wire [63:0] _AluOut_T_34 = AluSrc1 | AluSrc2; // @[EXU.scala 104:28]
  wire [63:0] _AluOut_T_33 = AluSrc1 ^ AluSrc2; // @[EXU.scala 103:28]
  wire [63:0] _AluOut_T_29 = 5'h2 == io_AluSrc1Op ? {{44'd0}, io_Imm[31:12]} : _AluSrc1_T_4; // @[EXU.scala 102:34]
  wire [63:0] _AluOut_T_32 = $signed(_AluOut_T_29) >>> AluSrc2[5:0]; // @[EXU.scala 102:60]
  wire [63:0] _AluOut_T_28 = AluSrc1 >> AluSrc2[5:0]; // @[EXU.scala 101:28]
  wire [126:0] _GEN_128 = {{63'd0}, AluSrc1}; // @[EXU.scala 100:28]
  wire [126:0] _AluOut_T_26 = _GEN_128 << AluSrc2[5:0]; // @[EXU.scala 100:28]
  wire [63:0] _AluOut_T_23 = 5'h7 == io_AluSrc2Op ? pc : _AluSrc2_T_13; // @[EXU.scala 99:54]
  wire  _AluOut_T_24 = $signed(_AluOut_T_29) >= $signed(_AluOut_T_23); // @[EXU.scala 99:37]
  wire  _AluOut_T_21 = $signed(_AluOut_T_29) < $signed(_AluOut_T_23); // @[EXU.scala 98:37]
  wire  _AluOut_T_18 = AluSrc1 >= AluSrc2; // @[EXU.scala 97:28]
  wire  _AluOut_T_17 = AluSrc1 < AluSrc2; // @[EXU.scala 96:28]
  wire  _AluOut_T_16 = AluSrc1 != AluSrc2; // @[EXU.scala 95:28]
  wire  _AluOut_T_15 = AluSrc1 == AluSrc2; // @[EXU.scala 94:28]
  wire [63:0] _GEN_0 = AluSrc1 % AluSrc2; // @[EXU.scala 93:28]
  wire [63:0] _AluOut_T_14 = _GEN_0[63:0]; // @[EXU.scala 93:28]
  wire [63:0] _AluOut_T_13 = $signed(_AluOut_T_29) % $signed(_AluOut_T_23); // @[EXU.scala 92:63]
  wire [63:0] _AluOut_T_9 = AluSrc1 / AluSrc2; // @[EXU.scala 91:28]
  wire [64:0] _AluOut_T_8 = $signed(_AluOut_T_29) / $signed(_AluOut_T_23); // @[EXU.scala 90:63]
  wire [127:0] _AluOut_T_4 = AluSrc1 * AluSrc2; // @[EXU.scala 89:28]
  wire [63:0] _AluOut_T_3 = AluSrc1 - AluSrc2; // @[EXU.scala 88:28]
  wire [63:0] _AluOut_T_1 = AluSrc1 + AluSrc2; // @[EXU.scala 87:28]
  wire [63:0] _AluOut_T_37 = 5'h1 == io_AluOp ? _AluOut_T_1 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_39 = 5'h2 == io_AluOp ? _AluOut_T_3 : _AluOut_T_37; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_41 = 5'h3 == io_AluOp ? _AluOut_T_4 : {{64'd0}, _AluOut_T_39}; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_43 = 5'h4 == io_AluOp ? {{63'd0}, _AluOut_T_8} : _AluOut_T_41; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_45 = 5'h5 == io_AluOp ? {{64'd0}, _AluOut_T_9} : _AluOut_T_43; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_47 = 5'h6 == io_AluOp ? {{64'd0}, _AluOut_T_13} : _AluOut_T_45; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_49 = 5'h7 == io_AluOp ? {{64'd0}, _AluOut_T_14} : _AluOut_T_47; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_51 = 5'h8 == io_AluOp ? {{127'd0}, _AluOut_T_15} : _AluOut_T_49; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_53 = 5'h9 == io_AluOp ? {{127'd0}, _AluOut_T_16} : _AluOut_T_51; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_55 = 5'ha == io_AluOp ? {{127'd0}, _AluOut_T_17} : _AluOut_T_53; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_57 = 5'hb == io_AluOp ? {{127'd0}, _AluOut_T_18} : _AluOut_T_55; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_59 = 5'hc == io_AluOp ? {{127'd0}, _AluOut_T_21} : _AluOut_T_57; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_61 = 5'hd == io_AluOp ? {{127'd0}, _AluOut_T_24} : _AluOut_T_59; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_63 = 5'he == io_AluOp ? {{1'd0}, _AluOut_T_26} : _AluOut_T_61; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_65 = 5'hf == io_AluOp ? {{64'd0}, _AluOut_T_28} : _AluOut_T_63; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_67 = 5'h10 == io_AluOp ? {{64'd0}, _AluOut_T_32} : _AluOut_T_65; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_69 = 5'h11 == io_AluOp ? {{64'd0}, _AluOut_T_33} : _AluOut_T_67; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_71 = 5'h12 == io_AluOp ? {{64'd0}, _AluOut_T_34} : _AluOut_T_69; // @[Mux.scala 80:57]
  wire [127:0] _AluOut_T_73 = 5'h13 == io_AluOp ? {{64'd0}, _AluOut_T_35} : _AluOut_T_71; // @[Mux.scala 80:57]
  wire [63:0] AluOut = _AluOut_T_73[63:0]; // @[EXU.scala 24:20 EXU.scala 86:10]
  wire [31:0] DataIn_lo = AluOut[31:0]; // @[EXU.scala 46:25]
  wire [63:0] DataIn_hi = DataIn_lo[31] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 72:12]
  wire [95:0] _DataIn_T_2 = {DataIn_hi,DataIn_lo}; // @[Cat.scala 30:58]
  wire [63:0] MemOut = mem_Rdata; // @[EXU.scala 25:20 EXU.scala 54:10]
  wire [31:0] DataIn_lo_1 = MemOut[31:0]; // @[EXU.scala 47:25]
  wire [63:0] DataIn_hi_1 = DataIn_lo_1[31] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 72:12]
  wire [95:0] _DataIn_T_6 = {DataIn_hi_1,DataIn_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _DataIn_T_9 = 3'h0 == io_RinCtl ? AluOut : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _DataIn_T_11 = 3'h1 == io_RinCtl ? MemOut : _DataIn_T_9; // @[Mux.scala 80:57]
  wire [63:0] _DataIn_T_13 = 3'h2 == io_RinCtl ? _DataIn_T_2[63:0] : _DataIn_T_11; // @[Mux.scala 80:57]
  wire [63:0] _pc_T_1 = pc + 64'h4; // @[EXU.scala 61:32]
  wire [42:0] pc_hi = io_Imm[20] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [20:0] pc_lo = io_Imm[20:0]; // @[EXU.scala 63:52]
  wire [63:0] _pc_T_6 = {pc_hi,pc_lo}; // @[Cat.scala 30:58]
  wire [63:0] _pc_T_8 = pc + _pc_T_6; // @[EXU.scala 63:18]
  wire [63:0] _pc_T_10 = DataR1 + io_Imm; // @[EXU.scala 64:23]
  wire [63:0] _pc_T_12 = _pc_T_10 & 64'hfffffffffffffffe; // @[EXU.scala 64:33]
  wire [50:0] pc_hi_1 = io_Imm[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [12:0] pc_lo_1 = io_Imm[12:0]; // @[EXU.scala 66:53]
  wire [63:0] _pc_T_17 = {pc_hi_1,pc_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _pc_T_19 = pc + _pc_T_17; // @[EXU.scala 66:18]
  wire [63:0] _pc_T_23 = 5'h0 == io_PcSrc ? _pc_T_1 : _pc_T_1; // @[Mux.scala 80:57]
  Mem mem ( // @[EXU.scala 30:19]
    .Raddr(mem_Raddr),
    .Rdata(mem_Rdata),
    .Waddr(mem_Waddr),
    .Wdata(mem_Wdata),
    .Wmask(mem_Wmask),
    .MemWrite(mem_MemWrite)
  );
  Difftest difftest ( // @[EXU.scala 31:24]
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
  assign io_PcVal = pc; // @[EXU.scala 108:12]
  assign mem_Raddr = _AluOut_T_73[63:0]; // @[EXU.scala 24:20 EXU.scala 86:10]
  assign mem_Waddr = _AluOut_T_73[63:0]; // @[EXU.scala 24:20 EXU.scala 86:10]
  assign mem_Wdata = 5'h1f == io_R2 ? Regs_31 : _GEN_62; // @[EXU.scala 42:10 EXU.scala 42:10]
  assign mem_Wmask = io_MemMask; // @[EXU.scala 58:16]
  assign mem_MemWrite = io_MemWrite; // @[EXU.scala 59:19]
  assign difftest_gpr_0 = 64'h0; // @[EXU.scala 36:19]
  assign difftest_gpr_1 = Regs_1; // @[EXU.scala 36:19]
  assign difftest_gpr_2 = Regs_2; // @[EXU.scala 36:19]
  assign difftest_gpr_3 = Regs_3; // @[EXU.scala 36:19]
  assign difftest_gpr_4 = Regs_4; // @[EXU.scala 36:19]
  assign difftest_gpr_5 = Regs_5; // @[EXU.scala 36:19]
  assign difftest_gpr_6 = Regs_6; // @[EXU.scala 36:19]
  assign difftest_gpr_7 = Regs_7; // @[EXU.scala 36:19]
  assign difftest_gpr_8 = Regs_8; // @[EXU.scala 36:19]
  assign difftest_gpr_9 = Regs_9; // @[EXU.scala 36:19]
  assign difftest_gpr_10 = Regs_10; // @[EXU.scala 36:19]
  assign difftest_gpr_11 = Regs_11; // @[EXU.scala 36:19]
  assign difftest_gpr_12 = Regs_12; // @[EXU.scala 36:19]
  assign difftest_gpr_13 = Regs_13; // @[EXU.scala 36:19]
  assign difftest_gpr_14 = Regs_14; // @[EXU.scala 36:19]
  assign difftest_gpr_15 = Regs_15; // @[EXU.scala 36:19]
  assign difftest_gpr_16 = Regs_16; // @[EXU.scala 36:19]
  assign difftest_gpr_17 = Regs_17; // @[EXU.scala 36:19]
  assign difftest_gpr_18 = Regs_18; // @[EXU.scala 36:19]
  assign difftest_gpr_19 = Regs_19; // @[EXU.scala 36:19]
  assign difftest_gpr_20 = Regs_20; // @[EXU.scala 36:19]
  assign difftest_gpr_21 = Regs_21; // @[EXU.scala 36:19]
  assign difftest_gpr_22 = Regs_22; // @[EXU.scala 36:19]
  assign difftest_gpr_23 = Regs_23; // @[EXU.scala 36:19]
  assign difftest_gpr_24 = Regs_24; // @[EXU.scala 36:19]
  assign difftest_gpr_25 = Regs_25; // @[EXU.scala 36:19]
  assign difftest_gpr_26 = Regs_26; // @[EXU.scala 36:19]
  assign difftest_gpr_27 = Regs_27; // @[EXU.scala 36:19]
  assign difftest_gpr_28 = Regs_28; // @[EXU.scala 36:19]
  assign difftest_gpr_29 = Regs_29; // @[EXU.scala 36:19]
  assign difftest_gpr_30 = Regs_30; // @[EXU.scala 36:19]
  assign difftest_gpr_31 = Regs_31; // @[EXU.scala 36:19]
  assign difftest_PcVal = pc; // @[EXU.scala 37:21]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 29:21]
      Regs_1 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h1 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_1 <= _DataIn_T_6[63:0];
        end else begin
          Regs_1 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_2 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h2 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_2 <= _DataIn_T_6[63:0];
        end else begin
          Regs_2 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_3 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h3 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_3 <= _DataIn_T_6[63:0];
        end else begin
          Regs_3 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_4 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h4 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_4 <= _DataIn_T_6[63:0];
        end else begin
          Regs_4 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_5 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h5 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_5 <= _DataIn_T_6[63:0];
        end else begin
          Regs_5 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_6 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h6 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_6 <= _DataIn_T_6[63:0];
        end else begin
          Regs_6 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_7 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h7 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_7 <= _DataIn_T_6[63:0];
        end else begin
          Regs_7 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_8 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h8 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_8 <= _DataIn_T_6[63:0];
        end else begin
          Regs_8 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_9 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h9 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_9 <= _DataIn_T_6[63:0];
        end else begin
          Regs_9 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_10 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'ha == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_10 <= _DataIn_T_6[63:0];
        end else begin
          Regs_10 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_11 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'hb == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_11 <= _DataIn_T_6[63:0];
        end else begin
          Regs_11 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_12 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'hc == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_12 <= _DataIn_T_6[63:0];
        end else begin
          Regs_12 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_13 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'hd == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_13 <= _DataIn_T_6[63:0];
        end else begin
          Regs_13 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_14 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'he == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_14 <= _DataIn_T_6[63:0];
        end else begin
          Regs_14 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_15 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'hf == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_15 <= _DataIn_T_6[63:0];
        end else begin
          Regs_15 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_16 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h10 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_16 <= _DataIn_T_6[63:0];
        end else begin
          Regs_16 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_17 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h11 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_17 <= _DataIn_T_6[63:0];
        end else begin
          Regs_17 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_18 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h12 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_18 <= _DataIn_T_6[63:0];
        end else begin
          Regs_18 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_19 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h13 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_19 <= _DataIn_T_6[63:0];
        end else begin
          Regs_19 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_20 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h14 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_20 <= _DataIn_T_6[63:0];
        end else begin
          Regs_20 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_21 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h15 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_21 <= _DataIn_T_6[63:0];
        end else begin
          Regs_21 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_22 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h16 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_22 <= _DataIn_T_6[63:0];
        end else begin
          Regs_22 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_23 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h17 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_23 <= _DataIn_T_6[63:0];
        end else begin
          Regs_23 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_24 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h18 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_24 <= _DataIn_T_6[63:0];
        end else begin
          Regs_24 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_25 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h19 == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_25 <= _DataIn_T_6[63:0];
        end else begin
          Regs_25 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_26 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h1a == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_26 <= _DataIn_T_6[63:0];
        end else begin
          Regs_26 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_27 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h1b == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_27 <= _DataIn_T_6[63:0];
        end else begin
          Regs_27 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_28 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h1c == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_28 <= _DataIn_T_6[63:0];
        end else begin
          Regs_28 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_29 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h1d == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_29 <= _DataIn_T_6[63:0];
        end else begin
          Regs_29 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_30 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h1e == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_30 <= _DataIn_T_6[63:0];
        end else begin
          Regs_30 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 29:21]
      Regs_31 <= 64'h0; // @[EXU.scala 29:21]
    end else if (io_RegWrite) begin // @[EXU.scala 50:3]
      if (5'h1f == io_Rdest) begin // @[EXU.scala 51:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_31 <= _DataIn_T_6[63:0];
        end else begin
          Regs_31 <= _DataIn_T_13;
        end
      end
    end
    if (reset) begin // @[EXU.scala 32:19]
      pc <= 64'h80000000; // @[EXU.scala 32:19]
    end else if (5'h3 == io_PcSrc) begin // @[Mux.scala 80:57]
      if (64'h1 == AluOut) begin // @[Mux.scala 80:57]
        pc <= _pc_T_19;
      end else begin
        pc <= _pc_T_1;
      end
    end else if (5'h2 == io_PcSrc) begin // @[Mux.scala 80:57]
      pc <= _pc_T_12;
    end else if (5'h1 == io_PcSrc) begin // @[Mux.scala 80:57]
      pc <= _pc_T_8;
    end else begin
      pc <= _pc_T_23;
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
  _RAND_31 = {2{`RANDOM}};
  pc = _RAND_31[63:0];
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
  wire [63:0] ifu_io_Pc; // @[Main.scala 27:17]
  wire [31:0] ifu_io_Inst; // @[Main.scala 27:17]
  wire [31:0] idu_io_Inst; // @[Main.scala 31:17]
  wire  idu_io_RegWrite; // @[Main.scala 31:17]
  wire  idu_io_MemWrite; // @[Main.scala 31:17]
  wire [4:0] idu_io_AluOp; // @[Main.scala 31:17]
  wire [4:0] idu_io_AluSrc1Op; // @[Main.scala 31:17]
  wire [4:0] idu_io_AluSrc2Op; // @[Main.scala 31:17]
  wire [4:0] idu_io_PcSrc; // @[Main.scala 31:17]
  wire [2:0] idu_io_RinCtl; // @[Main.scala 31:17]
  wire [7:0] idu_io_MemMask; // @[Main.scala 31:17]
  wire [4:0] idu_io_Rdest; // @[Main.scala 31:17]
  wire [4:0] idu_io_R1; // @[Main.scala 31:17]
  wire [4:0] idu_io_R2; // @[Main.scala 31:17]
  wire [63:0] idu_io_Imm; // @[Main.scala 31:17]
  wire  exu_clock; // @[Main.scala 46:17]
  wire  exu_reset; // @[Main.scala 46:17]
  wire [4:0] exu_io_Rdest; // @[Main.scala 46:17]
  wire [4:0] exu_io_R1; // @[Main.scala 46:17]
  wire [4:0] exu_io_R2; // @[Main.scala 46:17]
  wire [63:0] exu_io_Imm; // @[Main.scala 46:17]
  wire  exu_io_RegWrite; // @[Main.scala 46:17]
  wire  exu_io_MemWrite; // @[Main.scala 46:17]
  wire [4:0] exu_io_AluOp; // @[Main.scala 46:17]
  wire [4:0] exu_io_AluSrc1Op; // @[Main.scala 46:17]
  wire [4:0] exu_io_AluSrc2Op; // @[Main.scala 46:17]
  wire [4:0] exu_io_PcSrc; // @[Main.scala 46:17]
  wire [2:0] exu_io_RinCtl; // @[Main.scala 46:17]
  wire [7:0] exu_io_MemMask; // @[Main.scala 46:17]
  wire [63:0] exu_io_PcVal; // @[Main.scala 46:17]
  IFU ifu ( // @[Main.scala 27:17]
    .io_Pc(ifu_io_Pc),
    .io_Inst(ifu_io_Inst)
  );
  IDU idu ( // @[Main.scala 31:17]
    .io_Inst(idu_io_Inst),
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
    .io_Imm(idu_io_Imm)
  );
  EXU exu ( // @[Main.scala 46:17]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_Rdest(exu_io_Rdest),
    .io_R1(exu_io_R1),
    .io_R2(exu_io_R2),
    .io_Imm(exu_io_Imm),
    .io_RegWrite(exu_io_RegWrite),
    .io_MemWrite(exu_io_MemWrite),
    .io_AluOp(exu_io_AluOp),
    .io_AluSrc1Op(exu_io_AluSrc1Op),
    .io_AluSrc2Op(exu_io_AluSrc2Op),
    .io_PcSrc(exu_io_PcSrc),
    .io_RinCtl(exu_io_RinCtl),
    .io_MemMask(exu_io_MemMask),
    .io_PcVal(exu_io_PcVal)
  );
  assign ifu_io_Pc = exu_io_PcVal; // @[Main.scala 12:14 Main.scala 60:6]
  assign idu_io_Inst = ifu_io_Inst; // @[Main.scala 13:16 Main.scala 29:8]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_Rdest = idu_io_Rdest; // @[Main.scala 22:17 Main.scala 38:9]
  assign exu_io_R1 = idu_io_R1; // @[Main.scala 23:14 Main.scala 39:6]
  assign exu_io_R2 = idu_io_R2; // @[Main.scala 24:14 Main.scala 40:6]
  assign exu_io_Imm = idu_io_Imm; // @[Main.scala 25:15 Main.scala 41:7]
  assign exu_io_RegWrite = idu_io_RegWrite; // @[Main.scala 14:20 Main.scala 32:12]
  assign exu_io_MemWrite = idu_io_MemWrite; // @[Main.scala 15:20 Main.scala 33:12]
  assign exu_io_AluOp = idu_io_AluOp; // @[Main.scala 16:17 Main.scala 34:9]
  assign exu_io_AluSrc1Op = idu_io_AluSrc1Op; // @[Main.scala 17:21 Main.scala 43:13]
  assign exu_io_AluSrc2Op = idu_io_AluSrc2Op; // @[Main.scala 18:21 Main.scala 44:13]
  assign exu_io_PcSrc = idu_io_PcSrc; // @[Main.scala 19:17 Main.scala 35:9]
  assign exu_io_RinCtl = idu_io_RinCtl; // @[Main.scala 20:18 Main.scala 36:10]
  assign exu_io_MemMask = idu_io_MemMask; // @[Main.scala 21:19 Main.scala 37:11]
endmodule
