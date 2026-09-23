/*
Write a program that asks the user to input a number between 0
and 255. Print this number as an 8-bit binary number (of the
form #### ####). Don’t use std::bitset.
*/

#include <iostream>
#include <string>

int main(void) {
  int list[8]{128, 64, 32, 16, 8, 4, 2, 1};

  std::cout << "Enter a number between 0 and 255: ";

  int x{};
  std::cin >> x;
  
  for (int i = 0; i < 8; i++) {
    if (i == 4) {
      std::cout << " ";
    }
    if (x >= list[i]) {
      x -= list[i];
      std::cout << 1;
    } else {
      std::cout << 0;
    }
  }

  std::cout << '\n';

  return 0;
}