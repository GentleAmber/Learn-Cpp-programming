#include <iostream>

/*
Write a function template named mult() that allows 
the user to multiply one value of any type (first parameter) 
and an integer (second parameter). The second parameter 
should not be a template type. The function should return
the same type as the first parameter.
*/

template <typename T>
T mult(T a, int i);

int main(void) {
  std::cout << mult(3.4, 2) << '\n';
  std::cout << mult(3, 2) << '\n';
  std::cout << mult('1', 2) << '\n'; // '1' = 49, 'b' = 98
  // std::cout << mult("Hello", 2) << '\n'; // won't compile

  return 0;
}

template <typename T>
T mult(T a, int i) {
  return a * i;
}