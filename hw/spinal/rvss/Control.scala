package rvss

import spinal.core._


import OpCode._
import spinal.lib.bus.bmb.Bmb


case class Control() extends Component {
    val io = new Bundle {
        val ALUSrc = out Bool()
        val ALUControl = out UInt(3 bits)
        val memWrite = out Bool()
        val resultSrc = out Bool()
        val instrucion = in Bits(32 bits)
        val regWrite = out Bool()
        val immItype = out(InstrFormat())
    }

    val decode = new Decode()
    decode.io.instr := io.instrucion
    when(decode.io.outInstrFormat === InstrFormat.R) {
        io.ALUSrc := False
        io.regWrite := True
        
    }
    when(decode.io.outInstrFormat === InstrFormat.I) {
        io.ALUSrc := True
        io.regWrite := True
    }
    when(decode.io.outInstrFormat === InstrFormat.S) {
        io.ALUSrc := False
        io.memWrite:= True
    }
    when(decode.io.outInstrFormat === InstrFormat.B) {
        io.ALUSrc := False
    }
    when(decode.io.outInstrFormat === InstrFormat.U) {
        io.ALUSrc := True
        io.regWrite := True
    }
    when(decode.io.outInstrFormat === InstrFormat.J) {
        io.ALUSrc := True
        io.regWrite := True
    }

    switch(decode.io.operation){
        is(OpCode.LW, OpCode.SW){
            io.ALUControl := U"000"
            io.regWrite := True
        }
        is(OpCode.BEQ) {
            io.ALUControl := U"001"
        }
        is(OpCode.ADD){ 
            io.ALUControl := U"000"
        }
        is(OpCode.SUB){
            io.ALUControl := U"001"
        }
        is(OpCode.SLT){
            io.ALUControl := U"010"
        }
        is(OpCode.OR){
            io.ALUControl := U"110"
        }
        is(OpCode.AND){
            io.ALUControl := U"111"
        }
    }
    
}