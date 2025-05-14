//
// Created by porta on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a = 22, b = 38, c;

        cout << "Entrez un nombre entier, s'il est compris entre les 2 nombres caches vous avez gagne:\n";
        cin >> c;

        if (c < a || c > b) {
            cout << "Perdu !" << endl;
        }
        else {
            cout << "Gagne !" << endl;
            }
    return 0;
}

