package rvss

import spinal.core._
import Execute.ALU

class Execute() extends Component{
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
    alu.io.SrcA := io.RD1E
    alu.io.SrcB := Mux(io.aluSrc, io.immExt, io.RD2E)
    alu.io.ALUControl := io.aluControl
    io.aluResult := alu.io.ALUResult.asSInt
    io.RD2WriteData := io.RD2E.asBits
    io.zero := alu.io.zero
        // DO BRANCH LOGIC
        // PCTARGET
        // 
        
    }