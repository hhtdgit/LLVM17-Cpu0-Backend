//===-- Cpu0SEInstrInfo.h - Cpu032/64 Instruction Information ---*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the Cpu032/64 implementation of the TargetInstrInfo class.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_CPU0_CPU0SEINSTRINFO_H
#define LLVM_LIB_TARGET_CPU0_CPU0SEINSTRINFO_H

#include "Cpu0InstrInfo.h"
#include "Cpu0SERegisterInfo.h"
#include "Cpu0MachineFunctionInfo.h"

namespace llvm {

class Cpu0SEInstrInfo : public Cpu0InstrInfo {
  const Cpu0SERegisterInfo RI;

public:
  explicit Cpu0SEInstrInfo(const Cpu0Subtarget &STI);

  const Cpu0RegisterInfo &getRegisterInfo() const override;
  
  // Expand Pseudo instructions into real backend instructions
  bool expandPostRAPseudo(MachineInstr &MI) const override;

  void storeRegToStack(MachineBasicBlock &MBB,
    MachineBasicBlock::iterator MI,
    unsigned SrcReg, bool isKill, int FrameIndex,
    const TargetRegisterClass *RC,
    const TargetRegisterInfo *TRI,
    int64_t Offset) const override;

void loadRegFromStack(MachineBasicBlock &MBB,
     MachineBasicBlock::iterator MI,
     unsigned DestReg, int FrameIndex,
     const TargetRegisterClass *RC,
     const TargetRegisterInfo *TRI,
     int64_t Offset) const override;

  // Adjust SP by Amount bytes.
void adjustStackPtr(unsigned SP, int64_t Amount, MachineBasicBlock &MBB,
    MachineBasicBlock::iterator I) const override;

// Emit a series of instructions to load an immediate. If NewImm is a
// non-NULL parameter, the last instruction is not emitted, but instead
// its immediate operand is returned in NewImm.
unsigned loadImmediate(int64_t Imm, MachineBasicBlock &MBB,
       MachineBasicBlock::iterator II, const DebugLoc &DL,
       unsigned *NewImm) const;

private:
  void expandRetLR(MachineBasicBlock &MBB, MachineBasicBlock::iterator I) const;
};
} // End llvm namespace

#endif
