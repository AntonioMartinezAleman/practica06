#include <iostream>

int main () {
  int temperature;
  std::cin >> temperature;
  if(temperature > 30) {
    std::cout << "it's hot" << std::endl;
  }
  else if(temperature < 10) {
    std::cout << "it's cold" << std::endl;
  }
  if(10 <= temperature && temperature <= 30) {
    std::cout << "it's ok" << std::endl;
  }
  if(temperature <= 0) {
    std::cout << "water would freeze" << std::endl;
  }
  else if(temperature >= 100) {
    std::cout << "water would boil" << std::endl;
  }
  return 0;
}
