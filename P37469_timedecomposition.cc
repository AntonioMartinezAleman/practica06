#include <iostream>

int main() {
  int segundos;
  std::cin >> segundos;
  int horas = segundos / 3600;
  segundos = segundos - (horas * 3600);
  int minutos;
  minutos = segundos / 60;
  int segundos2;
  segundos2 = segundos - (minutos*60);
  std::cout << horas << " " << minutos << " " << segundos2 << std::endl;
  return 0;
}
