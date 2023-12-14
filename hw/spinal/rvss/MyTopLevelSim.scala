package rvss

import spinal.core._
import spinal.core.sim._
import OpCode._

object MyTopLevelSim extends App {
  Config.sim.withWave.compile(new RVSS()).doSim("riscv-test") { dut =>

      val testBenchHex = Seq (
        //MAKE SURE TEST BECNH IS CORRECT
      BigInt("00500113",16),   // addi x2, x0, 5      # x2 = 5
      BigInt("00C00193",16),   // addi x3, x0, 12     # x3 = 12
      BigInt("FF718393",16),   // addi x7, x3, -9     # x7 = (12 - 9) = 3
      BigInt("0023E233",16),   // or x4, x7, x2       # x4 = (3 OR 5) = 7 
      BigInt("0041F2B3",16),   // and x5, x3, x4      # x5 = (12 AND 7) = 4 
      BigInt("004282B3",16),   // add x5, x5, x4      # x5 = 4 + 7 = 11 
      BigInt("02728863",16),   // beq x5, x7, end     # shouldn't be taken 
      BigInt("0041A233",16),   // slt x4, x3, x4      # x4 = (12 < 7) = 0 
      BigInt("00020463",16),   // beq x4, x0, around  # should be taken
      BigInt("00000293",16),   // addi x5, x0, 0      # shouldn't execute
      BigInt("0023A233",16),   // slt x4, x7, x2      # x4 = (3 < 5) = 1          # 10
      BigInt("005203B3",16),   // add x7, x4, x5      # x7 = (1 + 11) = 12
      BigInt("402383B3",16),   // sub x7, x7, x2      # x7 = (12 - 5) = 7 
      BigInt("0471AA23",16),   // sw x7, 84(x3)       # [96] = 7
      BigInt("06002103",16),   // lw x2, 96(x0)       # x2 = [96] = 7 
      BigInt("005104B3",16),   // add x9, x2, x5      # x9 = (7 + 11) = 18
      BigInt("008001EF",16),   // jal x3, end         # jump to end, x3 = 0x44     # 16
      BigInt("00100113",16),   // addi x2, x0, 1      # shouldn't execute  # x2 = 7 without ADDI
      BigInt("00910133",16),   // add x2, x2, x9      # x2 = (7 + 18) = 25
      BigInt("0221A023",16),   // sw x2, 0x20(x3)     # [100] = 25
      BigInt("00210063",16),   // beq x2, x2, done    # infinite loop

    )
    // val testBenchExample = Seq (
    //   BigInt("FFC4A303",16),
    //   BigInt("0064A423",16),
    //   BigInt("0062E233",16),
    //   BigInt("FE420AE3",16),
    // )
    dut.datapath.memory.dataMemory.simPublic()
    dut.datapath.fetch.instructionMemory.simPublic()
    
    // LOAD TEST INTO INSTR MEM
    for((instr, index) <- testBenchHex.zipWithIndex) {
      dut.datapath.fetch.instructionMemory.setBigInt(index, instr)
    }
    dut.clockDomain.forkStimulus(9)

    dut.clockDomain.waitSampling(50)



    // for (instr <- testBenchHex) {
    //   dut.clockDomain.waitSampling(10)
    //   // dut.datapath.fetch.io.instruction #= instr
    //   // 
    //   // dut.clockDomain.risingEdge()
    //   // sleep(200)
    //   // dut.clockDomain.fallingEdge()
    //   // sleep(200)
    //   // println(s"ALU SRCA: ${dut.datapath.alu.io.SrcA.toInt}")
    //   // println(s"ALU SRCB: ${dut.datapath.alu.io.SrcB.toInt}")
    //   println(s"opcode: ${dut.control.decode.io.operation.toEnum}")
    //   println(s"x1: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(1)}")
    //   println(s"x2: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(2)}")
    //   println(s"x3: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(3)}")
    //   println(s"x4: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(4)}")
    //   println(s"x5: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(5)}")
    //   println(s"x6: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(6)}")
    //   println(s"x7: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(7)}")
    //   println(s"x8: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(8)}")
    //   println(s"x9: ${dut.datapath.datapathDecode.regFile.regFile.getBigInt(9)}")
    //   println(s"DataMemory[100]: ${dut.datapath.memory.dataMemory.getBigInt(48)}")
    //   // println(s"readData1: ${dut.datapath.datapathDecode.regFile.io.readData1.toBigInt}")
    //   // sleep(10)
      
    // }
    // dut.clockDomain.waitSampling(10)
      println(s"DataMemory[100]: ${dut.datapath.memory.dataMemory.getBigInt(48)}")
    //   println(s"x9: ${dut.datapath.regFile.regFile.getBigInt(9)}")
  }
}


object ALUSim extends App {
  Config.sim.compile(ALU()).doSim { dut =>
    dut.clockDomain.forkStimulus(6)
    
    dut.io.SrcA #= BigInt("10")
    dut.io.SrcB #= BigInt("10")
    dut.io.ALUControl #= BigInt("000",2)
    dut.clockDomain.waitSampling(2)
    println(s"${dut.io.ALUResult.toBigInt}")
    

    dut.io.SrcA #= BigInt("30")
    dut.io.SrcB #= BigInt("30")
    dut.io.ALUControl #= BigInt("000",2)
    dut.clockDomain.waitSampling(20)
    println(s"${dut.io.ALUResult.toBigInt}")
    
    dut.io.SrcA #= BigInt("-5")
    dut.io.SrcB #= BigInt("10")
    dut.io.ALUControl #= BigInt("000",2)
    dut.clockDomain.waitSampling(20)
    println(s"${dut.io.ALUResult.toBigInt}")
    

    dut.io.SrcA #= BigInt("12")
    dut.io.SrcB #= BigInt("-9")
    dut.io.ALUControl #= BigInt("000",2)
    dut.clockDomain.waitSampling(20)
    println(s"${dut.io.ALUResult.toBigInt}")
  }
}


object DecodeTestBench extends App {
 
  Config.sim.compile(Decode()).doSim { dut =>
    dut.io.instr #= 0
    dut.clockDomain.forkStimulus(period = 10)
    // dut.io.operation.simPublic()
    
  val testInstructions = Seq (
    BigInt("00000000000000000000000000110011", 2), // ADD  (0000000_00000_00000_000_00000_0110011)
    BigInt("01000000000000000000000000110011", 2), // SUB  (0100000_00000_00000_000_00000_0110011)
    BigInt("00000000000000000001000000110011", 2), // SLL  (0000000_00000_00000_001_00000_0110011)
    BigInt("00000000000000000010000000110011", 2), // SLT  (0000000_00000_00000_010_00000_0110011)
    BigInt("00000000000000000011000000110011", 2), // SLTU (0000000_00000_00000_011_00000_0110011)
    BigInt("00000000000000000100000000110011", 2), // XOR  (0000000_00000_00000_100_00000_0110011)
    BigInt("00000000000000000101000000110011", 2), // SRL  (0000000_00000_00000_101_00000_0110011)
    BigInt("01000000000000000101000000110011", 2), // SRA  (0100000_00000_00000_101_00000_0110011)
    BigInt("00000000000000000110000000110011", 2), // OR   (0000000_00000_00000_110_00000_0110011)
    BigInt("00000000000000000111000000110011", 2), // AND  (0000000_00000_00000_111_00000_0110011)
    BigInt("00000000000000000000000000010011", 2), // ADDI (0000000_00000_00000_000_00000_0010011)
    BigInt("00000000000000000010000000010011", 2), // SLTI (0000000_00000_00000_010_00000_0010011)
    BigInt("00000000000000000011000000010011", 2), // SLTIU(0000000_00000_00000_011_00000_0010011)
    BigInt("00000000000000000100000000010011", 2), // XORI (0000000_00000_00000_100_00000_0010011)
    BigInt("00000000000000000110000000010011", 2), // ORI  (0000000_00000_00000_110_00000_0010011)
    BigInt("00000000000000000111000000010011", 2), // ANDI (0000000_00000_00000_111_00000_0010011)
    BigInt("00000000000000000001000000010011", 2), // SLLI (0000000_00000_00000_001_00000_0010011)
    BigInt("00000000000000000101000000010011", 2), // SRLI (0000000_00000_00000_101_00000_0010011)
    BigInt("01000000000000000101000000010011", 2), // SRAI (0100000_00000_00000_101_00000_0010011)
    BigInt("00000000000000000000000000110111", 2), // LUI  (0000000_00000_00000_000_00000_0110111)
    BigInt("00000000000000000000000000010111", 2), // AUIPC(0000000_00000_00000_000_00000_0010111)
    BigInt("00000000000000000000000001100011", 2), // BEQ  (0000000_00000_00000_000_00000_1100011)
    BigInt("00000000000000000001000001100011", 2), // BNE  (0000000_00000_00000_001_00000_1100011)
    BigInt("00000000000000000100000001100011", 2), // BLT  (0000000_00000_00000_100_00000_1100011)
    BigInt("00000000000000000101000001100011", 2), // BGE  (0000000_00000_00000_101_00000_1100011)
    BigInt("00000000000000000110000001100011", 2), // BLTU (0000000_00000_00000_110_00000_1100011)
    BigInt("00000000000000000111000001100011", 2), // BGEU (0000000_00000_00000_111_00000_1100011)
    BigInt("00000000000000000000000000000011", 2), // LB   (0000000_00000_00000_000_00000_0000011)
    BigInt("00000000000000000001000000000011", 2), // LH   (0000000_00000_00000_001_00000_0000011)
    BigInt("00000000000000000010000000000011", 2), // LW   (0000000_00000_00000_010_00000_0000011)
    BigInt("00000000000000000100000000000011", 2), // LBU  (0000000_00000_00000_100_00000_0000011)
    BigInt("00000000000000000101000000000011", 2), // LHU  (0000000_00000_00000_101_00000_0000011)
    BigInt("00000000000000000000000000100011", 2), // SB   (0000000_00000_00000_000_00000_0100011)
    BigInt("00000000000000000001000000100011", 2), // SH   (0000000_00000_00000_001_00000_0100011)
    BigInt("00000000000000000010000000100011", 2), // SW   (0000000_00000_00000_010_00000_0100011)
    BigInt("00000000000000000000000001100111", 2),  // JALR (0000000_00000_00000_000_00000_1100111)
    BigInt("00000000000000000000000001101111", 2) // JAL  (0000000_00000_00000_000_00000_1101111)
    )
    val testOps = Seq(
       OpCode.ADD, OpCode.SUB,OpCode.SLL,OpCode.SLT,OpCode.SLTU,OpCode.XOR,OpCode.SRL,OpCode.SRA,OpCode.OR,OpCode.AND,OpCode.ADDI,OpCode.SLTI,OpCode.SLTIU,OpCode.XORI,OpCode.ORI,OpCode.ANDI,OpCode.SLLI,
       OpCode.SRLI,OpCode.SRAI,OpCode.LUI,OpCode.AUIPC,OpCode.BEQ,OpCode.BNE,OpCode.BLT,OpCode.BGE,OpCode.BLTU,OpCode.BGEU,OpCode.LB,OpCode.LH,OpCode.LW,OpCode.LBU,OpCode.LHU,OpCode.SB,OpCode.SH,OpCode.SW,
       OpCode.JALR,OpCode.JAL 
    )

    for((instr,expectedOp) <- testInstructions.zip(testOps)) {
      dut.io.instr #= instr

      dut.clockDomain.waitSampling()
      // dut.clockDomain.forkStimulus(period = 10)
      // dut.clockDomain.waitSampling()
      // println(dut.decodedOp)
      // println(dut.io.instr.toBigInt)
      // println(expectedOp.toString())
      println(dut.io.operation.toEnum)

      // println(dut.decodeInstrBits.opcode)
      assert(dut.io.operation.toEnum == expectedOp, s"Decoding Failed. Expected OP: ${expectedOp} , Got: ${dut.io.operation.toEnum}")
    }
  }    
}