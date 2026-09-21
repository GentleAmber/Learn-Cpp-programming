#include <iostream>

int main() {
  // inf : infinite. Has positive and negative
  std::cout << "5 / 0.0 = " << 5.0 / 0.0 << '\n';
  std::cout << "-5 / 0.0 = " << -5.0 / 0.0 << '\n';

  // NaN : not a number. Note NaN and inf belong to float, so one of the zeros
  // needs to be a float (0.0), 0/0 wouldn't work
  std::cout << "0 / 0 = " << 0 / 0.0 << '\n';

  // 0 : has potive and negative
  std::cout << "-0 / 5 = " << -0 / 5 << '\n';
  std::cout << "0 / 5 = " << 0 / 5 << '\n';

  return 0;
}