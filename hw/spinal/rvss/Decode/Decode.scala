package rvss.Decode

import spinal.core._
// import OpCode._
import spinal.core.sim._
import spinal.lib.misc.pipeline._
import rvss.riscv.{Riscv,OpCodes,Rv32IDecode,AluOps}

object Decode extends AreaObject {
    val REGWRITE   = Payload(Bool())
    val RESULTSRC  = Payload()
    val MEMWRITE   = Payload()
    val JUMP = Payload()
    val BRANCH = Payload()
    val ALUCONTROL = Payload()
    val ALUSRC = Payload()
    val IMMSRC = Payload()
}

case class Decode() extends Area{
    import Decode._
    import Rv32IDecode._
    import rvss.riscv.OpCodes._
    val io = new Bundle {
        val instruction = in Bits(32 bits)
        val operation = out(OpCode()) simPublic()
        val outInstrFormat = out(InstrFormat())
    }
    val register =  Reg(OpCode())
    io.operation := OpCode.NOOP
    io.outInstrFormat := InstrFormat.UNDEF
    
    // DO SOMETHING LIKE THOS
    val instMap = Map(
        ADD -> (Iformat.TypeR, ALU.ADD),
        SUB -> (IFORMAT.TYPER, ALU.SUB)
    )
    switch(io.instruction) {
        is(ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND) {
           val REGWRITE = True 
        }
    }
    
    switch(io.inst) {
        import Inst._
        for((inst, (format, aluop)) <- Inst.instMap) {
            is(inst) {
                val (formatSignal, imm) = format match {
                    case InstrFormat.Rtype => (io.rtype, B(0))
                }
            }
        }
    }
    

    def getOpCode(instruction: MaskedLiteral) : SpinalEnum= {
        instruction match {
            case ADD   => OpCodes.ADD.toSpinalEnum
            case SUB   => "SUB"
            case SLL   => "SLL"
            case SLT   => "SLT"
            case SLTU  => "SLTU"
            case XOR   => "XOR"
            case SRL   => "SRL"
            case SRA   => "SRA"
            case OR    => "OR"
            case AND   => "AND"
            

            case BEQ     => "BEQ"
            case BNE     => "BNE"
            case BLT     => "BLT"
            case BGE     => "BGE"
            case BLTU    => "BLTU"
            case BGEU    => "BGEU"
            case JALR    => "JALR"
            case JAL     => "JAL"
            case LUI     => "LUI"
            case AUIPC   => "AUIPC"
            
            
            case ADDI    => "ADDI"
            case SLLI    => "SLLI"
            case SLTI    => "SLTI"
            case SLTIU   => "SLTIU"
            case XORI    => "XORI"
            case SRLI    => "SRLI"
            case SRAI    => "SRAI"
            case ORI     => "ORI"
            case ANDI    => "ANDI"
            
        }        
    }            
    
    def setCtrlSignals(instruction : MaskedLiteral) = {
        val opcode = getOpCode(instruction)
        switch(opcode) {
            is("ADD")

        }
    }


    
    val decodeInstrBits = new Area{



    }
    
    
}