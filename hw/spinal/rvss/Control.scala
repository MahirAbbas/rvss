package rvss

import spinal.core._


import OpCode._
import spinal.lib.bus.bmb.Bmb


case class Control() extends Component {
    val io = new Bundle {
        val instrucion = in Bits(32 bits)
        val PCSrc = out Bool()
        val resultSrc = out Bool()
        val memWrite = out Bool()
        val ALUControl = out UInt(3 bits)
        val ALUSrc = out Bool()
        val immItype = out(InstrFormat())
        val regWrite = out Bool()
        val zero = in Bool()
        
    }

    io.ALUControl := U"000"
    io.ALUSrc := False
    io.memWrite := False
    io.resultSrc := False
    io.regWrite := False
    io.PCSrc := False

    val decode = new Decode()
    decode.io.instr := io.instrucion
    io.immItype := decode.io.outInstrFormat
    when(decode.io.outInstrFormat === InstrFormat.R) {
        io.ALUSrc := False
        io.regWrite := True
        io.memWrite := False
        io.resultSrc := False
        
    }
    when(decode.io.outInstrFormat === InstrFormat.I) {
        io.ALUSrc := True
        io.regWrite := True
        io.memWrite := False
        io.resultSrc := False

    }
    // when(decode.io.outInstrFormat === InstrFormat.S) {
    //     io.ALUSrc := False
    //     io.memWrite:= True
    // }
    // when(decode.io.outInstrFormat === InstrFormat.B) {
    //     io.ALUSrc := False
    // }
    // when(decode.io.outInstrFormat === InstrFormat.U) {
    //     io.ALUSrc := True
    //     io.regWrite := True
    // }
    // when(decode.io.outInstrFormat === InstrFormat.J) {
    //     io.ALUSrc := True
    //     io.regWrite := True
    // }

        when(decode.io.operation === OpCode.LW){
           io.regWrite := True
           io.ALUSrc := True
           io.memWrite := False
           io.resultSrc := True
            
        }
        when(decode.io.operation === OpCode.SW){
            io.regWrite := False
            io.memWrite := True
            io.ALUSrc := True 
            
        }
        when(decode.io.operation === OpCode.BEQ){
            io.regWrite := False
            io.memWrite := False
            io.ALUSrc := False
            io.ALUControl := U"001"
            when(io.zero){
            io.PCSrc := True
            }
        }
        when(decode.io.operation === OpCode.JAL){
            io.regWrite := True
            io.memWrite := False
            // ADD result source fig 7.15
        }

    
    
    val ALUDecode = new Area {
        when(decode.io.operation === OpCode.ADD){
           io.ALUControl := U"000" 
        }
        when(decode.io.operation === OpCode.SUB){
            io.ALUControl := U"001"
        }
        when(decode.io.operation === OpCode.SLT){
            io.ALUControl := U"010"
        }
        when(decode.io.operation === OpCode.OR){
            io.ALUControl := U"110"
        }
        when(decode.io.operation === OpCode.AND){
            io.ALUControl := U"111"
        }
    }
}