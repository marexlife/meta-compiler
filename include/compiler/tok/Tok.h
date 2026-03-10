#ifndef COMPILER_TOK_TOK_H
#define COMPILER_TOK_TOK_H

#include "compiler/tok/TokKind.h"

namespace compiler::tok {
class Tok {
public:
  Tok() = default;

  [[nodiscard]] virtual auto kind() const -> ::compiler::tok::TokKind = 0;

  virtual ~Tok() = default;

  Tok(const Tok &) = delete;
  auto operator=(const Tok &) -> Tok & = delete;
  Tok(Tok &&) = delete;
  auto operator=(Tok &&) -> Tok & = delete;
};
} // namespace compiler::tok
#endif // COMPILER_TOK_TOK_H