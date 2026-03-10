#ifndef COMPILER_TYPES_F64_H
#define COMPILER_TYPES_F64_H

#include "compiler/tok/Tok.h"
#include "compiler/tok/TokKind.h"

namespace compiler::tok::types {
class F64 final : public ::compiler::tok::Tok {
public:
  [[nodiscard]] auto kind() const -> ::compiler::tok::TokKind final {
    return ::compiler::tok::TokKind::F64;
  }
};
} // namespace compiler::tok::types
#endif // COMPILER_TYPES_F64_H