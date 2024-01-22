package rvss.Decode

import spinal.core._
// import OpCode._
import spinal.core.sim._
import spinal.lib.misc.pipeline._
import rvss.riscv.{Riscv,OpCodes,Rv32IDecode,AluOps}

object Decode extends AreaObject {
    val REGWRITE   = Payload()
    val RESULTSRC  = Payload()
    val MEMWRITE   = Payload()
    val JUMP = Payload()
    val BRANCH = Payload()
    val ALUCONTROL = Payload()
    val ALUSRC = Payload()
    val IMMSRC = Payload()
}

case class Decode() extends Area{
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