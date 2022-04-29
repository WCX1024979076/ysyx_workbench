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
  output [4:0]  io_PcSrc,
  output [2:0]  io_RinCtl,
  output [7:0]  io_MemMask,
  output [4:0]  io_Rdest,
  output [4:0]  io_R1,
  output [4:0]  io_R2,
  output [63:0] io_Imm
);
  wire  ebreak_ebreak_in; // @[IDU.scala 40:20]
  wire [11:0] _ImmS_T_1 = {io_Inst[31:25], 5'h0}; // @[IDU.scala 34:26]
  wire [11:0] _GEN_0 = {{7'd0}, io_Inst[11:7]}; // @[IDU.scala 34:31]
  wire [11:0] _ImmS_T_3 = _ImmS_T_1 | _GEN_0; // @[IDU.scala 34:31]
  wire [12:0] _ImmB_T_1 = {io_Inst[31], 12'h0}; // @[IDU.scala 35:26]
  wire [10:0] _ImmB_T_3 = {io_Inst[30:25], 5'h0}; // @[IDU.scala 35:49]
  wire [12:0] _GEN_1 = {{2'd0}, _ImmB_T_3}; // @[IDU.scala 35:32]
  wire [12:0] _ImmB_T_4 = _ImmB_T_1 | _GEN_1; // @[IDU.scala 35:32]
  wire [4:0] _ImmB_T_6 = {io_Inst[11:8], 1'h0}; // @[IDU.scala 35:70]
  wire [12:0] _GEN_2 = {{8'd0}, _ImmB_T_6}; // @[IDU.scala 35:54]
  wire [12:0] _ImmB_T_7 = _ImmB_T_4 | _GEN_2; // @[IDU.scala 35:54]
  wire [11:0] _ImmB_T_9 = {io_Inst[7], 11'h0}; // @[IDU.scala 35:90]
  wire [12:0] _GEN_3 = {{1'd0}, _ImmB_T_9}; // @[IDU.scala 35:75]
  wire [12:0] _ImmB_T_10 = _ImmB_T_7 | _GEN_3; // @[IDU.scala 35:75]
  wire [31:0] _ImmU_T_1 = {io_Inst[31:12], 12'h0}; // @[IDU.scala 36:26]
  wire [20:0] _ImmJ_T_1 = {io_Inst[31], 20'h0}; // @[IDU.scala 37:26]
  wire [10:0] _ImmJ_T_3 = {io_Inst[30:21], 1'h0}; // @[IDU.scala 37:49]
  wire [20:0] _GEN_4 = {{10'd0}, _ImmJ_T_3}; // @[IDU.scala 37:32]
  wire [20:0] _ImmJ_T_4 = _ImmJ_T_1 | _GEN_4; // @[IDU.scala 37:32]
  wire [11:0] _ImmJ_T_6 = {io_Inst[20], 11'h0}; // @[IDU.scala 37:71]
  wire [20:0] _GEN_5 = {{9'd0}, _ImmJ_T_6}; // @[IDU.scala 37:54]
  wire [20:0] _ImmJ_T_7 = _ImmJ_T_4 | _GEN_5; // @[IDU.scala 37:54]
  wire [19:0] _ImmJ_T_9 = {io_Inst[19:12], 12'h0}; // @[IDU.scala 37:94]
  wire [20:0] _GEN_6 = {{1'd0}, _ImmJ_T_9}; // @[IDU.scala 37:77]
  wire [20:0] _ImmJ_T_10 = _ImmJ_T_7 | _GEN_6; // @[IDU.scala 37:77]
  wire [6:0] opcode = io_Inst[6:0]; // @[IDU.scala 44:23]
  wire [2:0] _inst_type_T_1 = 7'h17 == opcode ? 3'h4 : 3'h0; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_3 = 7'h3 == opcode ? 3'h1 : _inst_type_T_1; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_5 = 7'h23 == opcode ? 3'h2 : _inst_type_T_3; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_7 = 7'h13 == opcode ? 3'h1 : _inst_type_T_5; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_9 = 7'h33 == opcode ? 3'h0 : _inst_type_T_7; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_11 = 7'h1b == opcode ? 3'h1 : _inst_type_T_9; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_13 = 7'h3b == opcode ? 3'h0 : _inst_type_T_11; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_15 = 7'h37 == opcode ? 3'h4 : _inst_type_T_13; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_17 = 7'h6f == opcode ? 3'h5 : _inst_type_T_15; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_19 = 7'h67 == opcode ? 3'h1 : _inst_type_T_17; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_21 = 7'h63 == opcode ? 3'h3 : _inst_type_T_19; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_23 = 7'h3 == opcode ? 3'h1 : _inst_type_T_21; // @[Mux.scala 80:57]
  wire [2:0] _inst_type_T_25 = 7'h13 == opcode ? 3'h1 : _inst_type_T_23; // @[Mux.scala 80:57]
  wire [2:0] inst_type = 7'h63 == opcode ? 3'h3 : _inst_type_T_25; // @[Mux.scala 80:57]
  wire [63:0] ImmI = {{52'd0}, io_Inst[31:20]}; // @[IDU.scala 27:16 IDU.scala 33:8]
  wire [63:0] _io_Imm_T_1 = 3'h1 == inst_type ? ImmI : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] ImmS = {{52'd0}, _ImmS_T_3}; // @[IDU.scala 28:16 IDU.scala 34:8]
  wire [63:0] _io_Imm_T_3 = 3'h2 == inst_type ? ImmS : _io_Imm_T_1; // @[Mux.scala 80:57]
  wire [63:0] ImmB = {{51'd0}, _ImmB_T_10}; // @[IDU.scala 31:16 IDU.scala 35:8]
  wire [63:0] _io_Imm_T_5 = 3'h3 == inst_type ? ImmB : _io_Imm_T_3; // @[Mux.scala 80:57]
  wire [63:0] ImmU = {{32'd0}, _ImmU_T_1}; // @[IDU.scala 30:16 IDU.scala 36:8]
  wire [63:0] _io_Imm_T_7 = 3'h4 == inst_type ? ImmU : _io_Imm_T_5; // @[Mux.scala 80:57]
  wire [63:0] ImmJ = {{43'd0}, _ImmJ_T_10}; // @[IDU.scala 29:16 IDU.scala 37:8]
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
  wire  _contr_code_T_41 = 32'h6f == _contr_code_T; // @[Lookup.scala 31:38]
  wire  _contr_code_T_43 = 32'h67 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_45 = 32'h63 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_47 = 32'h2003 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_49 = 32'h3013 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire  _contr_code_T_51 = 32'h1063 == _contr_code_T_2; // @[Lookup.scala 31:38]
  wire [22:0] _contr_code_T_52 = _contr_code_T_51 ? 23'h71800 : 23'h0; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_53 = _contr_code_T_49 ? 23'h460000 : _contr_code_T_52; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_54 = _contr_code_T_47 ? 23'h410200 : _contr_code_T_53; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_55 = _contr_code_T_45 ? 23'h51800 : _contr_code_T_54; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_56 = _contr_code_T_43 ? 23'h441000 : _contr_code_T_55; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_57 = _contr_code_T_41 ? 23'h440800 : _contr_code_T_56; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_58 = _contr_code_T_39 ? 23'h500000 : _contr_code_T_57; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_59 = _contr_code_T_37 ? 23'h4f0000 : _contr_code_T_58; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_60 = _contr_code_T_35 ? 23'h4e0000 : _contr_code_T_59; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_61 = _contr_code_T_33 ? 23'h4d0000 : _contr_code_T_60; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_62 = _contr_code_T_31 ? 23'h4c0000 : _contr_code_T_61; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_63 = _contr_code_T_29 ? 23'h480300 : _contr_code_T_62; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_64 = _contr_code_T_27 ? 23'h480000 : _contr_code_T_63; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_65 = _contr_code_T_25 ? 23'h4b0000 : _contr_code_T_64; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_66 = _contr_code_T_23 ? 23'h4b0000 : _contr_code_T_65; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_67 = _contr_code_T_21 ? 23'h4a0000 : _contr_code_T_66; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_68 = _contr_code_T_19 ? 23'h4a0000 : _contr_code_T_67; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_69 = _contr_code_T_17 ? 23'h490000 : _contr_code_T_68; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_70 = _contr_code_T_15 ? 23'h490000 : _contr_code_T_69; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_71 = _contr_code_T_13 ? 23'h420300 : _contr_code_T_70; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_72 = _contr_code_T_11 ? 23'h410300 : _contr_code_T_71; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_73 = _contr_code_T_9 ? 23'h420000 : _contr_code_T_72; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_74 = _contr_code_T_7 ? 23'h410000 : _contr_code_T_73; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_75 = _contr_code_T_5 ? 23'h2100ff : _contr_code_T_74; // @[Lookup.scala 33:37]
  wire [22:0] _contr_code_T_76 = _contr_code_T_3 ? 23'h410100 : _contr_code_T_75; // @[Lookup.scala 33:37]
  wire [22:0] contr_code = _contr_code_T_1 ? 23'h430000 : _contr_code_T_76; // @[Lookup.scala 33:37]
  Ebreak ebreak ( // @[IDU.scala 40:20]
    .ebreak_in(ebreak_ebreak_in)
  );
  assign io_RegWrite = contr_code[22]; // @[IDU.scala 105:28]
  assign io_MemWrite = contr_code[21]; // @[IDU.scala 106:28]
  assign io_AluOp = contr_code[20:16]; // @[IDU.scala 107:25]
  assign io_PcSrc = contr_code[15:11]; // @[IDU.scala 108:25]
  assign io_RinCtl = contr_code[10:8]; // @[IDU.scala 109:26]
  assign io_MemMask = contr_code[7:0]; // @[IDU.scala 110:27]
  assign io_Rdest = io_Inst[11:7]; // @[IDU.scala 23:22]
  assign io_R1 = io_Inst[19:15]; // @[IDU.scala 24:19]
  assign io_R2 = io_Inst[24:20]; // @[IDU.scala 25:19]
  assign io_Imm = 3'h5 == inst_type ? ImmJ : _io_Imm_T_7; // @[Mux.scala 80:57]
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
  reg [63:0] Regs_1; // @[EXU.scala 27:21]
  reg [63:0] Regs_2; // @[EXU.scala 27:21]
  reg [63:0] Regs_3; // @[EXU.scala 27:21]
  reg [63:0] Regs_4; // @[EXU.scala 27:21]
  reg [63:0] Regs_5; // @[EXU.scala 27:21]
  reg [63:0] Regs_6; // @[EXU.scala 27:21]
  reg [63:0] Regs_7; // @[EXU.scala 27:21]
  reg [63:0] Regs_8; // @[EXU.scala 27:21]
  reg [63:0] Regs_9; // @[EXU.scala 27:21]
  reg [63:0] Regs_10; // @[EXU.scala 27:21]
  reg [63:0] Regs_11; // @[EXU.scala 27:21]
  reg [63:0] Regs_12; // @[EXU.scala 27:21]
  reg [63:0] Regs_13; // @[EXU.scala 27:21]
  reg [63:0] Regs_14; // @[EXU.scala 27:21]
  reg [63:0] Regs_15; // @[EXU.scala 27:21]
  reg [63:0] Regs_16; // @[EXU.scala 27:21]
  reg [63:0] Regs_17; // @[EXU.scala 27:21]
  reg [63:0] Regs_18; // @[EXU.scala 27:21]
  reg [63:0] Regs_19; // @[EXU.scala 27:21]
  reg [63:0] Regs_20; // @[EXU.scala 27:21]
  reg [63:0] Regs_21; // @[EXU.scala 27:21]
  reg [63:0] Regs_22; // @[EXU.scala 27:21]
  reg [63:0] Regs_23; // @[EXU.scala 27:21]
  reg [63:0] Regs_24; // @[EXU.scala 27:21]
  reg [63:0] Regs_25; // @[EXU.scala 27:21]
  reg [63:0] Regs_26; // @[EXU.scala 27:21]
  reg [63:0] Regs_27; // @[EXU.scala 27:21]
  reg [63:0] Regs_28; // @[EXU.scala 27:21]
  reg [63:0] Regs_29; // @[EXU.scala 27:21]
  reg [63:0] Regs_30; // @[EXU.scala 27:21]
  reg [63:0] Regs_31; // @[EXU.scala 27:21]
  reg [63:0] pc; // @[EXU.scala 30:19]
  wire [63:0] _GEN_1 = 5'h1 == io_R1 ? Regs_1 : 64'h0; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_2 = 5'h2 == io_R1 ? Regs_2 : _GEN_1; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_3 = 5'h3 == io_R1 ? Regs_3 : _GEN_2; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_4 = 5'h4 == io_R1 ? Regs_4 : _GEN_3; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_5 = 5'h5 == io_R1 ? Regs_5 : _GEN_4; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_6 = 5'h6 == io_R1 ? Regs_6 : _GEN_5; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_7 = 5'h7 == io_R1 ? Regs_7 : _GEN_6; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_8 = 5'h8 == io_R1 ? Regs_8 : _GEN_7; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_9 = 5'h9 == io_R1 ? Regs_9 : _GEN_8; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_10 = 5'ha == io_R1 ? Regs_10 : _GEN_9; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_11 = 5'hb == io_R1 ? Regs_11 : _GEN_10; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_12 = 5'hc == io_R1 ? Regs_12 : _GEN_11; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_13 = 5'hd == io_R1 ? Regs_13 : _GEN_12; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_14 = 5'he == io_R1 ? Regs_14 : _GEN_13; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_15 = 5'hf == io_R1 ? Regs_15 : _GEN_14; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_16 = 5'h10 == io_R1 ? Regs_16 : _GEN_15; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_17 = 5'h11 == io_R1 ? Regs_17 : _GEN_16; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_18 = 5'h12 == io_R1 ? Regs_18 : _GEN_17; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_19 = 5'h13 == io_R1 ? Regs_19 : _GEN_18; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_20 = 5'h14 == io_R1 ? Regs_20 : _GEN_19; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_21 = 5'h15 == io_R1 ? Regs_21 : _GEN_20; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_22 = 5'h16 == io_R1 ? Regs_22 : _GEN_21; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_23 = 5'h17 == io_R1 ? Regs_23 : _GEN_22; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_24 = 5'h18 == io_R1 ? Regs_24 : _GEN_23; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_25 = 5'h19 == io_R1 ? Regs_25 : _GEN_24; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_26 = 5'h1a == io_R1 ? Regs_26 : _GEN_25; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_27 = 5'h1b == io_R1 ? Regs_27 : _GEN_26; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_28 = 5'h1c == io_R1 ? Regs_28 : _GEN_27; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_29 = 5'h1d == io_R1 ? Regs_29 : _GEN_28; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_30 = 5'h1e == io_R1 ? Regs_30 : _GEN_29; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] DataR1 = 5'h1f == io_R1 ? Regs_31 : _GEN_30; // @[EXU.scala 35:10 EXU.scala 35:10]
  wire [63:0] _GEN_33 = 5'h1 == io_R2 ? Regs_1 : 64'h0; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_34 = 5'h2 == io_R2 ? Regs_2 : _GEN_33; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_35 = 5'h3 == io_R2 ? Regs_3 : _GEN_34; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_36 = 5'h4 == io_R2 ? Regs_4 : _GEN_35; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_37 = 5'h5 == io_R2 ? Regs_5 : _GEN_36; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_38 = 5'h6 == io_R2 ? Regs_6 : _GEN_37; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_39 = 5'h7 == io_R2 ? Regs_7 : _GEN_38; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_40 = 5'h8 == io_R2 ? Regs_8 : _GEN_39; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_41 = 5'h9 == io_R2 ? Regs_9 : _GEN_40; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_42 = 5'ha == io_R2 ? Regs_10 : _GEN_41; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_43 = 5'hb == io_R2 ? Regs_11 : _GEN_42; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_44 = 5'hc == io_R2 ? Regs_12 : _GEN_43; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_45 = 5'hd == io_R2 ? Regs_13 : _GEN_44; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_46 = 5'he == io_R2 ? Regs_14 : _GEN_45; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_47 = 5'hf == io_R2 ? Regs_15 : _GEN_46; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_48 = 5'h10 == io_R2 ? Regs_16 : _GEN_47; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_49 = 5'h11 == io_R2 ? Regs_17 : _GEN_48; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_50 = 5'h12 == io_R2 ? Regs_18 : _GEN_49; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_51 = 5'h13 == io_R2 ? Regs_19 : _GEN_50; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_52 = 5'h14 == io_R2 ? Regs_20 : _GEN_51; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_53 = 5'h15 == io_R2 ? Regs_21 : _GEN_52; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_54 = 5'h16 == io_R2 ? Regs_22 : _GEN_53; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_55 = 5'h17 == io_R2 ? Regs_23 : _GEN_54; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_56 = 5'h18 == io_R2 ? Regs_24 : _GEN_55; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_57 = 5'h19 == io_R2 ? Regs_25 : _GEN_56; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_58 = 5'h1a == io_R2 ? Regs_26 : _GEN_57; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_59 = 5'h1b == io_R2 ? Regs_27 : _GEN_58; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_60 = 5'h1c == io_R2 ? Regs_28 : _GEN_59; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_61 = 5'h1d == io_R2 ? Regs_29 : _GEN_60; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] _GEN_62 = 5'h1e == io_R2 ? Regs_30 : _GEN_61; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] DataR2 = 5'h1f == io_R2 ? Regs_31 : _GEN_62; // @[EXU.scala 36:10 EXU.scala 36:10]
  wire [63:0] MemOut = mem_Rdata; // @[EXU.scala 23:20 EXU.scala 48:10]
  wire [31:0] DataIn_hi = MemOut[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] DataIn_lo = MemOut[31:0]; // @[EXU.scala 40:46]
  wire [63:0] _DataIn_T_2 = {DataIn_hi,DataIn_lo}; // @[Cat.scala 30:58]
  wire [126:0] _GEN_128 = {{63'd0}, DataR1}; // @[EXU.scala 73:22]
  wire [126:0] _AluOut_T_23 = _GEN_128 << DataR2[5:0]; // @[EXU.scala 73:22]
  wire [63:0] _AluOut_T_21 = DataR1 - DataR2; // @[EXU.scala 72:22]
  wire  _AluOut_T_19 = DataR1 != DataR2; // @[EXU.scala 71:22]
  wire [51:0] AluOut_hi_2 = io_Imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [11:0] AluOut_lo_2 = io_Imm[11:0]; // @[EXU.scala 70:56]
  wire [63:0] _AluOut_T_17 = {AluOut_hi_2,AluOut_lo_2}; // @[Cat.scala 30:58]
  wire  _AluOut_T_18 = DataR1 < _AluOut_T_17; // @[EXU.scala 70:22]
  wire  _AluOut_T_14 = DataR1 == DataR2; // @[EXU.scala 69:22]
  wire [63:0] _AluOut_T_13 = pc + 64'h4; // @[EXU.scala 68:18]
  wire [43:0] AluOut_hi_1 = io_Imm[19] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 72:12]
  wire [19:0] AluOut_lo_1 = io_Imm[19:0]; // @[EXU.scala 67:52]
  wire [63:0] _AluOut_T_9 = {AluOut_hi_1,AluOut_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _AluOut_T_11 = pc + _AluOut_T_9; // @[EXU.scala 67:18]
  wire [63:0] _AluOut_T_6 = DataR1 + DataR2; // @[EXU.scala 66:22]
  wire [63:0] _AluOut_T_4 = DataR1 + _AluOut_T_17; // @[EXU.scala 65:22]
  wire [63:0] _AluOut_T_25 = 5'h1 == io_AluOp ? _AluOut_T_4 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_27 = 5'h2 == io_AluOp ? _AluOut_T_6 : _AluOut_T_25; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_29 = 5'h3 == io_AluOp ? _AluOut_T_11 : _AluOut_T_27; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_31 = 5'h4 == io_AluOp ? _AluOut_T_13 : _AluOut_T_29; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_33 = 5'h5 == io_AluOp ? {{63'd0}, _AluOut_T_14} : _AluOut_T_31; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_35 = 5'h6 == io_AluOp ? {{63'd0}, _AluOut_T_18} : _AluOut_T_33; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_37 = 5'h7 == io_AluOp ? {{63'd0}, _AluOut_T_19} : _AluOut_T_35; // @[Mux.scala 80:57]
  wire [63:0] _AluOut_T_39 = 5'h8 == io_AluOp ? _AluOut_T_21 : _AluOut_T_37; // @[Mux.scala 80:57]
  wire [126:0] _AluOut_T_41 = 5'h9 == io_AluOp ? _AluOut_T_23 : {{63'd0}, _AluOut_T_39}; // @[Mux.scala 80:57]
  wire [63:0] AluOut = _AluOut_T_41[63:0]; // @[EXU.scala 22:20 EXU.scala 64:10]
  wire [31:0] DataIn_hi_1 = AluOut[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] DataIn_lo_1 = AluOut[31:0]; // @[EXU.scala 41:46]
  wire [63:0] _DataIn_T_5 = {DataIn_hi_1,DataIn_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _DataIn_T_7 = 3'h0 == io_RinCtl ? AluOut : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _DataIn_T_9 = 3'h1 == io_RinCtl ? MemOut : _DataIn_T_7; // @[Mux.scala 80:57]
  wire [63:0] _DataIn_T_11 = 3'h2 == io_RinCtl ? _DataIn_T_2 : _DataIn_T_9; // @[Mux.scala 80:57]
  wire [42:0] pc_hi = io_Imm[20] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [20:0] pc_lo = io_Imm[20:0]; // @[EXU.scala 57:52]
  wire [63:0] _pc_T_6 = {pc_hi,pc_lo}; // @[Cat.scala 30:58]
  wire [63:0] _pc_T_8 = pc + _pc_T_6; // @[EXU.scala 57:18]
  wire [63:0] _pc_T_10 = DataR1 + io_Imm; // @[EXU.scala 58:23]
  wire [63:0] _pc_T_12 = _pc_T_10 & 64'hfffffffffffffffe; // @[EXU.scala 58:33]
  wire [50:0] pc_hi_1 = io_Imm[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [12:0] pc_lo_1 = io_Imm[12:0]; // @[EXU.scala 60:53]
  wire [63:0] _pc_T_17 = {pc_hi_1,pc_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _pc_T_19 = pc + _pc_T_17; // @[EXU.scala 60:18]
  wire [63:0] _pc_T_23 = 5'h0 == io_PcSrc ? _AluOut_T_13 : _AluOut_T_13; // @[Mux.scala 80:57]
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
  assign io_PcVal = pc; // @[EXU.scala 83:12]
  assign mem_Raddr = _AluOut_T_41[63:0]; // @[EXU.scala 22:20 EXU.scala 64:10]
  assign mem_Waddr = _AluOut_T_41[63:0]; // @[EXU.scala 22:20 EXU.scala 64:10]
  assign mem_Wdata = 5'h1f == io_R2 ? Regs_31 : _GEN_62; // @[EXU.scala 36:10 EXU.scala 36:10]
  assign mem_Wmask = io_MemMask; // @[EXU.scala 52:16]
  assign mem_MemWrite = io_MemWrite; // @[EXU.scala 53:19]
  assign difftest_gpr_0 = 64'h0; // @[EXU.scala 32:19]
  assign difftest_gpr_1 = Regs_1; // @[EXU.scala 32:19]
  assign difftest_gpr_2 = Regs_2; // @[EXU.scala 32:19]
  assign difftest_gpr_3 = Regs_3; // @[EXU.scala 32:19]
  assign difftest_gpr_4 = Regs_4; // @[EXU.scala 32:19]
  assign difftest_gpr_5 = Regs_5; // @[EXU.scala 32:19]
  assign difftest_gpr_6 = Regs_6; // @[EXU.scala 32:19]
  assign difftest_gpr_7 = Regs_7; // @[EXU.scala 32:19]
  assign difftest_gpr_8 = Regs_8; // @[EXU.scala 32:19]
  assign difftest_gpr_9 = Regs_9; // @[EXU.scala 32:19]
  assign difftest_gpr_10 = Regs_10; // @[EXU.scala 32:19]
  assign difftest_gpr_11 = Regs_11; // @[EXU.scala 32:19]
  assign difftest_gpr_12 = Regs_12; // @[EXU.scala 32:19]
  assign difftest_gpr_13 = Regs_13; // @[EXU.scala 32:19]
  assign difftest_gpr_14 = Regs_14; // @[EXU.scala 32:19]
  assign difftest_gpr_15 = Regs_15; // @[EXU.scala 32:19]
  assign difftest_gpr_16 = Regs_16; // @[EXU.scala 32:19]
  assign difftest_gpr_17 = Regs_17; // @[EXU.scala 32:19]
  assign difftest_gpr_18 = Regs_18; // @[EXU.scala 32:19]
  assign difftest_gpr_19 = Regs_19; // @[EXU.scala 32:19]
  assign difftest_gpr_20 = Regs_20; // @[EXU.scala 32:19]
  assign difftest_gpr_21 = Regs_21; // @[EXU.scala 32:19]
  assign difftest_gpr_22 = Regs_22; // @[EXU.scala 32:19]
  assign difftest_gpr_23 = Regs_23; // @[EXU.scala 32:19]
  assign difftest_gpr_24 = Regs_24; // @[EXU.scala 32:19]
  assign difftest_gpr_25 = Regs_25; // @[EXU.scala 32:19]
  assign difftest_gpr_26 = Regs_26; // @[EXU.scala 32:19]
  assign difftest_gpr_27 = Regs_27; // @[EXU.scala 32:19]
  assign difftest_gpr_28 = Regs_28; // @[EXU.scala 32:19]
  assign difftest_gpr_29 = Regs_29; // @[EXU.scala 32:19]
  assign difftest_gpr_30 = Regs_30; // @[EXU.scala 32:19]
  assign difftest_gpr_31 = Regs_31; // @[EXU.scala 32:19]
  assign difftest_PcVal = pc; // @[EXU.scala 33:21]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 27:21]
      Regs_1 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h1 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_1 <= _DataIn_T_5;
        end else begin
          Regs_1 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_2 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h2 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_2 <= _DataIn_T_5;
        end else begin
          Regs_2 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_3 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h3 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_3 <= _DataIn_T_5;
        end else begin
          Regs_3 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_4 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h4 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_4 <= _DataIn_T_5;
        end else begin
          Regs_4 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_5 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h5 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_5 <= _DataIn_T_5;
        end else begin
          Regs_5 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_6 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h6 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_6 <= _DataIn_T_5;
        end else begin
          Regs_6 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_7 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h7 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_7 <= _DataIn_T_5;
        end else begin
          Regs_7 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_8 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h8 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_8 <= _DataIn_T_5;
        end else begin
          Regs_8 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_9 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h9 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_9 <= _DataIn_T_5;
        end else begin
          Regs_9 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_10 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'ha == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_10 <= _DataIn_T_5;
        end else begin
          Regs_10 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_11 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'hb == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_11 <= _DataIn_T_5;
        end else begin
          Regs_11 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_12 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'hc == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_12 <= _DataIn_T_5;
        end else begin
          Regs_12 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_13 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'hd == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_13 <= _DataIn_T_5;
        end else begin
          Regs_13 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_14 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'he == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_14 <= _DataIn_T_5;
        end else begin
          Regs_14 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_15 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'hf == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_15 <= _DataIn_T_5;
        end else begin
          Regs_15 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_16 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h10 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_16 <= _DataIn_T_5;
        end else begin
          Regs_16 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_17 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h11 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_17 <= _DataIn_T_5;
        end else begin
          Regs_17 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_18 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h12 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_18 <= _DataIn_T_5;
        end else begin
          Regs_18 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_19 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h13 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_19 <= _DataIn_T_5;
        end else begin
          Regs_19 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_20 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h14 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_20 <= _DataIn_T_5;
        end else begin
          Regs_20 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_21 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h15 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_21 <= _DataIn_T_5;
        end else begin
          Regs_21 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_22 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h16 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_22 <= _DataIn_T_5;
        end else begin
          Regs_22 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_23 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h17 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_23 <= _DataIn_T_5;
        end else begin
          Regs_23 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_24 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h18 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_24 <= _DataIn_T_5;
        end else begin
          Regs_24 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_25 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h19 == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_25 <= _DataIn_T_5;
        end else begin
          Regs_25 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_26 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h1a == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_26 <= _DataIn_T_5;
        end else begin
          Regs_26 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_27 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h1b == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_27 <= _DataIn_T_5;
        end else begin
          Regs_27 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_28 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h1c == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_28 <= _DataIn_T_5;
        end else begin
          Regs_28 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_29 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h1d == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_29 <= _DataIn_T_5;
        end else begin
          Regs_29 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_30 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h1e == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_30 <= _DataIn_T_5;
        end else begin
          Regs_30 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 27:21]
      Regs_31 <= 64'h0; // @[EXU.scala 27:21]
    end else if (io_RegWrite) begin // @[EXU.scala 44:3]
      if (5'h1f == io_Rdest) begin // @[EXU.scala 45:20]
        if (3'h3 == io_RinCtl) begin // @[Mux.scala 80:57]
          Regs_31 <= _DataIn_T_5;
        end else begin
          Regs_31 <= _DataIn_T_11;
        end
      end
    end
    if (reset) begin // @[EXU.scala 30:19]
      pc <= 64'h80000000; // @[EXU.scala 30:19]
    end else if (5'h3 == io_PcSrc) begin // @[Mux.scala 80:57]
      if (64'h1 == AluOut) begin // @[Mux.scala 80:57]
        pc <= _pc_T_19;
      end else begin
        pc <= _AluOut_T_13;
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
  wire [63:0] ifu_io_Pc; // @[Main.scala 25:17]
  wire [31:0] ifu_io_Inst; // @[Main.scala 25:17]
  wire [31:0] idu_io_Inst; // @[Main.scala 29:17]
  wire  idu_io_RegWrite; // @[Main.scala 29:17]
  wire  idu_io_MemWrite; // @[Main.scala 29:17]
  wire [4:0] idu_io_AluOp; // @[Main.scala 29:17]
  wire [4:0] idu_io_PcSrc; // @[Main.scala 29:17]
  wire [2:0] idu_io_RinCtl; // @[Main.scala 29:17]
  wire [7:0] idu_io_MemMask; // @[Main.scala 29:17]
  wire [4:0] idu_io_Rdest; // @[Main.scala 29:17]
  wire [4:0] idu_io_R1; // @[Main.scala 29:17]
  wire [4:0] idu_io_R2; // @[Main.scala 29:17]
  wire [63:0] idu_io_Imm; // @[Main.scala 29:17]
  wire  exu_clock; // @[Main.scala 42:17]
  wire  exu_reset; // @[Main.scala 42:17]
  wire [4:0] exu_io_Rdest; // @[Main.scala 42:17]
  wire [4:0] exu_io_R1; // @[Main.scala 42:17]
  wire [4:0] exu_io_R2; // @[Main.scala 42:17]
  wire [63:0] exu_io_Imm; // @[Main.scala 42:17]
  wire  exu_io_RegWrite; // @[Main.scala 42:17]
  wire  exu_io_MemWrite; // @[Main.scala 42:17]
  wire [4:0] exu_io_AluOp; // @[Main.scala 42:17]
  wire [4:0] exu_io_PcSrc; // @[Main.scala 42:17]
  wire [2:0] exu_io_RinCtl; // @[Main.scala 42:17]
  wire [7:0] exu_io_MemMask; // @[Main.scala 42:17]
  wire [63:0] exu_io_PcVal; // @[Main.scala 42:17]
  IFU ifu ( // @[Main.scala 25:17]
    .io_Pc(ifu_io_Pc),
    .io_Inst(ifu_io_Inst)
  );
  IDU idu ( // @[Main.scala 29:17]
    .io_Inst(idu_io_Inst),
    .io_RegWrite(idu_io_RegWrite),
    .io_MemWrite(idu_io_MemWrite),
    .io_AluOp(idu_io_AluOp),
    .io_PcSrc(idu_io_PcSrc),
    .io_RinCtl(idu_io_RinCtl),
    .io_MemMask(idu_io_MemMask),
    .io_Rdest(idu_io_Rdest),
    .io_R1(idu_io_R1),
    .io_R2(idu_io_R2),
    .io_Imm(idu_io_Imm)
  );
  EXU exu ( // @[Main.scala 42:17]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_Rdest(exu_io_Rdest),
    .io_R1(exu_io_R1),
    .io_R2(exu_io_R2),
    .io_Imm(exu_io_Imm),
    .io_RegWrite(exu_io_RegWrite),
    .io_MemWrite(exu_io_MemWrite),
    .io_AluOp(exu_io_AluOp),
    .io_PcSrc(exu_io_PcSrc),
    .io_RinCtl(exu_io_RinCtl),
    .io_MemMask(exu_io_MemMask),
    .io_PcVal(exu_io_PcVal)
  );
  assign ifu_io_Pc = exu_io_PcVal; // @[Main.scala 12:14 Main.scala 53:6]
  assign idu_io_Inst = ifu_io_Inst; // @[Main.scala 13:16 Main.scala 27:8]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_Rdest = idu_io_Rdest; // @[Main.scala 20:17 Main.scala 36:9]
  assign exu_io_R1 = idu_io_R1; // @[Main.scala 21:14 Main.scala 37:6]
  assign exu_io_R2 = idu_io_R2; // @[Main.scala 22:14 Main.scala 38:6]
  assign exu_io_Imm = idu_io_Imm; // @[Main.scala 23:15 Main.scala 39:7]
  assign exu_io_RegWrite = idu_io_RegWrite; // @[Main.scala 14:20 Main.scala 30:12]
  assign exu_io_MemWrite = idu_io_MemWrite; // @[Main.scala 15:20 Main.scala 31:12]
  assign exu_io_AluOp = idu_io_AluOp; // @[Main.scala 16:17 Main.scala 32:9]
  assign exu_io_PcSrc = idu_io_PcSrc; // @[Main.scala 17:17 Main.scala 33:9]
  assign exu_io_RinCtl = idu_io_RinCtl; // @[Main.scala 18:18 Main.scala 34:10]
  assign exu_io_MemMask = idu_io_MemMask; // @[Main.scala 19:19 Main.scala 35:11]
endmodule
