#pragma once

#include "asn1.hpp"

#include <string>

class Parser: public TokenProvider {
public:
    void parse(const std::string& filename);
};
