#ifndef INTELOPCODEBASEX64_H
#define INTELOPCODEBASEX64_H

#include <verbaj.h>

namespace intelx64 {
  class IntelOpCodeBase_x64 : public jit::OpCodeBase<intelx64::IntelJitBufferWriter_x64> {

  };
}

#endif
