#include <iostream>

void printRef(const double& x) {
  std::cout << x << '\n';
}

int return5() {
  return 5;
}

int main(void) {
  float a{5.0};
  int b{3};
  short c{4};
  long double d{3.141592653589793238L};
  char e{'c'};

  printRef(a);
  printRef(b);
  printRef(c);
  printRef(d); // long double to double is convertible though with data loss
  printRef(e);

  const int& irefc{return5()};
  std::cout << "irefc=" << irefc << '\n'; // 函数返回临时对象的生命周期因绑定引用被延长

  return 0;
}