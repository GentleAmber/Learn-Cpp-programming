#include <iostream>
#include <bitset>

template <int N>
void print() {
  std::cout << N << '\n';
}

int main(void) {
  print<5>();
  
  /* 
  The below part won't compile because non-type parameter has to be
  constexpr
   */
  // int x{};
  // std::cout << "Enter an int: ";
  // std::cin >> x;
  // std::bitset<8> bits{}; 
  std::bitset<8> bits{};
  std::cout << bits;

  return 0;
}