package rvss

import spinal.core._
import OpCode._



// Hardware definition
case class RVSS() extends Component {
  val io = new Bundle {
    val instruction = in Bits(32 bits)
  }
  val decode = new Decode()
  val datapath = new Datapath()
  
  decode.io.instr := io.instruction
  datapath.io.instruction := decode.io.outInstr
  datapath.io.op := decode.io.operation

}

object RVSSVerilog extends App {
  Config.spinal.generateVerilog(RVSS())
}

// object MyTopLevelVhdl extends App {
//   Config.spinal.generateVhdl(MyTopLevel())
// }

object DatapathVerilog extends App {
  Config.spinal.generateVerilog(Datapath())
}