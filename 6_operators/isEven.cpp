/*
Write a program that asks the user to input an integer, 
and tells the user whether the number is even or odd. 
Write a constexpr function called isEven() that returns 
true if an integer passed to it is even, and false otherwise. 
Use the remainder operator to test whether the integer 
parameter is even. Make sure isEven() works with both 
positive and negative numbers.
*/

#include <iostream>

bool isEven(int);

int main(void) {
  int x{};
  
  std::cout << "Enter an integer: ";
  std::cin >> x;
  bool res = isEven(x);
  std::cout << x << (res ? " is odd\n" : " is even\n");

  return 0;
}

bool isEven(int x) {
  if (x % 2 != 0)
    return true;
  return false;
}