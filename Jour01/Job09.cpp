//
// Created by porta on 13/05/2025.
//
#include <algorithm>
#include <iostream>

int main() {
    int numbers[3];
    std::cout << "Enter three integers: ";
    std::cin >> numbers[0] >> numbers[1] >> numbers[2];
    std::sort(numbers, numbers + 3);
    std::cout << "The biggest number is: " << numbers[2] << std::endl;
}