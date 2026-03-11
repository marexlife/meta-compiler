#ifndef COMPILER_TOK_TOK_FACTORY_HPP
#define COMPILER_TOK_TOK_FACTORY_HPP

#include <compiler/tok/Tok.hpp>
#include <memory>
#include <string_view>

namespace compiler::tok {
class TokFactory final {
public:
  [[nodiscard]] static auto newTok(::std::string_view name)
      -> ::std::unique_ptr<::compiler::tok::Tok>;
};
} // namespace compiler::tok

#endif // COMPILER_TOK_TOK_FACTORY_HPP