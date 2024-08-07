#include "parser.hpp"

#include <fstream>
#include <iostream>
#include <vector>

// Parses a file word by word and stores the words in a vector.
void Parser::parse(const std::string& filename) {
  std::ifstream file(filename);
  std::vector<std::string> words;
  std::string word;

  if (file.is_open()) {
    while (file >> word) {
        std::cout << word;
      words.push_back(word);
    }
    file.close();
  } else {
    std::cerr << "Error: Unable to open file: " << filename << std::endl;
  }
}

std::string Parser::token() {
    return "";
}
