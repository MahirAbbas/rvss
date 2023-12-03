package rvss

import spinal.core._
import spinal.core.sim._
import spinal.lib._

case class Extend() extends Component {
    val input = in SInt(25 bits)
    val output = out SInt(32 bits)
    val immSrc = in Bool()
    

}

case class Datapath() extends Component {
    val io = new Bundle {
        val instruction = in Bits(32 bits)
        val op = in(OpCode())
        // val iformat = in(InstrFormat())
    }

    val regFile = new RegFile() 
    // val extend = new Extend()
    val alu = new ALU()
    // val instrMemory = Reg(Bits(32 bits))
    val dataMemory = new DataMemory()

    
    // val rd = io.instruction(11 downto 7)
    // val rs1 = io.instruction(19 downto 15)
    // val rs2 = io.instruction(24 downto 20)
    // 
    regFile.io.writeEnable3 := Bool(false)

    alu.io.ALUControl := U"000"
    alu.io.SrcA := S"0".resize(32)
    alu.io.SrcB := S"0".resize(32)
    regFile.io.readAddress1 := U"00000"
    regFile.io.readAddress2 := U"00000"
    dataMemory.io.writeEnable := Bool(false)
    dataMemory.io.writeData := S"0".resized
    // dataMemory.io.readData := S"0".resized
    
    dataMemory.io.address := S"0".resize(8)
    regFile.io.writeData3 := B"0".resize(32)
    regFile.io.writeAddress3 := U"0".resize(5)

    // val i_imm = io.instruction(31 downto 20) 
    val s_imm = io.instruction(31 downto 25) ## io.instruction(11 downto 7)
    val b_imm = io.instruction(31) ## io.instruction(7) ## io.instruction(30 downto 25) ## io.instruction(11 downto 8) ## B("0")
    val u_imm = io.instruction(31 downto 12)
    val j_imm = io.instruction(31) ## io.instruction(19 downto 12) ## io.instruction(20) ## io.instruction(30 downto 21) ## B("0")


    val controlUnit = new Area {
        
    }


    val loadData = new Area {
        // FIX: TODO: MIGHT BE INCORRECT
        when(io.op === OpCode.LW) {
            val rd = io.instruction(11 downto 7)
            val rs1 = io.instruction(19 downto 15)
            regFile.io.readAddress1 := rs1.asUInt
            alu.io.ALUControl := U"000"
            alu.io.SrcA := regFile.io.readData1.asSInt
            alu.io.SrcB := io.instruction(31 downto 20).resize(32).asSInt
            dataMemory.io.address := alu.io.ALUResult.asSInt.resize(8)
            regFile.io.writeData3 := dataMemory.io.readData.asBits
            regFile.io.writeAddress3 := io.instruction(11 downto 7).asUInt
            regFile.io.writeEnable3 := Bool(true)
        }
        
    }
    
    val storeData = new Area {
        when (io.op === OpCode.SW) {
            regFile.io.readAddress1 := io.instruction(19 downto 15).asUInt
            regFile.io.readAddress2 := io.instruction(24 downto 20).asUInt
            alu.io.SrcA := regFile.io.readData1.asSInt
            alu.io.SrcB := s_imm.resize(32).asSInt
            alu.io.ALUControl := U"000"
            dataMemory.io.address := alu.io.ALUResult.asSInt.resized
            dataMemory.io.writeData := regFile.io.readData2.asSInt
            dataMemory.io.writeEnable := Bool(true)
            
        }


    }
    // val registerInstr = new Area {
    // }

    val ALUImmediate = new Area {
        when (io.op === OpCode.ADDI) {
            regFile.io.readAddress1 := io.instruction(19 downto 15).asUInt            
            regFile.io.writeAddress3 := io.instruction(11 downto 7).asUInt
            alu.io.ALUControl := U"000"
            alu.io.SrcA := regFile.io.readData1.asSInt
            alu.io.SrcB := io.instruction(31 downto 20).asSInt.resize(32)
            regFile.io.writeData3 := alu.io.ALUResult.asBits
            regFile.io.writeEnable3 := Bool(true)
        }
        
    }
    
    val registerALU = new Area {
        when (io.op === OpCode.OR) {
            regFile.io.readAddress1 := io.instruction(19 downto 15).asUInt            
            regFile.io.readAddress2 := io.instruction(24 downto 20).asUInt            
            regFile.io.writeAddress3 := io.instruction(11 downto 7).asUInt
            alu.io.ALUControl := U"110"
            alu.io.SrcA := regFile.io.readData1.asSInt
            alu.io.SrcB := regFile.io.readData2.asSInt
            regFile.io.writeData3 := alu.io.ALUResult.asBits
            regFile.io.writeEnable3 := Bool(true)
        }
        when(io.op === OpCode.AND) {
            regFile.io.readAddress1 := io.instruction(19 downto 15).asUInt            
            regFile.io.readAddress2 := io.instruction(24 downto 20).asUInt            
            regFile.io.writeAddress3 := io.instruction(11 downto 7).asUInt
            alu.io.ALUControl := U"111"
            alu.io.SrcA := regFile.io.readData1.asSInt
            alu.io.SrcB := regFile.io.readData2.asSInt
            regFile.io.writeData3 := alu.io.ALUResult.asBits
            regFile.io.writeEnable3 := Bool(true)
        }
        when(io.op === OpCode.ADD) {
            regFile.io.readAddress1 := io.instruction(19 downto 15).asUInt            
            regFile.io.readAddress2 := io.instruction(24 downto 20).asUInt            
            regFile.io.writeAddress3 := io.instruction(11 downto 7).asUInt
            alu.io.ALUControl := U"000"
            alu.io.SrcA := regFile.io.readData1.asSInt
            alu.io.SrcB := regFile.io.readData2.asSInt
            regFile.io.writeData3 := alu.io.ALUResult.asBits
            regFile.io.writeEnable3 := Bool(true)
        }
    }
    
    val branch = new Area {
        
    }
    
    val jump = new Area {
        
    }
    
    
    // regFile.io.readAddress1 := instrMemory(19 downto 15).asUInt
    // regFile.io.readAddress2 := instrMemory(24 downto 20).asUInt
    
    // extend.input := instrMemory(31 downto 20).resized.asSInt

    // add ALUControl
    // alu.io.SrcA := regFile.io.readData1.asSInt
    //mux source ? if 1 rd2 else rd1
    // alu.io.SrcB := extend.output
    
    // dataMemory.io.address := alu.io.ALUResult
    // regFile.io.writeAddress3 := instrMemory(11 downto 7).asUInt
    // regFile.io.writeData3 := dataMemory.io.readData.asBits
    

}


