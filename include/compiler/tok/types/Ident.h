#ifndef COMPILER_TYPES_IDENT_H
#define COMPILER_TYPES_IDENT_H

#include "compiler/tok/Tok.h"
#include "compiler/tok/TokKind.h"

namespace compiler::tok::types {
class Ident final : public ::compiler::tok::Tok {
  [[nodiscard]] auto kind() const -> ::compiler::tok::TokKind final {
    return ::compiler::tok::TokKind::Ident;
  }
};
} // namespace compiler::tok::types

#endif // COMPILER_TYPES_IDENT_H