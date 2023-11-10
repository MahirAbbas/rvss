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
      BigInt("00000000000000000000000000110011", 2), // ADD    
      BigInt("01000000000000000000000000110011", 2), // SUB
      BigInt("00000000000000000000000000110011", 2), // SLL
      BigInt("00000000000000000000000000110011", 2), // SLT
      BigInt("00000000000000000000000000110011", 2), // SLTU
      BigInt("00000000000000000000000000110011", 2), // XOR
      BigInt("00000000000000000000000000110011", 2), // SRL
      BigInt("01000000000000000000000000110011", 2), // SRA
      BigInt("00000000000000000000000000110011", 2), // OR
      BigInt("00000000000000000000000000110011", 2), // AND
      BigInt("00000000000000000000000000010011", 2), // ADDI
      BigInt("00000000000000000000000000010011", 2), // SLTI
      BigInt("00000000000000000000000000010011", 2), // SLTIU
      BigInt("00000000000000000000000000010011", 2), // XORI
      BigInt("00000000000000000000000000010011", 2), // ORI
      BigInt("00000000000000000000000000010011", 2), // ANDI
      BigInt("00000000000000000000000000010011", 2), // SLLI
      BigInt("00000000000000000000000000010011", 2), // SRLI
      BigInt("01000000000000000000000000010011", 2), // SRAI
      BigInt("00000000000000000000000001101111", 2), // LUI
      BigInt("00000000000000000000000000101111", 2), // AUIPC
      BigInt("00000000000000000000000001100011", 2), // BEQ
      BigInt("00000000000000000000000001100011", 2), // BNE
      BigInt("00000000000000000000000001100011", 2), // BLT
      BigInt("00000000000000000000000001100011", 2), // BGE
      BigInt("00000000000000000000000001100011", 2), // BLTU
      BigInt("00000000000000000000000001100011", 2), // BGEU
      BigInt("00000000000000000000000000000011", 2), // LB
      BigInt("00000000000000000000000000000011", 2), // LH
      BigInt("00000000000000000000000000000011", 2), // LW
      BigInt("00000000000000000000000000000011", 2), // LBU
      BigInt("00000000000000000000000000000011", 2), // LHU
      BigInt("00000000000000000000000001000011", 2), // SB
      BigInt("00000000000000000000000001000011", 2), // SH
      BigInt("00000000000000000000000001000011", 2), // SW
      BigInt("00000000000000000000000011100011", 2), // ECALL/EBREAK
      BigInt("00000000000000000000000011100111", 2), // JALR
      BigInt("00000000000000000000000001101111", 2)  // JAL
    )
    val testOps = Map (
      0x00 -> OpCode.ADD,
      0x01 -> OpCode.SUB,
      0x02 -> OpCode.SLL,
      0x03 -> OpCode.SLT,
      0x04 -> OpCode.SLTU,
      0x05 -> OpCode.XOR,
      0x06 -> OpCode.SRL,
      0x07 -> OpCode.SRA,
      0x08 -> OpCode.OR,
      0x09 -> OpCode.AND,
      0x0A -> OpCode.ADDI,
      0x0B -> OpCode.SLTI,
      0x0C -> OpCode.SLTIU,
      0x0D -> OpCode.XORI,
      0x0E -> OpCode.ORI,
      0x0F -> OpCode.ANDI,
      0x10 -> OpCode.SLLI,
      0x11 -> OpCode.SRLI,
      0x12 -> OpCode.SRAI,
      0x13 -> OpCode.LUI,
      0x14 -> OpCode.AUIPC,
      0x15 -> OpCode.BEQ,
      0x16 -> OpCode.BNE,
      0x17 -> OpCode.BLT,
      0x18 -> OpCode.BGE,
      0x19 -> OpCode.BLTU,
      0x1A -> OpCode.BGEU,
      0x1B -> OpCode.LB,
      0x1C -> OpCode.LH,
      0x1D -> OpCode.LW,
      0x1E -> OpCode.LBU,
      0x1F -> OpCode.LHU,
      0x20 -> OpCode.SB,
      0x21 -> OpCode.SH,
      0x22 -> OpCode.SW,
      0x23 -> OpCode.ECALL,
      0x24 -> OpCode.JALR,
      0x25 -> OpCode.JAL 
    )

    // for (op <- testOps) {
    //   println(op.toString())
    // // }
    // for((instr,expectedOp) <- testOps) {
    //   dut.io.instr #= instr

    //   // dut.clockDomain.waitSampling()
    //   // dut.clockDomain.waitSampling()
    //   // println(dut.decodedOp)
    //   println(dut.io.instr.toBigInt)
    //   println(expectedOp.toString())
    //   println(dut.io.operation.toBigInt)
    //   // println(dut.decodeInstrBits.opcode)
    //   assert(dut.io.operation == expectedOp, s"Decoding Failed. Expected OP: ${expectedOp} , Got: ${dut.io.operation.toBigInt}")
    // }
    
    val bigIntValue = BigInt("00000000000000000000000000110011", 2)
      
    dut.io.instr #= bigIntValue
    println(dut.io.instr.toBigInt)
    dut.clockDomain.waitSampling()
    println(dut.io.operation.toBigInt)
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
