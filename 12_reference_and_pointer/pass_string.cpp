#include <iostream>
#include <string>
#include <string_view>

void print_first_n(std::string_view sv, int n) {
  std::cout << sv.substr(0, n) << '\n';
}

int main(void) {
  std::string str{"Hello, world!"};
  std::string_view sv{str};
  print_first_n(sv, 6);
  return 0;
}