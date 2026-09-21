#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {
  // need to pass double number into pow() otherwise due to rounding error
  // it will not be precise
  std::cout << "7 ^ 12 = " << std::setprecision(16) << std::pow(7.0,12.0) << '\n';  
  return 0;
}