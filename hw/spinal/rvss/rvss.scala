package rvss


import spinal.core._
import spinal.lib._
// import OpCode._
import rvss._
// import Control


case class RVSS() extends Component {
    import Datapath._


    // val control = new Control()
    // val datapath = new Datapath()


}


object RVSSVerilog extends App {
    Config.spinal.generateVerilog(RVSS())
}