#include <iostream>

int main(void) {
  int x{5};
  const int y{6};

  int* i_p{&x};
  /* a pointer that's supposed to point to const int. If pointed to int,
  it won't be able to modify the int's value though. */
  const int* ci_p{&x};
  // *ci_p = 6; // ERROR: assignment of read-only location '* ci_p
  
  /* a pointer that's supposed to point to const int and can't change the
  object it points to */
  const int* const ci_cp{&x}; // It cannot point to another address

  std::cout << "Use i_p to change x's value to 10...\n";
  *i_p = 10;
  std::cout << "x's value: " << x << '\n';
  std::cout << "Use ci_p to access x's value: " << *ci_p << '\n';
  ci_p = &y;
  std::cout << "Use ci_p to access y's value: " << *ci_p << '\n';

  return 0;
}