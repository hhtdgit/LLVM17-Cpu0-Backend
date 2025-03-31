add_llvm_component_library(LLVMCpu0Desc
  Cpu0MCTargetDesc.cpp
  Cpu0ABIInfo.cpp
  Cpu0MCAsmInfo.cpp

  LINK_COMPONENTS
  MC
  Cpu0Info
  Support
  Cpu0AsmPrinter

  ADD_TO_COMPONENT
  Cpu0
  )