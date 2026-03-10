#include "compiler/lex/Lexer.h"
#include "compiler/tok/Tok.h"
#include <algorithm>
#include <memory>
#include <vector>

namespace compiler::lex {
auto Lexer::run() -> ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> {
  ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> toks;

  ::std::ranges::for_each(sourceCode, [&](const auto current) {
    switch (current) {
    case ' ':
      break;
    default:
      break;
    }
  });

  return std::move(toks);
}
} // namespace compiler::lex