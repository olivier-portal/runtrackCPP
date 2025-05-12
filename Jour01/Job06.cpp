//
// Created by porta on 12/05/2025.
//

#include <iostream>
#include <bits/ostream.tcc>

void multiplicationTable(const int a) {
    for (int i = 0; i < 10; i++) {
        std::cout << a << " x " << i << " = " << a * i << std::endl;
    }
}

int main() {
    int x;
    std::cout << "Enter a number to get it's multiplication's table" << std::endl;
    std::cin >> x;
    std::cout << "The multiplication table of " << x << " is: ";
    multiplicationTable(x);
    return 0;
}
