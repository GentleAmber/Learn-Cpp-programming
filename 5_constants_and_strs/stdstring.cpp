#include <iostream>
#include <string>
#include <string_view>

int main(void) {
  std::string s{"Hello, world!\n"};
  std::string_view sv{s};
  std::cout << sv;

  s[1] = 'a';
  std::cout << sv;

  s = "Jack\n";
  sv = s;
  std::cout << sv;

  return 0;
}