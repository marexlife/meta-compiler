#include "compiler/tok/TokFactory.h"
#include "compiler/tok/types/F64Tok.h"
#include "compiler/tok/types/IdentTok.h"

namespace compiler::tok {
auto TokFactory::newTok(const ::std::string_view name)
    -> ::std::unique_ptr<::compiler::tok::Tok> {
  if (name == "F64") {
    return ::std::make_unique<::compiler::tok::types::F64Tok>();
  }

  return ::std::make_unique<::compiler::tok::types::IdentTok>();
}
} // namespace compiler::tok
