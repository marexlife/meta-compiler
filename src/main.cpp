#include "compiler/lex/Lexer.h"
#include "compiler/tok/Tok.h"
#include <memory>
#include <vector>

auto main() -> int {
  ::std::string testCode;

  ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> toks =
      ::compiler::lex::Lexer{::std::move(testCode)}.run();

  return 0;
}