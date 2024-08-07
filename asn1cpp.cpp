#include <iostream>

#include "parser.hpp"

int main() {
    Parser parser;
    std::string filename = "/home/user/asn1cpp/snmp/snmp-types.asn"; // Replace with your file name
    parser.parse(filename);

    return 0;
}
