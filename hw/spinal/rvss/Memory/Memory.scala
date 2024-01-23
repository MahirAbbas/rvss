package rvss.Memory

import spinal.core._
import spinal.lib._
import spinal.core.sim._
import spinal.lib.misc.pipeline._

import rvss.Decode.Decode._
import rvss.Execute.Execute._

object Memory extends Node {
    val READDATA = Payload(Bits(32 bits))
}

case class Memory() extends Node{
    import rvss.Memory.Memory._
    val io = new Bundle {
        // val aluResult = in port SInt(32 bits)
        // val writeData = in port SInt(32 bits)
        // val result = out port SInt(32 bits)
        // val resultSrc = in port Bool()
        // val rd = out port UInt(5 bits)
    }
    // io.result := S"0".resized
    //
    val dataMemory = Mem(SInt(32 bits), 256).init(Seq.fill(256)(S(0,32 bits))) simPublic()
    when(MEMWRITE) {
        dataMemory.write(ALURESULT.asUInt.resize(8), WRITEDATA.asSInt)
    }

    READDATA := dataMemory.readAsync(ALURESULT.asUInt.resize(8)).asBits

}