//
// Created by porta on 12/05/2025.
//

#include <iostream>
#include <bits/ostream.tcc>

void isEven(const int a) {
    if (a % 2 == 0) {
        std::cout << "The number: " << a << " is even" << std::endl;
    }
    else {
        std::cout << "The number: " << a << " is odd" << std::endl;
    }
}

int main() {
    int x;
    std::cout << "Enter a number to know if it is even or odd: " << std::endl;
    std::cin >> x;
    isEven(x);
    return 0;
}
