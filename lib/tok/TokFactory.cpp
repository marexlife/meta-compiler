#include <cstdint>
#include <meta-compiler/tok/TokFactory.hpp>
#include <meta-compiler/tok/types/F64Tok.hpp>
#include <meta-compiler/tok/types/IdentTok.hpp>

enum class FactoryIR : ::std::uint8_t {

};

auto ::meta_compiler::tok::TokFactory::newTok(const ::std::string_view name)
    -> ::std::unique_ptr<::compiler::tok::Tok> {
  if (name == "F64") {
    return ::std::make_unique<::compiler::tok::types::F64Tok>();
  }

  return ::std::make_unique<::compiler::tok::types::IdentTok>();
}
