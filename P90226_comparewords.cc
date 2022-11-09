#include <iostream>

int main() {
  std::string word1, word2;
  std::cin >> word1 >> word2;
  if (word1 > word2) {
    std::cout << word1 << " > " << word2 << std::endl;
  }
  else if (word1 < word2) {
    std::cout << word1 << " < " << word2 << std::endl;
  }
  else if (word1 == word2) {
    std::cout << word1 << " = " << word2 << std::endl;
  }
  else {
    return 1;
  }
  return 0;
}

