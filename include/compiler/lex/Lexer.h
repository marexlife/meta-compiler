#ifndef COMPILER_LEX_LEXER_H
#define COMPILER_LEX_LEXER_H

#include "compiler/tok/Tok.h"
#include <memory>
#include <string>
#include <vector>

namespace compiler::lex {
class Lexer final {
public:
  explicit Lexer(::std::string &&sourceCode)
      : sourceCode(::std::move(sourceCode)) {}

  [[nodiscard]] auto run()
      -> ::std::vector<::std::unique_ptr<::compiler::tok::Tok>>;

private:
  void flush(::std::vector<::std::unique_ptr<::compiler::tok::Tok>> &toks);

  ::std::string sourceCode;
  ::std::string lastWord;
};
} // namespace compiler::lex
#endif // COMPILER_LEX_LEXER_H