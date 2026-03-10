#ifndef COMPILER_LEX_H
#define COMPILER_LEX_H

#include "compiler/tok/Tok.h"
#include <memory>
#include <string>
#include <vector>

namespace compiler::lex {
class Lexer final {
public:
  explicit Lexer(std::string &&sourceCode)
      : sourceCode(std::move(sourceCode)) {}

  [[nodiscard]] auto run() const
      -> ::std::vector<::std::unique_ptr<::compiler::tok::Tok>>;

private:
  std::string sourceCode;
};
} // namespace compiler::lex

#endif // COMPILER_LEX_H