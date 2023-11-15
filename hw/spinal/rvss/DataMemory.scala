package rvss

import spinal.core._


case class DataMemory() extends Component {
    val io = new Bundle {
        val writeEnable = in Bool()
        val address = in SInt(8 bits)
        val readData = out SInt(32 bits)
        val writeData = in SInt(32 bits)
   } 
    
   val dataMemory = Mem(SInt(32 bits), wordCount = 256)
   io.readData := S"0".resized
    when(io.writeEnable) {
        dataMemory.write(io.address.asUInt, io.writeData)
        
    }
    when(!io.writeEnable) {
        io.readData := dataMemory.readSync(io.address.asUInt)
    }
}