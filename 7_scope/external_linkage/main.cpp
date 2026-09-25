#include <iostream>
#include "physics.h"

int main(void) {
  std::cout << "After dropping for 3 seconds, a ball's speed is: " << speed(3) << '\n';
  std::cout << "After travelling for 1 year, a spaceship is " << light_distance(1) <<
  "km away from Earth.\n";
  std::cout << "int nomeaning's value is: " << get_nomeaning(); 
  return 0;
}