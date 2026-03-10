#include "compiler/lex/Lexer.h"
#include "compiler/tok/Tok.h"
#include "compiler/tok/types/F64.h"
#include <algorithm>
#include <memory>
#include <string>
#include <vector>

namespace compiler::lex {
auto Lexer::run() const
    -> ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> {
  ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> toks{};
  ::std::string lastWord{};

  ::std::ranges::for_each(sourceCode, [&](const auto current) {
    switch (current) {
    case ' ':
      break;
    default:
      break;
    }
  });

  return toks;
}
} // namespace compiler::lex