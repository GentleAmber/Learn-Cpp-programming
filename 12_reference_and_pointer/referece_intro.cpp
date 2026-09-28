#include <iostream>

int main(void) {
  int x{1};
  int& y{x};

  std::cout << "y=" << y << '\n';
  
  y = 2;
  std::cout << "x=" << x << '\n';
  
  return 0;
}