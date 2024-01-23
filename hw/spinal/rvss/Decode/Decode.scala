package rvss.Decode

import spinal.core._
// import OpCode._
import spinal.core.sim._
import spinal.lib.misc.pipeline._
import rvss.riscv.{Riscv,OpCodes,Rv32IDecode,AluOps}

object Decode extends Node{
    val REGWRITE   = Payload(Bool())
    val RESULTSRC  = Payload(UInt(3 bits))
    val MEMWRITE   = Payload(Bool())
    val JUMP = Payload(Bool())
    val BRANCH = Payload(Bool())
    val ALUCONTROL = Payload(UInt(3 bits))
    val ALUSRC = Payload(Bool())
    // val IMMSRC = Payload()
    val EXTENDED = Payload(SInt(32 bits))
    val RD1, RD2 = Payload(Bits(32 bits))
    val RD = Payload(UInt(5 bits))
}

case class Decode() extends Area{
    import Decode._
    import Rv32IDecode._
    import rvss.riscv.OpCodes._
    import Riscv._
    
    
    val io = new Bundle {
        val instruction = in Bits(32 bits)
    }
    
    val registerControl = new Area {
        val registers = new RegFile()
        registers.io.readAddress1 := extended.rs1Range.asUInt
        registers.io.readAddress2 := extended.rs2Range.asUInt
        RD1 := registers.io.readData1
        RD2 := registers.io.readData2

    }
     


    val extended = IMM(io.instruction)
    
    switch(io.instruction) {
        is(ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND) {
           REGWRITE := True 
           ALUSRC := False
           MEMWRITE := False
           RESULTSRC := U"00"
           BRANCH := False
           // DO ALU OPs

        }
        is(ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI,SRAI ) {
           REGWRITE := True 
           ALUSRC := True
           MEMWRITE := False
           RESULTSRC := U"00"
           BRANCH := False
           EXTENDED := extended.i_sext
        }
        is(LW) {
           REGWRITE := True 
           ALUSRC := True
           MEMWRITE := False
           RESULTSRC := U"01"
           BRANCH := False
           EXTENDED := extended.i_sext
        }
        is(SW) {
           REGWRITE := False
           ALUSRC := True
           MEMWRITE := True
           RESULTSRC := U"00"
           BRANCH := False
           EXTENDED := extended.s_sext
        }
        is(BEQ) {
           REGWRITE := False
           ALUSRC := False
           MEMWRITE := False
           RESULTSRC := U"00"
           BRANCH := True
           EXTENDED := extended.b_sext
        }
        is(JAL) {
           REGWRITE := True
           ALUSRC := True
           MEMWRITE := False
           RESULTSRC := U"10"
           BRANCH := True
           EXTENDED := extended.b_sext
        }
    }

    
}