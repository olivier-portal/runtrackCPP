//
// Created by porta on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Entrer un nombre entier:\n";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " est un multiple de 3 et de 5" << endl;
        }
        else if (i % 3 == 0) {
            cout << i << " est un multiple de 3" << endl;
        }
        else if (i % 5 == 0) {
            cout << i << " est un multiple de 5" << endl;
        }
        else {
            cout << i << endl;
        }
    }
}