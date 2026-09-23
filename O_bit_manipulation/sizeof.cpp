#include <iostream>
#include <cstdint>
#include <bitset>

int main(void) {
  std::cout << sizeof(std::uint8_t) << '\n'; 
  std::cout << sizeof(std::bitset<8>) << '\n'; 
  return 0;
}