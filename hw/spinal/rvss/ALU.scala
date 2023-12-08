package rvss

import spinal.core._
import spinal.core.sim._

case class ALU() extends Component {
    val io = new Bundle {
        val SrcA, SrcB = in SInt(32 bits) simPublic()
        val ALUControl = in UInt(3 bits)
        val ALUResult = out Bits(32 bits)
    }
    io.ALUResult := B"0".resize(32)
    
    switch (io.ALUControl){
        // ADD
        is(U"000") {
            io.ALUResult:= (io.SrcA+ io.SrcB).asBits
        }
        // SUB
        is(U"001") {
            io.ALUResult := (io.SrcA- io.SrcB).asBits
        }
        // AND
        is(U"010") {
            io.ALUResult := io.SrcA.asBits & io.SrcB.asBits
        }
        // OR
        is(U"011") {
            io.ALUResult := io.SrcA.asBits | io.SrcB.asBits
        }
        // Set Less Than 
        is(U"101") {
            when (io.SrcA< io.SrcB) {
                io.ALUResult := 1
            } otherwise {
                io.ALUResult := 0
            }
        }

    }
}