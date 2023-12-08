package rvss

import spinal.core._
import spinal.core.sim._
import OpCode._

object MyTopLevelSim extends App {
  Config.sim.withWave.compile(new RVSS()).doSim("riscv-test") { dut =>

    val testBench = Seq (
      BigInt("00000000010100000000000100010011",2), // addi x2, x0, 5 \\ x2=5
      BigInt("00000000110000000000000110010011",2), // addi x3, x0, 12 \\ x3 = 12
      BigInt("11111111011100011000001110010011",2), // addi x7, x3, -9 \\ x7 = 3
      BigInt("00000000001000111110001000110011",2), // or x4, x7, x2 \\ x4 = 7
      BigInt("00000000010000011111001010110011",2), // and x5, x3, x4 \\ x5 = 4
      BigInt("00000000010000101000001010110011",2),  // add x5, x5, x4 
      // BigInt("0000000 00100 00101 000 00101 0110011",2),  // add x5, x5, x4 
      // BigInt("00000000001000111010001000110011",2), // slt x4, x3, x4
      // BigInt("0000000010100100000001110110011",2), // add x7, x4, x5 
      // BigInt("0100000001000111000001110110011",2), // sub x7, x7, x2
      // BigInt("00001010011100011010010000100011",2), // sw x7, 84(x3)
      // BigInt("00000110000000000010000100000011",2), // lw x2, 96(x0)
      // BigInt("00000000010100010000010010110011",2), // add x9, x2, x5
      // BigInt("00000000000100000000000100010011",2), // addi x2, x0, 1
      // BigInt("00000000100100010000000100110011",2), // add x2, x2, x9
      // BigInt("00000010001000011010000000100011",2), // sw x2, 0x20(x3)
    )

    val testBenchHex = Seq (
      BigInt("00500113",16), // addi x2, x0, 5
      BigInt("00C00193",16), // addi x3, x0, 12
      BigInt("FF718393",16), // addi x7, x3, -9
      BigInt("0023E233",16), // or x4, x7, x2
      BigInt("0041F2B3",16), // and x5, x3, x4
      BigInt("004282B3",16)  // add x5, x5, x4
    )
    dut.datapath.fetch.instructionMemory.init(testBenchHex.map(value => B(value, 32 bits)))

    dut.clockDomain.forkStimulus(50)

    // dut.io.instruction #= BigInt("00000000010100000000000100010011",2)
    // sleep(10)
    // dut.clockDomain.waitSampling(10)
    for (instr <- testBench) {
      dut.clockDomain.waitSampling(8)
      println(s"ALU SRCA: ${dut.datapath.alu.io.SrcA.toInt}")
      println(s"ALU SRCB: ${dut.datapath.alu.io.SrcB.toInt}")
      println(s"opcode: ${dut.control.decode.io.operation.toEnum}")
      println(s"x1: ${dut.datapath.decode.regFile.regFile.getBigInt(1)}")
      println(s"x2: ${dut.datapath.decode.regFile.regFile.getBigInt(2)}")
      println(s"x3: ${dut.datapath.decode.regFile.regFile.getBigInt(3)}")
      println(s"x4: ${dut.datapath.decode.regFile.regFile.getBigInt(4)}")
      println(s"x5: ${dut.datapath.decode.regFile.regFile.getBigInt(5)}")
      println(s"x6: ${dut.datapath.decode.regFile.regFile.getBigInt(6)}")
      println(s"x7: ${dut.datapath.decode.regFile.regFile.getBigInt(7)}")
      println(s"x8: ${dut.datapath.decode.regFile.regFile.getBigInt(8)}")
      println(s"x9: ${dut.datapath.decode.regFile.regFile.getBigInt(9)}")
      println(s"readData1: ${dut.datapath.decode.regFile.io.readData1.toBigInt}")

      
    }
    // dut.clockDomain.waitSampling(10)
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
      // println(dut.io.operation.toEnum)

      // println(dut.decodeInstrBits.opcode)
      assert(dut.io.operation.toEnum == expectedOp, s"Decoding Failed. Expected OP: ${expectedOp} , Got: ${dut.io.operation.toEnum}")
    }
  }    
}