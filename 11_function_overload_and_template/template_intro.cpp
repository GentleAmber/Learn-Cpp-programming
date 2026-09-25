#include <iostream>

template<typename T>
T max(T a, T b);

int main(void) {
  std::cout << max(11.5, 0.3) << '\n';
  std::cout << max(3, 1) << '\n';
  std::cout << max(5u, 3u) << '\n';
  std::cout << max('c', 'a') << '\n';

  return 0;
}

template<typename T>
T max(T a, T b) {
  return a > b ? a : b;
}