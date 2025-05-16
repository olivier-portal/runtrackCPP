//
// Created by porta on 16/05/2025.
//
#include <iostream>
#include <string>

int main() {
    std::string myString = "vive la plateforme !";

    for (char& c : myString) {
        c = toupper(c);
    }

    std::cout << myString << std::endl;

    return 0;
}