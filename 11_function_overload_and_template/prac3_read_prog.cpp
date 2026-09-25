#include <iostream>

int foo(int n)
{
    return n + 10;
}

template <typename T>
int foo(T n)
{
    return n;
}

int main()
{
    std::cout << foo(1) << '\n'; // #1 match exactly to int foo(int)

    short s { 2 };
    std::cout << foo(s) << '\n'; // #2 match exact type first, so template is called

    std::cout << foo<int>(4) << '\n'; // #3 explicit call to template

    std::cout << foo<int>(s) << '\n'; // #4 explicit call to template

    std::cout << foo<>(6) << '\n'; // #5 explicit call to template

    return 0;
}