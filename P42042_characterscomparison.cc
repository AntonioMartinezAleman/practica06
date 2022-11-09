#include <iostream>

int main () {
  char letra;
  std::cin >> letra;

  if (letra >= 65 && letra < 97) {
    std::cout << "uppercase" << std::endl;
  }
  else if (letra >= 97) {
    std::cout << "lowercase" << std::endl;
  }

  if (letra == 65 || letra == 69 || letra == 73 || letra == 79 || letra == 85 ||
letra == 97 || letra == 101 || letra == 105 || letra == 111 || letra == 117) {
    std::cout << "vowel" << std::endl;
  }else{
    std::cout << "consonant" << std::endl;
  }
  return 0;
}
