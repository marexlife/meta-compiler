#ifndef META_COMPILER_TOK_TOK_HPP
#define META_COMPILER_TOK_TOK_HPP

#include <meta-compiler/tok/TokKind.hpp>

namespace compiler::tok {
class Tok {
public:
  Tok() = default;
  virtual ~Tok() = default;

  [[nodiscard]] virtual auto kind() const -> ::compiler::tok::TokKind = 0;

  Tok(const Tok &) = delete;
  auto operator=(const Tok &) -> Tok & = delete;
  Tok(Tok &&) = delete;
  auto operator=(Tok &&) -> Tok & = delete;
};
} // namespace compiler::tok
#endif // META_COMPILER_TOK_TOK_HPP