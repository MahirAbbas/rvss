// Generator : SpinalHDL v1.9.3    git head : 029104c77a54c53f1edda327a3bea333f7d65fd9
// Component : RVSS
// Git hash  : e23ad6aa22c14c11f4e32ad24e78e8b6375ea691

`timescale 1ns/1ps

module RVSS (
  input               clk,
  input               reset
);
  localparam InstrFormat_R = 3'd0;
  localparam InstrFormat_I = 3'd1;
  localparam InstrFormat_S = 3'd2;
  localparam InstrFormat_B = 3'd3;
  localparam InstrFormat_U = 3'd4;
  localparam InstrFormat_J = 3'd5;
  localparam InstrFormat_UNDEF = 3'd6;

  wire                control_1_io_PCSrc;
  wire       [1:0]    control_1_io_resultSrc;
  wire                control_1_io_memWrite;
  wire       [2:0]    control_1_io_ALUControl;
  wire                control_1_io_ALUSrc;
  wire       [2:0]    control_1_io_immItype;
  wire                control_1_io_regWrite;
  wire       [31:0]   datapath_1_io_instruction;
  wire                datapath_1_io_zero;

  Control control_1 (
    .io_instrucion (datapath_1_io_instruction[31:0]), //i
    .io_PCSrc      (control_1_io_PCSrc             ), //o
    .io_resultSrc  (control_1_io_resultSrc[1:0]    ), //o
    .io_memWrite   (control_1_io_memWrite          ), //o
    .io_ALUControl (control_1_io_ALUControl[2:0]   ), //o
    .io_ALUSrc     (control_1_io_ALUSrc            ), //o
    .io_immItype   (control_1_io_immItype[2:0]     ), //o
    .io_regWrite   (control_1_io_regWrite          ), //o
    .io_zero       (datapath_1_io_zero             ), //i
    .clk           (clk                            ), //i
    .reset         (reset                          )  //i
  );
  Datapath datapath_1 (
    .io_PCSrc       (control_1_io_PCSrc             ), //i
    .io_ResultSrc   (control_1_io_resultSrc[1:0]    ), //i
    .io_MemWrite    (control_1_io_memWrite          ), //i
    .io_ALUControl  (control_1_io_ALUControl[2:0]   ), //i
    .io_ALUSrc      (control_1_io_ALUSrc            ), //i
    .io_RegWrite    (control_1_io_regWrite          ), //i
    .io_itype       (control_1_io_immItype[2:0]     ), //i
    .io_instruction (datapath_1_io_instruction[31:0]), //o
    .io_zero        (datapath_1_io_zero             ), //o
    .clk            (clk                            ), //i
    .reset          (reset                          )  //i
  );

endmodule

module Datapath (
  input               io_PCSrc,
  input      [1:0]    io_ResultSrc,
  input               io_MemWrite,
  input      [2:0]    io_ALUControl,
  input               io_ALUSrc,
  input               io_RegWrite,
  input      [2:0]    io_itype,
  output     [31:0]   io_instruction,
  output              io_zero,
  input               clk,
  input               reset
);
  localparam InstrFormat_R = 3'd0;
  localparam InstrFormat_I = 3'd1;
  localparam InstrFormat_S = 3'd2;
  localparam InstrFormat_B = 3'd3;
  localparam InstrFormat_U = 3'd4;
  localparam InstrFormat_J = 3'd5;
  localparam InstrFormat_UNDEF = 3'd6;

  wire                memory_1_io_resultSrc;
  wire       [31:0]   fetch_1_io_instruction;
  wire       [31:0]   fetch_1_io_PC;
  wire       [31:0]   datapathDecode_1_io_extended;
  wire       [31:0]   datapathDecode_1_io_RD1E;
  wire       [31:0]   datapathDecode_1_io_RD2E;
  wire       [31:0]   execute_1_io_RD2WriteData;
  wire       [31:0]   execute_1_io_aluResult;
  wire                execute_1_io_zero;
  wire       [31:0]   memory_1_io_result;
  wire       [31:0]   _zz_PCTarget;
  reg        [31:0]   _zz_io_WD3E;
  wire       [31:0]   PCTarget;
  wire       [31:0]   branch_immediate;
  `ifndef SYNTHESIS
  reg [39:0] io_itype_string;
  `endif


  assign _zz_PCTarget = (datapathDecode_1_io_extended / 3'b100);
  Fetch fetch_1 (
    .io_branch       (io_PCSrc                    ), //i
    .io_branchTarget (PCTarget[31:0]              ), //i
    .io_instruction  (fetch_1_io_instruction[31:0]), //o
    .io_PC           (fetch_1_io_PC[31:0]         ), //o
    .clk             (clk                         ), //i
    .reset           (reset                       )  //i
  );
  DatapathDecode datapathDecode_1 (
    .io_instr       (fetch_1_io_instruction[31:0]      ), //i
    .io_writeEnable (io_RegWrite                       ), //i
    .io_itype       (io_itype[2:0]                     ), //i
    .io_extended    (datapathDecode_1_io_extended[31:0]), //o
    .io_RD1E        (datapathDecode_1_io_RD1E[31:0]    ), //o
    .io_RD2E        (datapathDecode_1_io_RD2E[31:0]    ), //o
    .io_WD3E        (_zz_io_WD3E[31:0]                 ), //i
    .clk            (clk                               ), //i
    .reset          (reset                             )  //i
  );
  Execute execute_1 (
    .io_RD1E         (datapathDecode_1_io_RD1E[31:0]    ), //i
    .io_RD2E         (datapathDecode_1_io_RD2E[31:0]    ), //i
    .io_immExt       (datapathDecode_1_io_extended[31:0]), //i
    .io_aluSrc       (io_ALUSrc                         ), //i
    .io_aluControl   (io_ALUControl[2:0]                ), //i
    .io_RD2WriteData (execute_1_io_RD2WriteData[31:0]   ), //o
    .io_aluResult    (execute_1_io_aluResult[31:0]      ), //o
    .io_zero         (execute_1_io_zero                 )  //o
  );
  Memory memory_1 (
    .io_aluResult (execute_1_io_aluResult[31:0]  ), //i
    .io_writeData (datapathDecode_1_io_RD2E[31:0]), //i
    .io_result    (memory_1_io_result[31:0]      ), //o
    .io_memWrite  (io_MemWrite                   ), //i
    .io_resultSrc (memory_1_io_resultSrc         ), //i
    .clk          (clk                           ), //i
    .reset        (reset                         )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_itype)
      InstrFormat_R : io_itype_string = "R    ";
      InstrFormat_I : io_itype_string = "I    ";
      InstrFormat_S : io_itype_string = "S    ";
      InstrFormat_B : io_itype_string = "B    ";
      InstrFormat_U : io_itype_string = "U    ";
      InstrFormat_J : io_itype_string = "J    ";
      InstrFormat_UNDEF : io_itype_string = "UNDEF";
      default : io_itype_string = "?????";
    endcase
  end
  `endif

  assign io_zero = execute_1_io_zero;
  assign io_instruction = fetch_1_io_instruction;
  always @(*) begin
    case(io_ResultSrc)
      2'b00 : begin
        _zz_io_WD3E = execute_1_io_aluResult;
      end
      2'b01 : begin
        _zz_io_WD3E = memory_1_io_result;
      end
      2'b10 : begin
        _zz_io_WD3E = fetch_1_io_PC;
      end
      default : begin
        _zz_io_WD3E = execute_1_io_aluResult;
      end
    endcase
  end

  assign PCTarget = (fetch_1_io_PC + _zz_PCTarget);

endmodule

module Control (
  input      [31:0]   io_instrucion,
  output reg          io_PCSrc,
  output reg [1:0]    io_resultSrc,
  output reg          io_memWrite,
  output reg [2:0]    io_ALUControl,
  output reg          io_ALUSrc,
  output     [2:0]    io_immItype,
  output reg          io_regWrite,
  input               io_zero,
  input               clk,
  input               reset
);
  localparam InstrFormat_R = 3'd0;
  localparam InstrFormat_I = 3'd1;
  localparam InstrFormat_S = 3'd2;
  localparam InstrFormat_B = 3'd3;
  localparam InstrFormat_U = 3'd4;
  localparam InstrFormat_J = 3'd5;
  localparam InstrFormat_UNDEF = 3'd6;
  localparam OpCode_LUI = 6'd0;
  localparam OpCode_AUIPC = 6'd1;
  localparam OpCode_JAL = 6'd2;
  localparam OpCode_JALR = 6'd3;
  localparam OpCode_BEQ = 6'd4;
  localparam OpCode_BNE = 6'd5;
  localparam OpCode_BLT = 6'd6;
  localparam OpCode_BGE = 6'd7;
  localparam OpCode_BLTU = 6'd8;
  localparam OpCode_BGEU = 6'd9;
  localparam OpCode_LB = 6'd10;
  localparam OpCode_LH = 6'd11;
  localparam OpCode_LW = 6'd12;
  localparam OpCode_LBU = 6'd13;
  localparam OpCode_LHU = 6'd14;
  localparam OpCode_SB = 6'd15;
  localparam OpCode_SH = 6'd16;
  localparam OpCode_SW = 6'd17;
  localparam OpCode_ADDI = 6'd18;
  localparam OpCode_SLTI = 6'd19;
  localparam OpCode_SLTIU = 6'd20;
  localparam OpCode_XORI = 6'd21;
  localparam OpCode_ORI = 6'd22;
  localparam OpCode_ANDI = 6'd23;
  localparam OpCode_SLLI = 6'd24;
  localparam OpCode_SRLI = 6'd25;
  localparam OpCode_SRAI = 6'd26;
  localparam OpCode_ADD = 6'd27;
  localparam OpCode_SUB = 6'd28;
  localparam OpCode_SLL_1 = 6'd29;
  localparam OpCode_SLT = 6'd30;
  localparam OpCode_SLTU = 6'd31;
  localparam OpCode_XOR_1 = 6'd32;
  localparam OpCode_SRL_1 = 6'd33;
  localparam OpCode_SRA_1 = 6'd34;
  localparam OpCode_OR_1 = 6'd35;
  localparam OpCode_AND_1 = 6'd36;
  localparam OpCode_FENCE = 6'd37;
  localparam OpCode_NOOP = 6'd38;

  wire       [5:0]    decode_1_io_operation;
  wire       [2:0]    decode_1_io_outInstrFormat;
  wire                when_Control_l34;
  wire                when_Control_l41;
  wire                when_Control_l64;
  wire                when_Control_l71;
  wire                when_Control_l78;
  wire                when_Control_l87;
  wire                when_Control_l98;
  wire                when_Control_l101;
  wire                when_Control_l104;
  wire                when_Control_l107;
  wire                when_Control_l110;
  `ifndef SYNTHESIS
  reg [39:0] io_immItype_string;
  `endif


  Decode decode_1 (
    .io_instr          (io_instrucion[31:0]            ), //i
    .io_operation      (decode_1_io_operation[5:0]     ), //o
    .io_outInstrFormat (decode_1_io_outInstrFormat[2:0]), //o
    .clk               (clk                            ), //i
    .reset             (reset                          )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_immItype)
      InstrFormat_R : io_immItype_string = "R    ";
      InstrFormat_I : io_immItype_string = "I    ";
      InstrFormat_S : io_immItype_string = "S    ";
      InstrFormat_B : io_immItype_string = "B    ";
      InstrFormat_U : io_immItype_string = "U    ";
      InstrFormat_J : io_immItype_string = "J    ";
      InstrFormat_UNDEF : io_immItype_string = "UNDEF";
      default : io_immItype_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    io_ALUControl = 3'b000;
    if(when_Control_l71) begin
      io_ALUControl = 3'b000;
    end
    if(when_Control_l78) begin
      io_ALUControl = 3'b001;
    end
    if(when_Control_l98) begin
      io_ALUControl = 3'b000;
    end
    if(when_Control_l101) begin
      io_ALUControl = 3'b001;
    end
    if(when_Control_l104) begin
      io_ALUControl = 3'b010;
    end
    if(when_Control_l107) begin
      io_ALUControl = 3'b110;
    end
    if(when_Control_l110) begin
      io_ALUControl = 3'b111;
    end
  end

  always @(*) begin
    io_ALUSrc = 1'b0;
    if(when_Control_l34) begin
      io_ALUSrc = 1'b0;
    end
    if(when_Control_l41) begin
      io_ALUSrc = 1'b1;
    end
    if(when_Control_l64) begin
      io_ALUSrc = 1'b1;
    end
    if(when_Control_l71) begin
      io_ALUSrc = 1'b1;
    end
    if(when_Control_l78) begin
      io_ALUSrc = 1'b0;
    end
  end

  always @(*) begin
    io_memWrite = 1'b0;
    if(when_Control_l34) begin
      io_memWrite = 1'b0;
    end
    if(when_Control_l41) begin
      io_memWrite = 1'b0;
    end
    if(when_Control_l64) begin
      io_memWrite = 1'b0;
    end
    if(when_Control_l71) begin
      io_memWrite = 1'b1;
    end
    if(when_Control_l78) begin
      io_memWrite = 1'b0;
    end
    if(when_Control_l87) begin
      io_memWrite = 1'b0;
    end
  end

  always @(*) begin
    io_resultSrc = 2'b00;
    if(when_Control_l34) begin
      io_resultSrc = 2'b00;
    end
    if(when_Control_l41) begin
      io_resultSrc = 2'b00;
    end
    if(when_Control_l64) begin
      io_resultSrc = 2'b01;
    end
    if(when_Control_l87) begin
      io_resultSrc = 2'b10;
    end
  end

  always @(*) begin
    io_regWrite = 1'b0;
    if(when_Control_l34) begin
      io_regWrite = 1'b1;
    end
    if(when_Control_l41) begin
      io_regWrite = 1'b1;
    end
    if(when_Control_l64) begin
      io_regWrite = 1'b1;
    end
    if(when_Control_l71) begin
      io_regWrite = 1'b0;
    end
    if(when_Control_l78) begin
      io_regWrite = 1'b0;
    end
    if(when_Control_l87) begin
      io_regWrite = 1'b1;
    end
  end

  always @(*) begin
    io_PCSrc = 1'b0;
    if(when_Control_l78) begin
      if(io_zero) begin
        io_PCSrc = 1'b1;
      end
    end
    if(when_Control_l87) begin
      io_PCSrc = 1'b1;
    end
  end

  assign io_immItype = decode_1_io_outInstrFormat;
  assign when_Control_l34 = (decode_1_io_outInstrFormat == InstrFormat_R);
  assign when_Control_l41 = (decode_1_io_outInstrFormat == InstrFormat_I);
  assign when_Control_l64 = (decode_1_io_operation == OpCode_LW);
  assign when_Control_l71 = (decode_1_io_operation == OpCode_SW);
  assign when_Control_l78 = (decode_1_io_operation == OpCode_BEQ);
  assign when_Control_l87 = (decode_1_io_operation == OpCode_JAL);
  assign when_Control_l98 = (decode_1_io_operation == OpCode_ADD);
  assign when_Control_l101 = (decode_1_io_operation == OpCode_SUB);
  assign when_Control_l104 = (decode_1_io_operation == OpCode_SLT);
  assign when_Control_l107 = (decode_1_io_operation == OpCode_OR_1);
  assign when_Control_l110 = (decode_1_io_operation == OpCode_AND_1);

endmodule

module Memory (
  input      [31:0]   io_aluResult,
  input      [31:0]   io_writeData,
  output     [31:0]   io_result,
  input               io_memWrite,
  input               io_resultSrc,
  input               clk,
  input               reset
);

  wire       [31:0]   _zz_dataMemory_port1;
  wire       [7:0]    _zz_dataMemory_port;
  wire       [31:0]   _zz_dataMemory_port_1;
  wire       [31:0]   _zz_dataMemory_port_2;
  wire       [31:0]   _zz__zz_io_result;
  reg                 _zz_1;
  wire       [7:0]    _zz_io_result;
  (* ram_style = "distributed" *) reg [31:0] dataMemory [0:255] /* verilator public */ ;

  assign _zz_dataMemory_port_1 = io_aluResult;
  assign _zz_dataMemory_port = _zz_dataMemory_port_1[7:0];
  assign _zz__zz_io_result = io_aluResult;
  assign _zz_dataMemory_port_2 = io_writeData;
  initial begin
    $readmemb("/home/mahir/fun/spinalhdl/Digital-Design/rvss/tmp/job_1/RVSS.v_toplevel_datapath_1_memory_1_dataMemory.bin",dataMemory);
  end
  always @(posedge clk) begin
    if(_zz_1) begin
      dataMemory[_zz_dataMemory_port] <= _zz_dataMemory_port_2;
    end
  end

  assign _zz_dataMemory_port1 = dataMemory[_zz_io_result];
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_memWrite) begin
      _zz_1 = 1'b1;
    end
  end

  assign _zz_io_result = _zz__zz_io_result[7:0];
  assign io_result = _zz_dataMemory_port1;

endmodule

module Execute (
  input      [31:0]   io_RD1E,
  input      [31:0]   io_RD2E,
  input      [31:0]   io_immExt,
  input               io_aluSrc,
  input      [2:0]    io_aluControl,
  output     [31:0]   io_RD2WriteData,
  output     [31:0]   io_aluResult,
  output              io_zero
);

  wire       [31:0]   alu_1_io_SrcB;
  wire       [31:0]   alu_1_io_ALUResult;
  wire                alu_1_io_zero;

  ALU alu_1 (
    .io_SrcA       (io_RD1E[31:0]           ), //i
    .io_SrcB       (alu_1_io_SrcB[31:0]     ), //i
    .io_ALUControl (io_aluControl[2:0]      ), //i
    .io_ALUResult  (alu_1_io_ALUResult[31:0]), //o
    .io_zero       (alu_1_io_zero           )  //o
  );
  assign alu_1_io_SrcB = (io_aluSrc ? io_immExt : io_RD2E);
  assign io_aluResult = alu_1_io_ALUResult;
  assign io_RD2WriteData = io_RD2E;
  assign io_zero = alu_1_io_zero;

endmodule

module DatapathDecode (
  input      [31:0]   io_instr,
  input               io_writeEnable,
  input      [2:0]    io_itype,
  output reg [31:0]   io_extended,
  output     [31:0]   io_RD1E,
  output     [31:0]   io_RD2E,
  input      [31:0]   io_WD3E,
  input               clk,
  input               reset
);
  localparam InstrFormat_R = 3'd0;
  localparam InstrFormat_I = 3'd1;
  localparam InstrFormat_S = 3'd2;
  localparam InstrFormat_B = 3'd3;
  localparam InstrFormat_U = 3'd4;
  localparam InstrFormat_J = 3'd5;
  localparam InstrFormat_UNDEF = 3'd6;

  wire       [4:0]    regFile_1_io_readAddress1;
  wire       [4:0]    regFile_1_io_readAddress2;
  wire       [4:0]    regFile_1_io_writeAddress3;
  wire       [31:0]   regFile_1_io_readData1;
  wire       [31:0]   regFile_1_io_readData2;
  wire       [0:0]    _zz_io_extended;
  wire       [11:0]   _zz_io_extended_1;
  wire       [11:0]   _zz_io_extended_2;
  wire       [12:0]   _zz_io_extended_3;
  wire       [19:0]   _zz_io_extended_4;
  wire       [20:0]   _zz_io_extended_5;
  wire       [11:0]   i_imm;
  wire       [11:0]   s_imm;
  wire       [12:0]   b_imm;
  wire       [19:0]   u_imm;
  wire       [20:0]   j_imm;
  `ifndef SYNTHESIS
  reg [39:0] io_itype_string;
  `endif


  assign _zz_io_extended = 1'b0;
  assign _zz_io_extended_1 = i_imm;
  assign _zz_io_extended_2 = s_imm;
  assign _zz_io_extended_3 = b_imm;
  assign _zz_io_extended_4 = u_imm;
  assign _zz_io_extended_5 = j_imm;
  RegFile regFile_1 (
    .io_writeEnable3  (io_writeEnable                 ), //i
    .io_readAddress1  (regFile_1_io_readAddress1[4:0] ), //i
    .io_readAddress2  (regFile_1_io_readAddress2[4:0] ), //i
    .io_readData1     (regFile_1_io_readData1[31:0]   ), //o
    .io_readData2     (regFile_1_io_readData2[31:0]   ), //o
    .io_writeAddress3 (regFile_1_io_writeAddress3[4:0]), //i
    .io_writeData3    (io_WD3E[31:0]                  ), //i
    .clk              (clk                            ), //i
    .reset            (reset                          )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_itype)
      InstrFormat_R : io_itype_string = "R    ";
      InstrFormat_I : io_itype_string = "I    ";
      InstrFormat_S : io_itype_string = "S    ";
      InstrFormat_B : io_itype_string = "B    ";
      InstrFormat_U : io_itype_string = "U    ";
      InstrFormat_J : io_itype_string = "J    ";
      InstrFormat_UNDEF : io_itype_string = "UNDEF";
      default : io_itype_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    io_extended = {{31{_zz_io_extended[0]}}, _zz_io_extended};
    case(io_itype)
      InstrFormat_I : begin
        io_extended = {{20{_zz_io_extended_1[11]}}, _zz_io_extended_1};
      end
      InstrFormat_S : begin
        io_extended = {{20{_zz_io_extended_2[11]}}, _zz_io_extended_2};
      end
      InstrFormat_B : begin
        io_extended = {{19{_zz_io_extended_3[12]}}, _zz_io_extended_3};
      end
      InstrFormat_U : begin
        io_extended = {{12{_zz_io_extended_4[19]}}, _zz_io_extended_4};
      end
      InstrFormat_J : begin
        io_extended = {{11{_zz_io_extended_5[20]}}, _zz_io_extended_5};
      end
      default : begin
      end
    endcase
  end

  assign regFile_1_io_readAddress1 = io_instr[19 : 15];
  assign regFile_1_io_readAddress2 = io_instr[24 : 20];
  assign regFile_1_io_writeAddress3 = io_instr[11 : 7];
  assign io_RD1E = regFile_1_io_readData1;
  assign io_RD2E = regFile_1_io_readData2;
  assign i_imm = io_instr[31 : 20];
  assign s_imm = {io_instr[31 : 25],io_instr[11 : 7]};
  assign b_imm = {{{{io_instr[31],io_instr[7]},io_instr[30 : 25]},io_instr[11 : 8]},1'b0};
  assign u_imm = io_instr[31 : 12];
  assign j_imm = {{{{io_instr[31],io_instr[19 : 12]},io_instr[20]},io_instr[30 : 21]},1'b0};

endmodule

module Fetch (
  input               io_branch,
  input      [31:0]   io_branchTarget,
  output     [31:0]   io_instruction /* verilator public */ ,
  output     [31:0]   io_PC,
  input               clk,
  input               reset
);

  wire       [31:0]   _zz_instructionMemory_port0;
  wire       [31:0]   _zz__zz_io_instruction;
  reg        [31:0]   programCounter;
  wire       [31:0]   PCNext;
  reg        [31:0]   PCPlus4;
  wire       [7:0]    _zz_io_instruction;
  reg [31:0] instructionMemory [0:255] /* verilator public */ ;

  assign _zz__zz_io_instruction = programCounter[31 : 0];
  initial begin
    $readmemb("/home/mahir/fun/spinalhdl/Digital-Design/rvss/tmp/job_1/RVSS.v_toplevel_datapath_1_fetch_1_instructionMemory.bin",instructionMemory);
  end
  assign _zz_instructionMemory_port0 = instructionMemory[_zz_io_instruction];
  always @(*) begin
    PCPlus4 = (programCounter + 32'h00000001);
    if(io_branch) begin
      PCPlus4 = io_branchTarget;
    end
  end

  assign PCNext = (io_branch ? io_branchTarget : PCPlus4);
  assign _zz_io_instruction = _zz__zz_io_instruction[7:0];
  assign io_instruction = _zz_instructionMemory_port0;
  assign io_PC = programCounter;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      programCounter <= 32'h00000000;
    end else begin
      programCounter <= PCNext;
    end
  end


endmodule

module Decode (
  input      [31:0]   io_instr,
  output reg [5:0]    io_operation /* verilator public */ ,
  output reg [2:0]    io_outInstrFormat,
  input               clk,
  input               reset
);
  localparam OpCode_LUI = 6'd0;
  localparam OpCode_AUIPC = 6'd1;
  localparam OpCode_JAL = 6'd2;
  localparam OpCode_JALR = 6'd3;
  localparam OpCode_BEQ = 6'd4;
  localparam OpCode_BNE = 6'd5;
  localparam OpCode_BLT = 6'd6;
  localparam OpCode_BGE = 6'd7;
  localparam OpCode_BLTU = 6'd8;
  localparam OpCode_BGEU = 6'd9;
  localparam OpCode_LB = 6'd10;
  localparam OpCode_LH = 6'd11;
  localparam OpCode_LW = 6'd12;
  localparam OpCode_LBU = 6'd13;
  localparam OpCode_LHU = 6'd14;
  localparam OpCode_SB = 6'd15;
  localparam OpCode_SH = 6'd16;
  localparam OpCode_SW = 6'd17;
  localparam OpCode_ADDI = 6'd18;
  localparam OpCode_SLTI = 6'd19;
  localparam OpCode_SLTIU = 6'd20;
  localparam OpCode_XORI = 6'd21;
  localparam OpCode_ORI = 6'd22;
  localparam OpCode_ANDI = 6'd23;
  localparam OpCode_SLLI = 6'd24;
  localparam OpCode_SRLI = 6'd25;
  localparam OpCode_SRAI = 6'd26;
  localparam OpCode_ADD = 6'd27;
  localparam OpCode_SUB = 6'd28;
  localparam OpCode_SLL_1 = 6'd29;
  localparam OpCode_SLT = 6'd30;
  localparam OpCode_SLTU = 6'd31;
  localparam OpCode_XOR_1 = 6'd32;
  localparam OpCode_SRL_1 = 6'd33;
  localparam OpCode_SRA_1 = 6'd34;
  localparam OpCode_OR_1 = 6'd35;
  localparam OpCode_AND_1 = 6'd36;
  localparam OpCode_FENCE = 6'd37;
  localparam OpCode_NOOP = 6'd38;
  localparam InstrFormat_R = 3'd0;
  localparam InstrFormat_I = 3'd1;
  localparam InstrFormat_S = 3'd2;
  localparam InstrFormat_B = 3'd3;
  localparam InstrFormat_U = 3'd4;
  localparam InstrFormat_J = 3'd5;
  localparam InstrFormat_UNDEF = 3'd6;

  reg        [5:0]    register_1;
  wire       [6:0]    decodeInstrBits_opcode;
  wire       [2:0]    decodeInstrBits_funct3;
  wire       [6:0]    decodeInstrBits_funct7;
  wire                when_Decode_l45;
  `ifndef SYNTHESIS
  reg [39:0] io_operation_string;
  reg [39:0] io_outInstrFormat_string;
  reg [39:0] register_1_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(io_operation)
      OpCode_LUI : io_operation_string = "LUI  ";
      OpCode_AUIPC : io_operation_string = "AUIPC";
      OpCode_JAL : io_operation_string = "JAL  ";
      OpCode_JALR : io_operation_string = "JALR ";
      OpCode_BEQ : io_operation_string = "BEQ  ";
      OpCode_BNE : io_operation_string = "BNE  ";
      OpCode_BLT : io_operation_string = "BLT  ";
      OpCode_BGE : io_operation_string = "BGE  ";
      OpCode_BLTU : io_operation_string = "BLTU ";
      OpCode_BGEU : io_operation_string = "BGEU ";
      OpCode_LB : io_operation_string = "LB   ";
      OpCode_LH : io_operation_string = "LH   ";
      OpCode_LW : io_operation_string = "LW   ";
      OpCode_LBU : io_operation_string = "LBU  ";
      OpCode_LHU : io_operation_string = "LHU  ";
      OpCode_SB : io_operation_string = "SB   ";
      OpCode_SH : io_operation_string = "SH   ";
      OpCode_SW : io_operation_string = "SW   ";
      OpCode_ADDI : io_operation_string = "ADDI ";
      OpCode_SLTI : io_operation_string = "SLTI ";
      OpCode_SLTIU : io_operation_string = "SLTIU";
      OpCode_XORI : io_operation_string = "XORI ";
      OpCode_ORI : io_operation_string = "ORI  ";
      OpCode_ANDI : io_operation_string = "ANDI ";
      OpCode_SLLI : io_operation_string = "SLLI ";
      OpCode_SRLI : io_operation_string = "SRLI ";
      OpCode_SRAI : io_operation_string = "SRAI ";
      OpCode_ADD : io_operation_string = "ADD  ";
      OpCode_SUB : io_operation_string = "SUB  ";
      OpCode_SLL_1 : io_operation_string = "SLL_1";
      OpCode_SLT : io_operation_string = "SLT  ";
      OpCode_SLTU : io_operation_string = "SLTU ";
      OpCode_XOR_1 : io_operation_string = "XOR_1";
      OpCode_SRL_1 : io_operation_string = "SRL_1";
      OpCode_SRA_1 : io_operation_string = "SRA_1";
      OpCode_OR_1 : io_operation_string = "OR_1 ";
      OpCode_AND_1 : io_operation_string = "AND_1";
      OpCode_FENCE : io_operation_string = "FENCE";
      OpCode_NOOP : io_operation_string = "NOOP ";
      default : io_operation_string = "?????";
    endcase
  end
  always @(*) begin
    case(io_outInstrFormat)
      InstrFormat_R : io_outInstrFormat_string = "R    ";
      InstrFormat_I : io_outInstrFormat_string = "I    ";
      InstrFormat_S : io_outInstrFormat_string = "S    ";
      InstrFormat_B : io_outInstrFormat_string = "B    ";
      InstrFormat_U : io_outInstrFormat_string = "U    ";
      InstrFormat_J : io_outInstrFormat_string = "J    ";
      InstrFormat_UNDEF : io_outInstrFormat_string = "UNDEF";
      default : io_outInstrFormat_string = "?????";
    endcase
  end
  always @(*) begin
    case(register_1)
      OpCode_LUI : register_1_string = "LUI  ";
      OpCode_AUIPC : register_1_string = "AUIPC";
      OpCode_JAL : register_1_string = "JAL  ";
      OpCode_JALR : register_1_string = "JALR ";
      OpCode_BEQ : register_1_string = "BEQ  ";
      OpCode_BNE : register_1_string = "BNE  ";
      OpCode_BLT : register_1_string = "BLT  ";
      OpCode_BGE : register_1_string = "BGE  ";
      OpCode_BLTU : register_1_string = "BLTU ";
      OpCode_BGEU : register_1_string = "BGEU ";
      OpCode_LB : register_1_string = "LB   ";
      OpCode_LH : register_1_string = "LH   ";
      OpCode_LW : register_1_string = "LW   ";
      OpCode_LBU : register_1_string = "LBU  ";
      OpCode_LHU : register_1_string = "LHU  ";
      OpCode_SB : register_1_string = "SB   ";
      OpCode_SH : register_1_string = "SH   ";
      OpCode_SW : register_1_string = "SW   ";
      OpCode_ADDI : register_1_string = "ADDI ";
      OpCode_SLTI : register_1_string = "SLTI ";
      OpCode_SLTIU : register_1_string = "SLTIU";
      OpCode_XORI : register_1_string = "XORI ";
      OpCode_ORI : register_1_string = "ORI  ";
      OpCode_ANDI : register_1_string = "ANDI ";
      OpCode_SLLI : register_1_string = "SLLI ";
      OpCode_SRLI : register_1_string = "SRLI ";
      OpCode_SRAI : register_1_string = "SRAI ";
      OpCode_ADD : register_1_string = "ADD  ";
      OpCode_SUB : register_1_string = "SUB  ";
      OpCode_SLL_1 : register_1_string = "SLL_1";
      OpCode_SLT : register_1_string = "SLT  ";
      OpCode_SLTU : register_1_string = "SLTU ";
      OpCode_XOR_1 : register_1_string = "XOR_1";
      OpCode_SRL_1 : register_1_string = "SRL_1";
      OpCode_SRA_1 : register_1_string = "SRA_1";
      OpCode_OR_1 : register_1_string = "OR_1 ";
      OpCode_AND_1 : register_1_string = "AND_1";
      OpCode_FENCE : register_1_string = "FENCE";
      OpCode_NOOP : register_1_string = "NOOP ";
      default : register_1_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    io_operation = OpCode_NOOP;
    case(decodeInstrBits_opcode)
      7'h03 : begin
        case(decodeInstrBits_funct3)
          3'b000 : begin
            io_operation = OpCode_LB;
          end
          3'b001 : begin
            io_operation = OpCode_LH;
          end
          3'b010 : begin
            io_operation = OpCode_LW;
          end
          3'b100 : begin
            io_operation = OpCode_LBU;
          end
          3'b101 : begin
            io_operation = OpCode_LHU;
          end
          default : begin
          end
        endcase
      end
      7'h13 : begin
        case(decodeInstrBits_funct3)
          3'b000 : begin
            io_operation = OpCode_ADDI;
          end
          3'b001 : begin
            io_operation = OpCode_SLLI;
          end
          3'b010 : begin
            io_operation = OpCode_SLTI;
          end
          3'b011 : begin
            io_operation = OpCode_SLTIU;
          end
          3'b100 : begin
            io_operation = OpCode_XORI;
          end
          3'b101 : begin
            if(when_Decode_l45) begin
              io_operation = OpCode_SRLI;
            end else begin
              io_operation = OpCode_SRAI;
            end
          end
          3'b110 : begin
            io_operation = OpCode_ORI;
          end
          default : begin
            io_operation = OpCode_ANDI;
          end
        endcase
      end
      7'h67 : begin
        io_operation = OpCode_JALR;
      end
      7'h17 : begin
        io_operation = OpCode_AUIPC;
      end
      7'h37 : begin
        io_operation = OpCode_LUI;
      end
      7'h23 : begin
        case(decodeInstrBits_funct3)
          3'b000 : begin
            io_operation = OpCode_SB;
          end
          3'b001 : begin
            io_operation = OpCode_SH;
          end
          3'b010 : begin
            io_operation = OpCode_SW;
          end
          default : begin
          end
        endcase
      end
      7'h33 : begin
        case(decodeInstrBits_funct3)
          3'b000 : begin
            case(decodeInstrBits_funct7)
              7'h00 : begin
                io_operation = OpCode_ADD;
              end
              7'h20 : begin
                io_operation = OpCode_SUB;
              end
              default : begin
              end
            endcase
          end
          3'b001 : begin
            io_operation = OpCode_SLL_1;
          end
          3'b010 : begin
            io_operation = OpCode_SLT;
          end
          3'b011 : begin
            io_operation = OpCode_SLTU;
          end
          3'b100 : begin
            io_operation = OpCode_XOR_1;
          end
          3'b101 : begin
            case(decodeInstrBits_funct7)
              7'h00 : begin
                io_operation = OpCode_SRL_1;
              end
              7'h20 : begin
                io_operation = OpCode_SRA_1;
              end
              default : begin
              end
            endcase
          end
          3'b110 : begin
            io_operation = OpCode_OR_1;
          end
          default : begin
            io_operation = OpCode_AND_1;
          end
        endcase
      end
      7'h63 : begin
        case(decodeInstrBits_funct3)
          3'b000 : begin
            io_operation = OpCode_BEQ;
          end
          3'b001 : begin
            io_operation = OpCode_BNE;
          end
          3'b100 : begin
            io_operation = OpCode_BLT;
          end
          3'b101 : begin
            io_operation = OpCode_BGE;
          end
          3'b110 : begin
            io_operation = OpCode_BLTU;
          end
          3'b111 : begin
            io_operation = OpCode_BGEU;
          end
          default : begin
          end
        endcase
      end
      7'h6f : begin
        io_operation = OpCode_JAL;
      end
      default : begin
        io_operation = OpCode_NOOP;
      end
    endcase
  end

  always @(*) begin
    io_outInstrFormat = InstrFormat_UNDEF;
    case(decodeInstrBits_opcode)
      7'h03 : begin
        io_outInstrFormat = InstrFormat_I;
      end
      7'h13 : begin
        io_outInstrFormat = InstrFormat_I;
      end
      7'h67 : begin
        io_outInstrFormat = InstrFormat_I;
      end
      7'h17 : begin
        io_outInstrFormat = InstrFormat_U;
      end
      7'h37 : begin
        io_outInstrFormat = InstrFormat_U;
      end
      7'h23 : begin
        io_outInstrFormat = InstrFormat_S;
      end
      7'h33 : begin
        io_outInstrFormat = InstrFormat_R;
      end
      7'h63 : begin
        io_outInstrFormat = InstrFormat_B;
      end
      7'h6f : begin
        io_outInstrFormat = InstrFormat_J;
      end
      default : begin
      end
    endcase
  end

  assign decodeInstrBits_opcode = io_instr[6 : 0];
  assign decodeInstrBits_funct3 = io_instr[14 : 12];
  assign decodeInstrBits_funct7 = io_instr[31 : 25];
  assign when_Decode_l45 = (decodeInstrBits_funct7 == 7'h00);

endmodule

module ALU (
  input      [31:0]   io_SrcA /* verilator public */ ,
  input      [31:0]   io_SrcB /* verilator public */ ,
  input      [2:0]    io_ALUControl,
  output reg [31:0]   io_ALUResult,
  output reg          io_zero
);

  wire       [0:0]    _zz_io_ALUResult;
  wire       [31:0]   _zz_io_ALUResult_1;
  wire       [31:0]   _zz_io_ALUResult_2;
  wire                when_ALU_l15;
  wire                when_ALU_l37;

  assign _zz_io_ALUResult = 1'b0;
  assign _zz_io_ALUResult_1 = ($signed(io_SrcA) + $signed(io_SrcB));
  assign _zz_io_ALUResult_2 = ($signed(io_SrcA) - $signed(io_SrcB));
  always @(*) begin
    io_ALUResult = {31'd0, _zz_io_ALUResult};
    case(io_ALUControl)
      3'b000 : begin
        io_ALUResult = _zz_io_ALUResult_1;
      end
      3'b001 : begin
        io_ALUResult = _zz_io_ALUResult_2;
      end
      3'b111 : begin
        io_ALUResult = (io_SrcA & io_SrcB);
      end
      3'b110 : begin
        io_ALUResult = (io_SrcA | io_SrcB);
      end
      3'b010 : begin
        if(when_ALU_l37) begin
          io_ALUResult = 32'h00000001;
        end else begin
          io_ALUResult = 32'h00000000;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_zero = 1'b0;
    if(when_ALU_l15) begin
      io_zero = 1'b1;
    end
  end

  assign when_ALU_l15 = (io_ALUResult == 32'h00000000);
  assign when_ALU_l37 = ($signed(io_SrcA) < $signed(io_SrcB));

endmodule

module RegFile (
  input               io_writeEnable3,
  input      [4:0]    io_readAddress1,
  input      [4:0]    io_readAddress2,
  output     [31:0]   io_readData1 /* verilator public */ ,
  output     [31:0]   io_readData2 /* verilator public */ ,
  input      [4:0]    io_writeAddress3,
  input      [31:0]   io_writeData3,
  input               clk,
  input               reset
);

  wire       [31:0]   _zz_regFile_1_port1;
  wire       [31:0]   _zz_regFile_1_port2;
  (* ram_style = "distributed" *) reg [31:0] regFile_1 [0:31] /* verilator public */ ;

  initial begin
    $readmemb("/home/mahir/fun/spinalhdl/Digital-Design/rvss/tmp/job_1/RVSS.v_toplevel_datapath_1_datapathDecode_1_regFile_1_regFile_1.bin",regFile_1);
  end
  always @(posedge clk) begin
    if(io_writeEnable3) begin
      regFile_1[io_writeAddress3] <= io_writeData3;
    end
  end

  assign _zz_regFile_1_port1 = regFile_1[io_readAddress1];
  assign _zz_regFile_1_port2 = regFile_1[io_readAddress2];
  assign io_readData1 = _zz_regFile_1_port1;
  assign io_readData2 = _zz_regFile_1_port2;

endmodule
