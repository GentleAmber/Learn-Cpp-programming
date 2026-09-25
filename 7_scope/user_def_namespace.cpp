#include <iostream>

namespace Foo {
  int doSomething(int x, int y) {
    return x + y;
  }
}

namespace Goo {
  int doSomething(int x, int y) {
    return x * y;
  }
}

int main(void) {
  std::cout << "Foo::doSomething(4,5) = " << Foo::doSomething(4,5) << '\n';
  std::cout << "Goo::doSomething(4,5) = " << Goo::doSomething(4,5) << '\n';

  return 0;
}