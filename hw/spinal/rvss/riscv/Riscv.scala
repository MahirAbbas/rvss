package rvss.riscv

import spinal.lib._
import spinal.core._

object Riscv{
  

  def funct7Range = 31 downto 25
  def rdRange = 11 downto 7
  def funct3Range = 14 downto 12
  def rs1Range = 19 downto 15
  def rs2Range = 24 downto 20
  def rs3Range = 31 downto 27
  

  case class IMM(instruction: Bits) extends Area {


    val i = instruction(31 downto 20) 
    val s = instruction(31 downto 25) ## instruction(11 downto 7)
    val b = instruction(31) ## instruction(7) ## instruction(30 downto 25) ## instruction(11 downto 8) ## B("0")
    val u = instruction(31 downto 12)
    val j = instruction(31) ## instruction(19 downto 12) ## instruction(20) ## instruction(30 downto 21) ## B("0")
    


    // sign-extend immediates
    def i_sext = i.asSInt.resize(32)
    def s_sext = s.asSInt.resize(32)
    def b_sext = b.asSInt.resize(32)
    def u_sext = u.asSInt.resize(32)
    def j_sext = j.asSInt.resize(32)

  }
}
object OpCodes extends SpinalEnum{
  
  val BEQ                = M"-----------------000-----1100011"
  val BNE                = M"-----------------001-----1100011"
  val BLT                = M"-----------------100-----1100011"
  val BGE                = M"-----------------101-----1100011"
  val BLTU               = M"-----------------110-----1100011"
  val BGEU               = M"-----------------111-----1100011"
  val JALR               = M"-----------------000-----1100111"
  val JAL                = M"-------------------------1101111" 
  val LUI                = M"-------------------------0110111"
  val AUIPC              = M"-------------------------0010111"

  val ADD                = M"0000000----------000-----0110011"
  val SUB                = M"0100000----------000-----0110011"
  val SLL                = M"0000000----------001-----0110011"
  val SLT                = M"0000000----------010-----0110011"
  val SLTU               = M"0000000----------011-----0110011"
  val XOR                = M"0000000----------100-----0110011"
  val SRL                = M"0000000----------101-----0110011"
  val SRA                = M"0100000----------101-----0110011"
  val OR                 = M"0000000----------110-----0110011"
  val AND                = M"0000000----------111-----0110011"

  val ADDI               = M"-----------------000-----0010011"
  val SLLI               = M"0000000----------001-----0010011"
  val SLTI               = M"-----------------010-----0010011"
  val SLTIU              = M"-----------------011-----0010011"
  val XORI               = M"-----------------100-----0010011"
  val SRLI               = M"0000000----------101-----0010011"
  val SRAI               = M"0100000----------101-----0010011"
  val ORI                = M"-----------------110-----0010011"
  val ANDI               = M"-----------------111-----0010011"

  val LB                 = M"-----------------000-----0000011"
  val LH                 = M"-----------------001-----0000011"
  val LW                 = M"-----------------010-----0000011"
  val LBU                = M"-----------------100-----0000011"
  val LHU                = M"-----------------101-----0000011"
  val SB                 = M"-----------------000-----0100011"
  val SH                 = M"-----------------001-----0100011"
  val SW                 = M"-----------------010-----0100011"
  
  
}

object AluOps extends SpinalEnum{
      val XOR, OR, AND, ADD, SUB, SLT ,NOOP= newElement()
}

object Rv32IDecode{
  import Riscv._
  // import AluOps._
  import OpCodes._
    val table = Array (
    //Decoder Truth table
    //
    //
    //          Regwrite?
    //            |      IMM?
    //            |       |    ALUSRC (Sign extend or Register 2) (False for RD2)
    //            |       |      |    MemWrite
    //            |       |      |      |   ResultSrc ("000" ALU output)
    //            |       |      |      |    |     ALUOP    
    //            |       |      |      |    |      |   Branch  
    //            |       |      |      |    |      |     |    Jump 
    ADD  -> List(True, False, False, False, U"00", AluOps.ADD, False, False),
    SUB  -> List(True, False, False, False, U"00", AluOps.SUB, False, False),
    // SLL -> List(True, False, False, False, U"00", ADD, False, False) 
    SLT  -> List(True, False, False, False, U"00", AluOps.SLT, False, False),
    // SLTU -> List(True, False, False, False, U"00", SLTU, False, False) 
    // XOR  -> List(True, False, False, False, U"00", XOR, False, False) 
    // SRL  -> List(True, False, False, False, U"00", SRL, False, False) 
    // SRA  -> List(True, False, False, False, U"00", SRA, False, False) 
    OR   -> List(True, False, False, False, U"00", AluOps.OR, False, False),
    AND  -> List(True, False, False, False, U"00", AluOps.AND, False, False),
    

    //I Type
    ADDI -> List(True, True ,True , False, U"00", AluOps.ADD, False, False),
    // SLLI -> List(True, True ,True , False, U"00", AND, False, False),
    SLTI -> List(True, True ,True , False, U"00", AluOps.SLT, False, False),
    // SLTIU-> List(True, True ,True , False, U"00", AND, False, False),
    XORI -> List(True, True ,True , False, U"00", AluOps.XOR, False, False),
    // SRLI -> List(True, True ,True , False, U"00", AND, False, False),
    // SRAI -> List(True, True ,True , False, U"00", AND, False, False),
    ORI  -> List(True, True ,True , False, U"00", AluOps.OR, False, False),
    ANDI -> List(True, True ,True , False, U"00", AluOps.AND, False, False),
    
    
    // BEQ   -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // BNE   -> List(True, True ,True , False, U"00", AND, False, False),
    // BLT   -> List(True, True ,True , False, U"00", AND, False, False),
    // BGE   -> List(True, True ,True , False, U"00", AND, False, False),
    // BLTU  -> List(True, True ,True , False, U"00", AND, False, False),
    // BGEU  -> List(True, True ,True , False, U"00", AND, False, False),
    // JALR  -> List(True, True ,True , False, U"00", AND, False, False),
    JAL   -> List(True, True ,True , False, U"00", AluOps.NOOP, False, True),
    // LUI   -> List(True, True ,True , False, U"00", AND, False, False),
    // AUIPC -> List(True, True ,True , False, U"00", AND, False, False),
    // 

    
    // LB    -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // LH    -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // LW    -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // LBU   -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // LHU   -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // SB    -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // SH    -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    // SW    -> List(False , False ,False , False, U"00", AluOps.???, True, False),
    )
    val tableMap = table.toMap

}


case class Riscv() extends Area {
  import Riscv._

  def decode(instruction: Bits) {
    switch(instruction){
      
    }
  }
}