#include <iostream>

int main() {
  int x = 6;
  int y = 8;

  std::cout << "int / int = " << x / y << '\n';
  std::cout << "float / int = " << static_cast<float>(x) / y << '\n';
  std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
  
  return 0;
}