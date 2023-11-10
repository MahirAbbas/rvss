package rvss

import spinal.core._

case class ALU() extends Component {
    val io = new Bundle {
        val SrcA, SrcB = in SInt(32 bits)
        val ALUControl = in UInt(3 bits)
        val ALUResult = out SInt(32 bits)
    }
    
    switch (io.ALUControl){
        is(B"000") {
            io.ALUResult := io.SrcA + io.SrcB
        }
        is(B"001") {
            io.ALUResult := io.SrcA - io.SrcB
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
            when (io.SrcA < io.SrcB) {
                io.ALUResult := 1
            } otherwise {
                io.ALUResult := 0
            }
        }

    }
}