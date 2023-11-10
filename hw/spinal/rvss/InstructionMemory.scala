package rvss

import spinal.core._
import spinal.lib._

case class InstrMemory() extends Component {
    val io = new Bundle {
        val address = in UInt(32 bits)
        val readData = out Bits(32 bits)
    }
    
    val instrMemory = Mem(SInt(32 bits), 256)
    val counter = Counter(0 to 63)
    
    counter.increment()
    val address = counter.value * 4

    io.address := address
    io.readData := instrMemory.readSync(io.address).asBits
}