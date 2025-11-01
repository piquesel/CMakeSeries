#include <iostream>
#include <concepts>

template <typename T>
    requires std::integral<T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << "Hello, World! We are using C++ 20 with CMake on Windows." << std::endl;
    std::cout << "Sum of 3 and 5 is: " << add(3, 5) << std::endl;
    return 0;
}