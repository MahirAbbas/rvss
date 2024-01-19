package rvss

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import OpCode._

case class Datapath() extends Component {
    
    val io = new Bundle {
        val PCSrc = in Bool()
        val ResultSrc = in UInt(2 bits)
        val MemWrite = in Bool()
        val ALUControl = in UInt(3 bits)
        val ALUSrc = in Bool()
        val RegWrite = in Bool()
        val itype = in(InstrFormat())
        val instruction = out Bits(32 bits)
        val zero = out Bool()
    }
    
    val fetch = new Fetch()
    val datapathDecode = new  DatapathDecode()
    val execute = new Execute()
    val memory = new Memory()
    
    
    io.zero := execute.io.zero

    //*****************************************
    //Connect Fetch to Decode
    datapathDecode.io.instr := fetch.io.instruction
    io.instruction := fetch.io.instruction
    datapathDecode.io.itype := io.itype
    datapathDecode.io.writeEnable := io.RegWrite


    //*****************************************
    //Connect Decode to Execute
    //
    execute.io.RD1E := datapathDecode.io.RD1E
    execute.io.RD2E := datapathDecode.io.RD2E
    execute.io.immExt := datapathDecode.io.extended
    execute.io.aluSrc := io.ALUSrc
    execute.io.aluControl := io.ALUControl

    
    //*****************************************
    //Connect Execute to DataMemory
    memory.io.memWrite:= io.MemWrite

    // memory.io.resultSrc := memoryResultSrc
    memory.io.aluResult := execute.io.aluResult
    memory.io.writeData := execute.io.RD2E

    

    // CONNECT ALU TO WD3E
    // CONNECT RD2 to DATAMEMORY
    // memory.io.writeData := execute.io.RD2E
    datapathDecode.io.WD3E := io.ResultSrc.mux(
        0 -> execute.io.aluResult.asBits,
        1 -> memory.io.result.asBits,
        2 -> (fetch.io.PC ).asBits,
        default -> execute.io.aluResult.asBits
    )
    // (io.ResultSrc,memory.io.result.asBits, execute.io.aluResult.asBits)

    

    // CONNECT FETCH TO BRANCH TARGET
    // 
    val PCTarget = UInt(32 bits)
    val branch_immediate = UInt(32 bits)
    fetch.io.branch := io.PCSrc
    PCTarget := fetch.io.PC + (datapathDecode.io.extended.asUInt / 4)
    fetch.io.branchTarget := PCTarget

    
    

    // val instructionBridge = Bits(32 bits)
    // instructionBridge := fetch.io.instruction
    // datapathDecode.io.instr := instructionBridge

}