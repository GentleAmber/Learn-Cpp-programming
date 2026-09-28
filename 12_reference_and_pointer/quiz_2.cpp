#include <iostream>
/*
Write a function named sort2 which allows the caller to pass 2
int variables as arguments. When the function returns, the
first argument should hold the lesser of the two values, and 
the second argument should hold the greater of the two values.
*/

void sort2(int& x, int& y) {
  int x_temp = x;
  int y_temp = y;
  x = x_temp < y_temp ? x_temp : y_temp;
  y = x_temp >= y_temp ? x_temp : y_temp;
}

int main(void) {
  int a1{4}, a2{1};
  sort2(a1, a2);
  std::cout << "a1=" << a1 << ", a2=" << a2 << '\n';
  return 0;
}