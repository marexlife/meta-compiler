#include <compiler/lex/Lexer.hpp>
#include <compiler/tok/Tok.hpp>
#include <memory>
#include <string_view>
#include <vector>

namespace meta_compiler {
[[nodiscard]] consteval auto getTestCode() -> std::string_view {
  return std::string_view{
#include "TestClass.h"
  };
}
} // namespace meta_compiler
auto main() -> int {
  ::std::string testCode = ::std::string{::meta_compiler::getTestCode()};

  ::std::vector<::std::unique_ptr<::compiler::tok::Tok>> toks =
      ::compiler::lex::Lexer{::std::move(testCode)}.run();

  return 0;
}