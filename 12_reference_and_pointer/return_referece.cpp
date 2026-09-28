#include <iostream>
#include <string>


const std::string& getProgramName(){
  // The object being returned must exist after local function ends
  // e.g. by being a static object
  static const std::string name{"Calculator"};
  
  // returns const reference
  return name;
}

// Returns the bigger number's reference
int& max(int& a, int&b) {
  return a > b ? a : b;
}

int main(void) {
  /* Return reference to a static local variable */
  std::cout << "This program's name is " << getProgramName() << '\n';
  
  /* Modify variable with their returned reference */
  int x{5};
  int y{10};

  max(x,y) = 100; // Modify the larger one between x and y to 100
  std::cout << "x=" << x << ", y=" << y << '\n';
  
  return 0;
}