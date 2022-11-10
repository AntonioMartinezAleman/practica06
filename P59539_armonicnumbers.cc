#include <iostream>
#include <iomanip>

int main() {
  int n;
  double m{0};
  std::cin >> n;
  for (double i = 1.0; i <= n; i++) {
    m = m + (1 / i);
  }
  std::cout << std::fixed << std::setprecision(4) << m << std::endl;
  return 0;
}
