//
// Created by porta on 13/05/2025.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 5) {
        cout << "The number must be greater than 5" << endl;
        return 1;
    }

    for (int i = 5; i <= n; i++) {
        sum += static_cast<int>(pow(i, 3));
    }

    cout << "The sum from 5^3 to " << n << "^3 is: " << sum << endl;
}