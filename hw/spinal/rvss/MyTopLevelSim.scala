package rvss

import spinal.core._
import spinal.core.sim._
import OpCode._

object MyTopLevelSim extends App {
  
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
       OpCode.ADD,
       OpCode.SUB,
       OpCode.SLL,
       OpCode.SLT,
       OpCode.SLTU,
       OpCode.XOR,
       OpCode.SRL,
       OpCode.SRA,
       OpCode.OR,
       OpCode.AND,
       OpCode.ADDI,
       OpCode.SLTI,
       OpCode.SLTIU,
       OpCode.XORI,
       OpCode.ORI,
       OpCode.ANDI,
       OpCode.SLLI,
       OpCode.SRLI,
       OpCode.SRAI,
       OpCode.LUI,
       OpCode.AUIPC,
       OpCode.BEQ,
       OpCode.BNE,
       OpCode.BLT,
       OpCode.BGE,
       OpCode.BLTU,
       OpCode.BGEU,
       OpCode.LB,
       OpCode.LH,
       OpCode.LW,
       OpCode.LBU,
       OpCode.LHU,
       OpCode.SB,
       OpCode.SH,
       OpCode.SW,
       OpCode.JALR,
       OpCode.JAL 
    )

    // for (op <- testOps) {
    //   println(op.toString())
    // // }
    // 


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
    
    val bigIntValue = BigInt("00000000000000000100000000110011", 2)
      
    dut.io.instr #= bigIntValue
    println(dut.io.instr.toBigInt)
    dut.clockDomain.waitSampling()
    // println(dut.io.operation.toBigInt)
    println(dut.io.operation.toEnum)
    // println(dut.operation.toBigInt.toString(2))



  }
  // Config.sim.compile(MyTopLevel()).doSim { dut =>
  //   // Fork a process to generate the reset and the clock on the dut
  //   dut.clockDomain.forkStimulus(period = 10)

  //   var modelState = 0
  //   for (idx <- 0 to 99) {
  //     // Drive the dut inputs with random values
  //     dut.io.cond0.randomize()
  //     dut.io.cond1.randomize()

  //     // Wait a rising edge on the clock
  //     dut.clockDomain.waitRisingEdge()

  //     // Check that the dut values match with the reference model ones
  //     val modelFlag = modelState == 0 || dut.io.cond1.toBoolean
  //     assert(dut.io.state.toInt == modelState)
  //     assert(dut.io.flag.toBoolean == modelFlag)

  //     // Update the reference model value
  //     if (dut.io.cond0.toBoolean) {
  //       modelState = (modelState + 1) & 0xff
  //     }
  //   }
  // }
}
