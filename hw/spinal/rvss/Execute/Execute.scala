package rvss.Execute

import spinal.core._
import rvss.Execute.ALU._
import rvss.Decode._
import spinal.lib.misc.pipeline._

object Execute extends Node {
    val ALURESULT = Payload(SInt(32 bits))
    val WRITEDATA = Payload(Bits(32 bits))
    val PCTARGET = UInt(32 bits)
}

class Execute() extends Node{
    import rvss.Decode.Decode._
    import Execute._

    val io = new Bundle {
        val RD1E = in SInt(32 bits)
        val RD2E = in SInt(32 bits)
        val immExt = in SInt(32 bits)
        val aluSrc = in Bool()
        val aluControl = in UInt(3 bits)
        val RD2WriteData = out Bits(32 bits)
        val aluResult = out SInt(32 bits)
        val zero = out Bool()
    }
    val alu = new ALU()


    alu.io.SrcA := RD1.asSInt

    alu.io.SrcB := Mux[SInt](ALUSRC, EXTENDED , RD2.asSInt)
    alu.io.ALUControl := ALUCONTROL
    ALURESULT := alu.io.ALUResult.asSInt
    WRITEDATA := RD2
    
    // PCTARGET := EXTENDED + PC
    
    io.zero := alu.io.zero
        // DO BRANCH LOGIC
        // PCTARGET
        // 
        
    }