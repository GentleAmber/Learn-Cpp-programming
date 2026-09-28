#include <iostream>

int y{5};

void point_to_y(int*& p) {
  /* p是对于int指针（int*）的引用，因此可以直接通过p=&y修改指针的值（即地址） */
  p = &y;
}

int main(void) {
  int x{10};
  int* ip{&x};
  std::cout << "ip is pointing to address: " << ip << "\nip's value is: " << *ip << '\n';
  
  point_to_y(ip);
  std::cout << "ip is pointing to address: " << ip << "\nip's value is: " << *ip << '\n';

  return 0;
}