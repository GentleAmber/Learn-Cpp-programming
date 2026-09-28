#include <iostream>
#include <optional>

void checkId(std::optional<const int> id = std::nullopt) {
  if (!id) {
    std::cout << "You don't have an Id.\n";
  } else {
    std::cout << "Your Id is: " << *id << '\n';
  }
}

int main(void) {
  checkId(12345);
  checkId();

  return 0;
}