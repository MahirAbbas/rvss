package rvss

import spinal.core._


case class DataMemory() extends Component {
    val io = new Bundle {
        val writeEnable = in Bool()
        val address = in SInt(32 bits)
        val readData = out SInt(32 bits)
        val writeData = in SInt(32 bits)
   } 
    
   val dataMemory = Mem(SInt(32 bits), wordCount = 256)
   
    when(io.writeEnable) {
        
    }
    
    io.readData := dataMemory.readSync(io.address.asUInt)
}