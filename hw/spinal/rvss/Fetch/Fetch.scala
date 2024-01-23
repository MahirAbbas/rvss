package rvss.Fetch

import spinal.core._
import spinal.lib._
import spinal.core.sim._
import spinal.lib.misc.pipeline._


class Fetch() extends Node{
    val io = new Bundle {
        val branch = in Bool() 
        val branchTarget = in UInt(32 bits)
        val instruction = out Bits(32 bits) simPublic()
        val PC = out UInt(32 bits)
    }
    val instructionMemory = Mem(Bits(32 bits), 256).init(Seq.fill(256)(B(0,32 bits))) simPublic()
    
    
    val programCounter = Reg(UInt(32 bits)) init(0)
    val PCNext = UInt(32 bits)
    val PCPlus4 = UInt(32 bits)
    PCPlus4 := programCounter + 1
    PCNext := Mux(io.branch : Bool, io.branchTarget, PCPlus4) 
    when(io.branch){
        
        PCPlus4 := io.branchTarget
    }
    programCounter := PCNext
    io.instruction := instructionMemory.readAsync(programCounter(31 downto 0).resize(8))
    io.PC := programCounter

}