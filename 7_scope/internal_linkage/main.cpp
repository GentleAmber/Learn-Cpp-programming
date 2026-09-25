#include <iostream>

int a_getI();
static int getI() {
  return 2;
}

int main() {
  std::cout << "(main) getI(): " << getI() << '\n';
  std::cout << "a_getI(): " << a_getI() << '\n';

  return 0;
}