#ifndef COMPILER_TOK_TOK_KIND_H
#define COMPILER_TOK_TOK_KIND_H

#include <cstdint>

namespace compiler::tok {
enum class TokKind : ::std::uint8_t {
  Ident,
  F64,
};
}
#endif // COMPILER_TOK_TOK_KIND_H