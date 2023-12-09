package rvss

import spinal.core._
import spinal.lib._
import spinal.core.sim._


class Fetch() extends Component{
    val io = new Bundle {
        val branch = in Bool() 
        val branchTarget = in UInt(32 bits)
        val instruction = out Bits(32 bits)
    }
    val instructionMemory = Mem(Bits(32 bits), 256) simPublic()
    val programCounter = Reg(UInt(32 bits)) init(0)
    val PCNext = UInt(32 bits)
    val PCPlus4 = programCounter + 4
    PCNext := Mux(io.branch : Bool, io.branchTarget, PCPlus4) 
    programCounter := PCNext
    io.instruction := instructionMemory.readSync(programCounter(31 downto 0).resize(8))

}