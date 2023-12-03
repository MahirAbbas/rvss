package rvss

import spinal.core._


case class Control() extends Component {
    val io = new Bundle {
        val op = in(OpCode())
        val ALUSrc = out Bool()
        val ALUControl = out UInt(3 bits)
        val dataMemoryWriteEnable = Bool()
        val resultSrc = out Bool()
    }
    
}