#include <iostream>

template<typename T, typename U>
// use auto to let compiler decide the return type to avoid 
// data loss during conversion
auto max(T a, U b) { 
  return a > b ? a : b;
}

int main(void) {
  std::cout << max(3.5, 1) << '\n';
  std::cout << max('a', static_cast<char>(1)) << '\n'; 

  return 0;
}