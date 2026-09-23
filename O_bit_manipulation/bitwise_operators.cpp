#include <iostream>
#include <bitset>

int main(void) {
  // Two ways to do bitwise manipulation
  std::bitset<8> bits{ 0b0000'0000 }; // bitset
  unsigned char int_bits = 0b0000'0000; // integral data

  // | won't change the operands
  std::cout << (bits | std::bitset<8>{0b1111'0000}) << '\n';
  std::cout << bits << '\n';
  std::cout << (int_bits | 0b1111'0000) << '\n';
  std::cout << int_bits << '\n';

  return 0;
}