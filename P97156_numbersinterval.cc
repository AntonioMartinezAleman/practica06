#include <iostream>

int main() {
  int numero1, numero2;
  std::cin >> numero1 >> numero2;
  for(int i = numero1; i<numero2; i++) {
    std::cout << i << ",";
  }
  if (numero1 = numero2){
    std::cout << numero1 << std::endl;
  }
  return 0;
}
