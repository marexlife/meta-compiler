#ifndef META_COMPILER_TOK_TYPES_IDENT_TOK_HPP
#define META_COMPILER_TOK_TYPES_IDENT_TOK_HPP

#include <compiler/tok/Tok.hpp>
#include <compiler/tok/TokKind.hpp>

namespace compiler::tok::types {
class IdentTok final : public ::compiler::tok::Tok {
  [[nodiscard]] auto kind() const -> ::compiler::tok::TokKind final {
    return ::compiler::tok::TokKind::Ident;
  }
};
} // namespace compiler::tok::types
#endif // META_COMPILER_TOK_TYPES_IDENT_TOK_HPP