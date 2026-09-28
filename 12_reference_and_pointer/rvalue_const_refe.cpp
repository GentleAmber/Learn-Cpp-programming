#include <iostream>

int main(void) {
  short num{1};
  const int& ref{num}; // compiler converts short to int with a temporary object, 
                      // then reference ref to the temporary object.
  num--; // now num = 1

  std::cout << "num=" << num << '\n';
  std::cout << "ref=" << ref << '\n'; // ref should stay intact, since it doesn't 
  // refer to the object num

  return 0;
}