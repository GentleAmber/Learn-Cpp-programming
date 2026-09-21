#include <iostream>

int main(void) {
  /* quoted text concat */
  std::cout << "Hello, " "world.";

  /* cin cout */
  // std::cout << "Enter two numbers: \n";
  // int x{}, y{}, z{};
  // std::cin >> x >> y; // input 3 numbers to test cin buffering feature
  // std::cout << "You entered: " << x << " " << y << "\n";
  // std::cout << "Enter another number: \n";
  // std::cin >> z;
  // std::cout << "You entered: " << z;
  return 0;
}
