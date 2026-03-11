#include <algorithm>
#include <meta-compiler/lex/Lexer.hpp>
#include <meta-compiler/tok/Tok.hpp>
#include <meta-compiler/tok/TokFactory.hpp>
#include <memory>
#include <vector>

auto ::meta_compiler::lex::Lexer::run()
    -> ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> {
  ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> toks;

  for (const auto current : sourceCode_) {
    switch (current) {
    case ' ':
      flush(toks);
      break;
    default:
      lastWord_.push_back(current);
      break;
    }
  }

  flush(toks);

  return std::move(toks);
}

