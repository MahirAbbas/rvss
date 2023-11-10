package rvss

import spinal.core._
import spinal.lib._

case class Extend() extends Component {
    val input = in SInt(25 bits)
    val output = out SInt(32 bits)
    val immSrc = in Bool()
    
    when (immSrc) {
        
    } otherwise {

    }

}

case class Datapath() extends Component {

    val regFile = new RegFile()
    val extend = new Extend()
    val alu = new ALU()
    val instrMemory = Reg(Bits(32 bits))
    val dataMemory = new DataMemory()

    regFile.io.readAddress1 := instrMemory(19 downto 15).asUInt
    regFile.io.readAddress2 := instrMemory(24 downto 20).asUInt
    
    extend.input := instrMemory(31 downto 20).resized.asSInt

    // add ALUControl
    alu.io.SrcA := regFile.io.readData1.asSInt
    //mux source ? if 1 rd2 else rd1
    alu.io.SrcB := extend.output
    
    dataMemory.io.address := alu.io.ALUResult
    regFile.io.writeAddress3 := instrMemory(11 downto 7).asUInt
    regFile.io.writeData3 := dataMemory.io.readData.asBits
    

}



object DatapathVerilog extends App {
    Config.spinal.generateVerilog(Datapath())
}