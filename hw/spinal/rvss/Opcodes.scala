package rvss

import spinal.core._

// LOOK AT SOME ENCODING
object OpCode extends SpinalEnum {
    val LUI = newElement()
    val AUIPC = newElement()
    val JAL = newElement()
    val JALR = newElement()
    val BEQ = newElement()
    val BNE = newElement()
    val BLT = newElement()
    val BGE = newElement()
    val BLTU = newElement()
    val BGEU = newElement()
    val LB = newElement()
    val LH = newElement()
    val LW = newElement()
    val LBU = newElement()
    val LHU = newElement()
    val SB = newElement()
    val SH = newElement()
    val SW = newElement()
    val ADDI = newElement()
    val SLTI = newElement()
    val SLTIU = newElement()
    val XORI = newElement()
    val ORI = newElement()
    val ANDI = newElement()
    val SLLI = newElement()
    val SRLI = newElement()
    val SRAI = newElement()
    val ADD = newElement()
    val SUB = newElement()
    val SLL = newElement()
    val SLT = newElement()
    val SLTU = newElement()
    val XOR = newElement()
    val SRL = newElement()
    val SRA = newElement()
    val OR = newElement()
    val AND = newElement()
    val FENCE = newElement()
    val ECALL = newElement()
    val EBREAK = newElement()
    val NOOP = newElement()
    LUI.setName("LUI")
    ADD.setName("ADD")

    // val opsMap = Map (
    //   0x00 -> ADD,
    //   0x01 -> SUB,
    //   0x02 -> SLL,
    //   0x03 -> SLT,
    //   0x04 -> SLTU,
    //   0x05 -> XOR,
    //   0x06 -> SRL,
    //   0x07 -> SRA,
    //   0x08 -> OR,
    //   0x09 -> AND,
    //   0x0A -> ADDI,
    //   0x0B -> SLTI,
    //   0x0C -> SLTIU,
    //   0x0D -> XORI,
    //   0x0E -> ORI,
    //   0x0F -> ANDI,
    //   0x10 -> SLLI,
    //   0x11 -> SRLI,
    //   0x12 -> SRAI,
    //   0x13 -> LUI,
    //   0x14 -> AUIPC,
    //   0x15 -> BEQ,
    //   0x16 -> BNE,
    //   0x17 -> BLT,
    //   0x18 -> BGE,
    //   0x19 -> BLTU,
    //   0x1A -> BGEU,
    //   0x1B -> LB,
    //   0x1C -> LH,
    //   0x1D -> LW,
    //   0x1E -> LBU,
    //   0x1F -> LHU,
    //   0x20 -> SB,
    //   0x21 -> SH,
    //   0x22 -> SW,
    //   0x23 -> ECALL,
    //   0x24 -> JALR,
    //   0x25 -> JAL 
    // )

}
