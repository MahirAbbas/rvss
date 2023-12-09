package rvss


import spinal.core._
import spinal.lib._
import OpCode._
import rvss._


case class RVSS() extends Component {


    val control = new Control()
    val datapath = new Datapath()

    control.io.instrucion := datapath.io.instruction
    datapath.io.itype := control.io.immItype
    datapath.io.PCSrc := control.io.PCSrc
    datapath.io.ResultSrc := control.io.resultSrc
    datapath.io.MemWrite := control.io.memWrite
    datapath.io.ALUControl := control.io.ALUControl
    datapath.io.ALUSrc := control.io.ALUSrc
    datapath.io.RegWrite := control.io.regWrite

}


object RVSSVerilog extends App {
    Config.spinal.generateVerilog(RVSS())
}