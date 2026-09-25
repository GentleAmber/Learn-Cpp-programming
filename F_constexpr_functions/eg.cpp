#include <iostream>

constexpr double circumference(double radius) {
  constexpr double pi{3.1415926};
  return pi*radius*radius;
}

int main(void) {
  double c = circumference(3.0); // evaluated at compile-time
  std::cout << c << '\n';
  
  int r{};
  std::cout << "Enter a radius (integral): ";
  std::cin >> r;
  double c2 = circumference(r); // evaluated at runtime
  std::cout << "Circumference is: " << c2 << '\n'; 

  return 0;
}