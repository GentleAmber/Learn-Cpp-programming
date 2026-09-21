#include <iomanip> // for std::setprecision()
#include <iostream>

int main() {
  // should be 1.0
  double x{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1}; 
  std::cout << std::setprecision(17) << x << '\n';

  double y{1.0};
  std::cout << "x = y: " << (x == y) << '\n';
  
  return 0;
}