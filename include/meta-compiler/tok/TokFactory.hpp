#ifndef COMPILER_TOK_TOK_FACTORY_HPP
#define COMPILER_TOK_TOK_FACTORY_HPP

#include <memory>
#include <meta-compiler/tok/Tok.hpp>
#include <string_view>

namespace meta_compiler::tok {
class TokFactory final {
public:
  [[nodiscard]] static auto newTok(::std::string_view name)
      -> ::std::unique_ptr<::compiler::tok::Tok>;
};
} // namespace meta_compiler::tok

#endif // COMPILER_TOK_TOK_FACTORY_HPP