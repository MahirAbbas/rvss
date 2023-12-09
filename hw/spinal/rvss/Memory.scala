package rvss

import spinal.core._
import spinal.lib._
import spinal.core.sim._



case class Memory() extends Component {
    val io = new Bundle {
        val aluResult = in SInt(32 bits)
        val writeData = in SInt(32 bits)
        val result = out SInt(32 bits)
        val writeEnable = in Bool()
        val resultSrc = in Bool()
    }
    io.result := S"0".resized
    //
    val dataMemory = Mem(SInt(32 bits), 256) simPublic()
    when(io.writeEnable) {
        dataMemory.write(io.aluResult.asUInt.resize(8), io.writeData)
    }
    when(!io.writeEnable) {
        io.result := Mux(io.resultSrc, io.aluResult, dataMemory.readSync(io.aluResult.asUInt.resize(8))) 
    }

}