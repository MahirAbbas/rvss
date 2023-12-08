package rvss


import spinal.core._
import spinal.lib._
import OpCode._
import rvss._


case class RVSS() extends Component {


    val control = new Control()
    val datapath = new Datapath()
    
    control.io.instrucion := datapath.fetch.io.instruction
    datapath.decode.io.writeEnable := control.io.regWrite
    datapath.decode.io.itype := control.io.immItype
    datapath.execute.io.aluSrc := control.io.ALUSrc
    datapath.execute.io.aluControl := control.io.ALUControl
    datapath.memory.io.writeEnable := control.io.memWrite
    datapath.memory.io.resultSrc := control.io.resultSrc
}

object RVSSVerilog extends App {
    Config.spinal.generateVerilog(RVSS())
}