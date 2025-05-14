//
// Created by porta on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;

    while (a >= b) {
        cout << "Entrez deux nombres entier par ordre croissant, separes par un espace:\n";
        cin >> a >> b;

        if (a >= b) {
            cout << "Le deuxieme nombre doit etre superieur au premier. Reessayez:\n" << endl;
        }
    }

    for (int i = a; i <= b; i++) {
        cout << i << endl;
    }
    return 0;
}