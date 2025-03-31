add_llvm_component_library(LLVMCpu0Desc
  Cpu0MCTargetDesc.cpp
  Cpu0ABIInfo.cpp

  LINK_COMPONENTS
  MC
  Cpu0Info
  Support

  ADD_TO_COMPONENT
  Cpu0
  )