package rvss

import spinal.core._
import spinal.core.sim._
import spinal.lib._
// import OpCode._
import spinal.lib.misc.pipeline._
import Execute._
// import Fetch.Fetch._
import Memory._
import Fetch._
import Decode._
// import DatapathDecode
import Writeback._

// object Datapath extends AreaObject {
//     val INSTRUCTION = Payload(Bits(32 bits))
//     val RD1, RD2 = Payload(SInt(32 bits))
//     val WRITEADDRESS = Payload(UInt(5 bits))
//     val REGISTERDESTINATION = Payload(UInt(5 bits))
//     val IMMEXT = Payload(SInt(32 bits))
//     val PCPLUS4 = Payload(UInt(32 bits))
//     val ALURESULT = Payload(SInt(32 bits))
//     val WRITEDATA = Payload(SInt(32 bits))
//     val ITYPE = Payload(InstrFormat())
//     val ALUSRC = Payload(Bool())
//     val ALUCONTROL = Payload(UInt(3 bits))
//     val MEMWRITE = Payload(Bool())
//     val REGWRITE = Payload(Bool())
//     val RESULTSRC = Payload(UInt(2 bits))


// }

case class Datapath() extends Area{
    import Datapath._
    // import Decode._
    
    val io = new Bundle {
        val PCSrc = in Bool()
        val ResultSrc = in UInt(2 bits)
        val MemWrite = in Bool()
        val ALUControl = in UInt(3 bits)
        val ALUSrc = in Bool()
        val RegWrite = in Bool()
        // val itype = in(InstrFormat())
        val instruction = out Bits(32 bits)
        val zero = out Bool()
    }
    
    // val fetch = new Fetch()
    // val datapathDecode = new  DatapathDecode()
    // val execute = new Execute()
    // val memory = new Memory()
    
    
    // io.zero := execute.io.zero


    // val FETCH, DECODE, EXECUTE, MEMORY = Node()
    
    val FETCH = new Fetch()
    val DECODE = new Decode()
    val EXECUTE = new Execute()
    val MEMORY = new Memory()
    val WRITEBACK = new Writeback()
    
    val s01 = StageLink(FETCH, DECODE)
    val s12 = StageLink(DECODE, EXECUTE)
    val s23 = StageLink(EXECUTE, MEMORY)
    val s34 = StageLink(MEMORY, WRITEBACK)

    Builder(s01,s12,s23,s34)    
    

    // CONNECT ALU TO WD3E
    // CONNECT RD2 to DATAMEMORY
    // 
    import rvss.Decode.Decode._
    import rvss.Execute.Execute._
    import rvss.Memory.Memory._
    import rvss.Fetch.Fetch._

    // DECODE.io.WD3 := RESULTSRC.mux[Bits](
    //     0 -> WRITEBACK(ALURESULT).asBits,
    //     1 -> memory.io.result.asBits,
    //     2 -> (fetch.io.PC ).asBits,
    //     default -> execute.io.aluResult.asBits
    // )
    
    val WritebackStuff = new WRITEBACK.Area {
        DECODE.io.WD3 := RESULTSRC.mux{
        0 -> WRITEBACK(ALURESULT).asBits;
        1 -> READDATA;
        2 -> PCPLUS4.asBits;
        default -> WRITEBACK(ALURESULT).asBits
        }

    }
    
    // val decodestuff = new DECODE.Area {

    // }
    // (io.ResultSrc,memory.io.result.asBits, execute.io.aluResult.asBits)

    

    val PCTarget = UInt(32 bits)
    val branch_immediate = UInt(32 bits)
    // fetch.io.branch := io.PCSrc
    // PCTarget := fetch.io.PC + (datapathDecode.io.extended.asUInt / 4)
    // fetch.io.branchTarget := PCTarget

    
    


}