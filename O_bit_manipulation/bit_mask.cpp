#include <iostream>
#include <bitset>

int main(void) {
  [[maybe_unused]] constexpr std::bitset<8> mask0{ 0b0000'0001 };
  [[maybe_unused]] constexpr std::bitset<8> mask1{ 0b0000'0010 };  
  [[maybe_unused]] constexpr std::bitset<8> mask2{ 0b0000'0100 };  
  [[maybe_unused]] constexpr std::bitset<8> mask3{ 0b0000'1000 };  
  [[maybe_unused]] constexpr std::bitset<8> mask4{ 0b0001'0000 };  
  [[maybe_unused]] constexpr std::bitset<8> mask5{ 0b0010'0000 };  
  [[maybe_unused]] constexpr std::bitset<8> mask6{ 0b0100'0000 };  
  [[maybe_unused]] constexpr std::bitset<8> mask7{ 0b1000'0000 };

  std::bitset<8> bits{ 0b1101'1001 };
  
  // flip position 7 and 5
  std::cout << (bits ^ (mask7 | mask5)) << '\n'; // prints 0111'1001

  // set position 1, 2, 5
  std::cout << (bits | (mask1 | mask2 | mask5)) << '\n'; // prints 1111'1111

  // reset position 0, 3, 4, 6, 7
  std::cout << (bits & ~(mask0 | mask3 | mask4 | mask6 | mask7)) << '\n'; 
  // prints 0000'0000

  // test postion 2
  std::cout << "position 2 is " << ((bits & mask2).any() ? "1" : "0") << '\n';
  // test postion 0
  std::cout << "position 0 is " << ((bits & mask0).any() ? "1" : "0") << '\n';

  return 0;
}