#include "compiler/lex/Lexer.h"
#include "compiler/tok/Tok.h"
#include "compiler/tok/TokFactory.h"
#include <algorithm>
#include <memory>
#include <vector>

namespace compiler::lex {
auto Lexer::run() -> ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> {
  ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> toks;

  ::std::ranges::for_each(this->sourceCode, [&](const auto current) {
    switch (current) {
    case ' ':
      this->flush(toks);
      break;
    default:
      this->lastWord.push_back(current);
      break;
    }
  });

  this->flush(toks);

  return std::move(toks);
}

void Lexer::flush(
    ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> &toks) {
  toks.emplace_back(::compiler::tok::TokFactory::newTok(this->lastWord));
  this->lastWord.clear();
}
} // namespace compiler::lex