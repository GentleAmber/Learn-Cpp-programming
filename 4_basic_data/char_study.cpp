#include <iostream>

int main() {
  /* std::cin.get() */
  char ch{};
  std::cout << "Enter 2 character: "; // enter "a b\n" to check how get() works
  std::cin.get(ch);
  std::cout << "You entered: " << ch << "\n";
  std::cin.get(ch);
  std::cout << "You entered: " << ch << "\n";

  /* escape characters */
  // \x Translates into char represented by hex number
  std::cout << "6F in hex is represented by \x6F\n"; 

  return 0;
}