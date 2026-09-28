#include <iostream>

int* intDivision(int a, int b) {
  static int res = 0;
  if (b == 0) {
    return nullptr;
  } else {
    res = a / b;
    return &res;
  }
}

int main(void) {
  int* res = intDivision(10, 5);
  if (res) {
    std::cout << "10 / 5 = " << *res << '\n';
  } else {
    std::cout << "10 / 5 = ERROR\n";
  }

  res = intDivision(10, 0);
  if (res) {
    std::cout << "10 / 0 = " << *res << '\n';
  } else {
    std::cout << "10 / 0 = ERROR\n";
  }
  
  return 0;
}