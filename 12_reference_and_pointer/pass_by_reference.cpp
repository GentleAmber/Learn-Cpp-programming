#include <iostream>

/* 
Pass by reference allows modifying x's value compared with passing by 
value
*/
void incrementX(int& x) {
  std::cout << "argument ref x's address: " << &x << '\n';
  ++x;
}

int main(void) {
  int x{1};
  std::cout << "x's address: " << &x << '\n';
  incrementX(x);
  std::cout << "x = " << x << '\n';

  return 0;
}