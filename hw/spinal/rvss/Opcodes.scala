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
    val NOOP = newElement()


}

object InstrFormat extends SpinalEnum {
    val R = newElement()
    val I = newElement()
    val S = newElement()
    val B = newElement()
    val U = newElement()
    val J = newElement()
    val UNDEF = newElement()
}
