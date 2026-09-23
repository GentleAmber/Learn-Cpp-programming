#include <bitset>
#include <iostream>

// A function that rotates a bitset<4> to left by digit
// An example of rotation: 
// rotl(bitset<4>{0b1101}, 1) produces 0b1011
std::bitset<4> rotl(std::bitset<4> bits, int digit) {
  digit %= 4;
  // Rotating 0 digits or 4 digits both create the original bits
  if (digit == 0) {
    return bits;
  }

  std::bitset<4> overflowed = bits >> (4 - digit);
  bits <<= digit;
  bits |= overflowed;

  return bits;
}

int main() {
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1, 2) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2, 0) << '\n'; // should be 1001
	std::cout << rotl(bits2, 1) << '\n'; // should be 0011
	std::cout << rotl(bits2, 2) << '\n'; // should be 0110
	std::cout << rotl(bits2, 3) << '\n'; // should be 1100
	std::cout << rotl(bits2, 4) << '\n'; // should be 1001
	std::cout << rotl(bits2, 61) << '\n'; // should be 0011


	return 0;
}