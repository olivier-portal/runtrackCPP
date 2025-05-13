//
// Created by porta on 12/05/2025.
//
#include <iostream>

void isLeapYear(const int a) {
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
        std::cout << "The year: " << a << " is a leap year" << std::endl;
    }
    else {
        std::cout << "The year: " << a << " isn't a leap year" << std::endl;
    }
}

int main() {
    int x;
    std::cout << "Enter a year to know if it is a leap year or not: " << std::endl;
    std::cin >> x;
    isLeapYear(x);
    return 0;
}