package rvss

import spinal.core._

case class ALU() extends Component {
    val io = new Bundle {
        val SrcA, SrcB = in Bits(32 bits)
        val ALUControl = in UInt(3 bits)
        val ALUResult = out Bits(32 bits)
    }
    
    switch (io.ALUControl){
        is(B"000") {
            io.ALUResult:= (io.SrcA.asSInt + io.SrcB.asSInt).asBits
        }
        is(B"001") {
            io.ALUResult := (io.SrcA.asSInt - io.SrcB.asSInt).asBits
        }
        // AND
        is(B"010") {
            io.ALUResult := io.SrcA & io.SrcB
        }
        // OR
        is(B"011") {
            io.ALUResult := io.SrcA | io.SrcB
        }
        // Set Less Than 
        is(B"011") {
            when (io.SrcA.asSInt < io.SrcB.asSInt) {
                io.ALUResult := 1
            } otherwise {
                io.ALUResult := 0
            }
        }

    }
}