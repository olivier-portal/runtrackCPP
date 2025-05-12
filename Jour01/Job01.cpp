//
// Created by porta on 12/05/2025.
//
#include <iostream>

char c = '\x01';
short int p = 10;

int main()
{
    const int x = p + 3;
    constexpr int c = 5;
    constexpr int y = c + 1;
    const int z = p + c;
    const int w = 3 * p + 5 * c;
    std::cout << x << ", " << y << ", " << z << ", " << w << std::endl;
    return 0;
}