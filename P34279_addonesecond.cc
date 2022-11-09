#include <iostream>

int main() {
  int horas, minutos, segundos;
  std::cin >> horas >> minutos >> segundos;
  if (horas < 10) {
    std::cout << "0" << horas;
  }
  else if (horas>9) {
    std::cout << horas;
  }
  if (minutos < 10) {
    std::cout << ":0" << minutos;
  }
  else if(minutos>9) {
    std::cout << ":" << minutos;
  }
  if (segundos < 10) {
    std::cout << ":0" << segundos+1 << std::endl;
  }
  else if(segundos>9) {
    std::cout << ":" << segundos+1 << std::endl;
  }
  return 0;
}
