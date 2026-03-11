#ifndef COMPILER_TOK_TYPES_F64_TOK_H
#define COMPILER_TOK_TYPES_F64_TOK_H

#include <compiler/tok/Tok.hpp>
#include <compiler/tok/TokKind.hpp>

namespace compiler::tok::types {
class F64Tok final : public ::compiler::tok::Tok {
public:
  [[nodiscard]] auto kind() const -> ::compiler::tok::TokKind final {
    return ::compiler::tok::TokKind::F64;
  }
};
} // namespace compiler::tok::types
#endif // COMPILER_TOK_TYPES_F64_TOK_H