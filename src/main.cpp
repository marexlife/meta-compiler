#include "compiler/lex/Lexer.h"
#include "compiler/tok/Tok.h"
#include <memory>
#include <vector>

auto main() -> int {
  ::std::string testCode =
      R"(
car := class:
  BeginPlay() : void =
    Print("Hello")

Square(X : i32) : i32 = X * X

Main(Args: []string) =
  X : i32 = 1

  Print("S {}", S)
)";

  ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> toks =
      ::compiler::lex::Lexer{::std::move(testCode)}.run();

  return 0;
}