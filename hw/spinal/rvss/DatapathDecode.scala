package rvss

import spinal.core._
import Decode.RegFile


class DatapathDecode() extends Component{
    val io = new Bundle {
        val instr = in Bits(32 bits)
        val writeEnable = in Bool()
        val itype = in(InstrFormat())
        val extended = out SInt(32 bits)
        val RD1E = out SInt(32 bits)
        val RD2E = out SInt(32 bits)
        val WD3E = in Bits(32 bits)
    }
    io.extended := S"0".resize(32)
    val regFile = new RegFile() 
    regFile.io.readAddress1 := io.instr(19 downto 15).asUInt
    regFile.io.readAddress2 := io.instr(24 downto 20).asUInt
    regFile.io.writeAddress3 := io.instr(11 downto 7).asUInt
    io.RD1E := regFile.io.readData1.asSInt
    io.RD2E := regFile.io.readData2.asSInt
    regFile.io.writeData3 := io.WD3E
    regFile.io.writeEnable3 := io.writeEnable
    
    val i_imm = io.instr(31 downto 20) 
    val s_imm = io.instr(31 downto 25) ## io.instr(11 downto 7)
    val b_imm = io.instr(31) ## io.instr(7) ## io.instr(30 downto 25) ## io.instr(11 downto 8) ## B("0")
    val u_imm = io.instr(31 downto 12)
    val j_imm = io.instr(31) ## io.instr(19 downto 12) ## io.instr(20) ## io.instr(30 downto 21) ## B("0")
    
    switch(io.itype) {
        is(InstrFormat.I) {
            io.extended := i_imm.asSInt.resize(32)
        }
        is(InstrFormat.S) {
            io.extended := s_imm.asSInt.resize(32)
        }
        is(InstrFormat.B) {
            io.extended := b_imm.asSInt.resize(32)
        }
        is(InstrFormat.U) {
            io.extended := u_imm.asSInt.resize(32)
        }
        is(InstrFormat.J) {
            io.extended := j_imm.asSInt.resize(32)
        }
    }
}