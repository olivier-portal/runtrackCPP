//
// Created by porta on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    double average = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter an integer: ";
        cin >> n;
        average += n;
    }

    cout << "The average is: " << average << endl;
}