#ifndef COMPILER_TOK_TOK_FACTORY_H
#define COMPILER_TOK_TOK_FACTORY_H

#include "Tok.h"
#include "compiler/tok/types/F64Tok.h"
#include "compiler/tok/types/IdentTok.h"
#include <memory>
#include <string_view>

namespace compiler::tok {
class TokFactory final {
public:
  [[nodiscard]] static auto newTok(const ::std::string_view name)
      -> ::std::unique_ptr<::compiler::tok::Tok> {
    if (name == "F64") {
      return ::std::make_unique<::compiler::tok::types::F64Tok>();
    }

    return ::std::make_unique<::compiler::tok::types::IdentTok>();
  }
};
} // namespace compiler::tok

#endif // COMPILER_TOK_TOK_FACTORY_H