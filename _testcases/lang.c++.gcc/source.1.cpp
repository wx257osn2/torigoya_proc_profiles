#include <iostream>

int main()
{
    std::cerr << "Error output!" << std::endl;
    std::cout << "Standard output!" << std::endl;

    constexpr auto a = 1 + 2 + 3 + 4 + 5 + 6 + 7;
    std::cout << a << std::endl;
}
