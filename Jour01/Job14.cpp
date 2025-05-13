//
// Created by porta on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0;

    cout << "Enter an integer:" << endl;
    cin >> n;

    while (n != 0) {
        const int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n = n / 10;
    }
    cout << "The reversed number is: " << reversedNumber << endl;
    return 0;
}