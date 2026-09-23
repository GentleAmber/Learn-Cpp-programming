#include <iostream>
#include <bitset>

int main(void) {
  std::bitset<8> bits{ 0b0000'0000 };

  bits.set(0); //changes bits' value to 00000001
  std::cout << bits << '\n';

  bits.set(1), bits.set(2), bits.set(3); // 00001111
  std::cout << bits << '\n';

  bits.reset(3); // 00000111
  bits.flip(7); // 10000111
  std::cout << bits << '\n';

  std::cout << "position 7 has value: " << bits.test(7) << '\n';
  std::cout << "position 6 has value: " << bits.test(6) << '\n';

  std::cout << "sizeof std::bitset<8>: " << sizeof(bits) << '\n';

  /*
  There are other funcs like:
  .size() returns the number of bits in the bitset.
  .count() returns the number of bits in the bitset that are set to true.
  .all() returns a Boolean indicating whether all bits are set to true.
  .any() returns a Boolean indicating whether any bits are set to true.
  .none() returns a Boolean indicating whether no bits are set to true.
  */
  return 0;
}