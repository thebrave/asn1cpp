#include "asn1.hpp"

#include <stdexcept>

ModuleDefinition ModuleDefinition::fromTokenProvider(
    TokenProvider& tokenProvider) {
  ModuleDefinition md;
  md.module_reference_ = tokenProvider.token();
  if (tokenProvider.token() != "DEFINITIONS")
    throw new std::logic_error("Expected DEFINITIONS");
  if (tokenProvider.token() != "::=")
    throw new std::logic_error("Expected ::=");
  if (tokenProvider.token() != "BEGIN")
    throw new std::logic_error("Expected BEGIN");
  return md;
}