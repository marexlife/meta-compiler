#ifndef COMPILER_LEX_LEXER_HPP
#define COMPILER_LEX_LEXER_HPP

#include <cstdint>
#include <memory>
#include <meta-compiler/tok/Tok.hpp>
#include <meta-compiler/tok/TokFactory.hpp>
#include <string>
#include <vector>

namespace meta_compiler::lex {
namespace detail {
enum class LexerAfterFlush : ::std::uint8_t {
  DoClear = 0,
  DoNotClear,
};
}

class Lexer final {
public:
  explicit Lexer(::std::string &&sourceCode)
      : sourceCode_(::std::move(sourceCode)) {}

  [[nodiscard]] auto run()
      -> ::std::vector<::std::unique_ptr<::compiler::tok::Tok>>;

private:
  template <::meta_compiler::lex::detail::LexerAfterFlush ShouldClear =
                ::meta_compiler::lex::detail::LexerAfterFlush::DoClear>
  void flush(::std::vector<::std::unique_ptr<::compiler::tok::Tok>> &toks) {
    toks.emplace_back(::meta_compiler::tok::TokFactory::newTok(lastWord_));

    if constexpr (ShouldClear ==
                  ::meta_compiler::lex::detail::LexerAfterFlush::DoClear) {
      lastWord_.clear();
    }
  }

  ::std::string sourceCode_;
  ::std::string lastWord_;
};
} // namespace meta_compiler::lex
#endif // COMPILER_LEX_LEXER_HPP