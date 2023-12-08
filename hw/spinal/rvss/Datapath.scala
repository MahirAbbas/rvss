package rvss

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import OpCode._


case class Extend() extends Component {
    val input = in SInt(25 bits)
    val output = out SInt(32 bits)
    val immSrc = in Bool()
    

}

case class Datapath() extends Component {
    
    val fetch = new Area {
        val io = new Bundle {
            val branch = Bool() 
            val branchTarget = UInt(32 bits)
            val instruction = out Bits(32 bits)
        }
        val instructionMemory = Mem(Bits(32 bits), 256)
        val programCounter = Reg(UInt(32 bits)) init(0)
        programCounter := Mux(io.branch : Bool, io.branchTarget, programCounter + 4) 
        io.instruction := instructionMemory.readSync(programCounter(31 downto 0).resize(8))

    }

         
    val decode = new Area {
        val io = new Bundle {
            val instr = in Bits(32 bits)
            val writeEnable = in Bool()
            val itype = in(InstrFormat())
            val extended = out SInt(32 bits)
        }
        val regFile = new RegFile() 
        regFile.io.readAddress1 := io.instr(19 downto 15).asUInt
        regFile.io.readAddress2 := io.instr(24 downto 20).asUInt
        regFile.io.writeAddress3 := io.instr(11 downto 7).asUInt
        
        val i_imm = io.instr(31 downto 20) 
        val s_imm = io.instr(31 downto 25) ## io.instr(11 downto 7)
        val b_imm = io.instr(31) ## io.instr(7) ## io.instr(30 downto 25) ## io.instr(11 downto 8) ## B("0")
        val u_imm = io.instr(31 downto 12)
        val j_imm = io.instr(31) ## io.instr(19 downto 12) ## io.instr(20) ## io.instr(30 downto 21) ## B("0")
        
        switch(io.itype) {
            is(InstrFormat.I) {
                io.extended := i_imm.asSInt.resize(32)
            }
            is(InstrFormat.S) {
                io.extended := s_imm.asSInt.resize(32)
            }
            is(InstrFormat.B) {
                io.extended := b_imm.asSInt.resize(32)
            }
            is(InstrFormat.U) {
                io.extended := u_imm.asSInt.resize(32)
            }
            is(InstrFormat.J) {
                io.extended := j_imm.asSInt.resize(32)
            }
        }
    }
    
    val execute = new Area {
        val io = new Bundle {
            val RD1E = in SInt(32 bits)
            val RD2E = in SInt(32 bits)
            val immExt = in SInt(32 bits)
            val aluSrc = in Bool()
            val aluControl = in UInt(3 bits)
            val RD2WriteData = out Bits(32 bits)
            val aluResult = out SInt(32 bits)
        }
        val alu = new ALU()
        alu.io.SrcA := io.RD1E
        alu.io.SrcB := Mux(io.aluSrc, io.immExt, io.RD2E)
        alu.io.ALUControl := io.aluControl
        io.aluResult := alu.io.ALUResult.asSInt
        // DO BRANCH LOGIC
        // PCTARGET
        
    }
    
    val memory = new Area {
        val io = new Bundle {
            val aluResult = in SInt(32 bits)
            val writeData = in SInt(32 bits)
            val result = out SInt(32 bits)
            val writeEnable = in Bool()
            val resultSrc = in Bool()
        }
        val dataMemory = Mem(SInt(32 bits), 256)
        when(io.writeEnable) {
            dataMemory.write(io.aluResult.asUInt, io.writeData)
        }
        when(!io.writeEnable) {
            io.result := Mux(io.resultSrc, io.aluResult, dataMemory.readSync(io.aluResult.asUInt)) 
        }

    }
    
    

    val instructionBridge = Bits(32 bits)
    instructionBridge := fetch.io.instruction
    decode.io.instr := instructionBridge
    // val extend = new Extend()
    val alu = new ALU()
    // val instrMemory = Reg(Bits(32 bits))
    val dataMemory = new DataMemory()

    
    // regFile.io.writeEnable3 := Bool(false)

    // alu.io.ALUControl := U"000"
    // alu.io.SrcA := S"0".resize(32)
    // alu.io.SrcB := S"0".resize(32)
    // regFile.io.readAddress1 := U"00000"
    // regFile.io.readAddress2 := U"00000"
    // dataMemory.io.writeEnable := Bool(false)
    // dataMemory.io.writeData := S"0".resized
    // // dataMemory.io.readData := S"0".resized
    
    // dataMemory.io.address := S"0".resize(8)
    // regFile.io.writeData3 := B"0".resize(32)
    // regFile.io.writeAddress3 := U"0".resize(5)



    val controlUnit = new Area {
        
    }


    
    
    
    

}


