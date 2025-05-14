//
// Created by porta on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int i = 0, n, sum = 0;
    while (i < 4) {
        cout << "Donnez un entier: ";
        cin >> n;
        sum += n;
        i++;
    }
    cout << "Somme: " << sum << endl;
    return 0;
}