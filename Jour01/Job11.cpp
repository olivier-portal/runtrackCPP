//
// Created by porta on 13/05/2025.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;
    cout << a << " and " << b << endl;
    swap(a, b);
    cout << a << " and " << b << endl;
}