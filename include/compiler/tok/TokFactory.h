#ifndef COMPILER_TOK_TOK_FACTORY_H
#define COMPILER_TOK_TOK_FACTORY_H

#include "Tok.h"
#include <memory>
#include <string_view>

namespace compiler::tok {
class TokFactory final {
public:
  [[nodiscard]] static auto newTok(::std::string_view name)
      -> ::std::unique_ptr<::compiler::tok::Tok>;
};
} // namespace compiler::tok

#endif // COMPILER_TOK_TOK_FACTORY_H