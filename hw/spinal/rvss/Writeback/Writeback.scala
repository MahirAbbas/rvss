package rvss.Writeback

import rvss._

import spinal.core._ 
import spinal.lib._ 
import spinal.lib.misc.pipeline._
import rvss.Memory.Memory._
import rvss.Execute.Execute._
import rvss.Decode.Decode._

case class Writeback() extends Node {
    
    val io = new Bundle {
        val result = out port Bits(32 bits)
        val rd = out port UInt(32 bits)
        val regwrite = out port Bool()
    }
    
    io.rd := RD
    io.regwrite := REGWRITE

    when(RESULTSRC === U"00"){
        io.result := ALURESULT.asBits
    }
    when(RESULTSRC === U"01"){
        io.result := READDATA
    }
    // when(RESULTSRC === U"00"){
    //     io.result := PCPLUS4
    // }

}