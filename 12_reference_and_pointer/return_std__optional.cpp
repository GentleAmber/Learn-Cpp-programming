#include <iostream>
#include <optional>

// returns std::nullopt or int (疑似套皮pointer)
std::optional<int> intdivide(int a, int b) {
  if (b == 0) {
    return {}; // or return std::nullopt
  } else {
    return a / b;
  }
}

int main(void) {
  std::optional<int> result = intdivide(10, 5);
  if (result) {
    std::cout << "10 / 5 = " << *result << '\n';
  } else {
    std::cout << "10 / 5 = ERROR\n";
  }

  result = intdivide(10, 0);
  if (result) {
    std::cout << "10 / 0 = " << *result << '\n';
  } else {
    std::cout << "10 / 0 = ERROR\n";
  }

  return 0;
}