//
// Created by porta on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    double note = -1;

    while (note < 0 || note > 20) {
        cout << "Entrer une note entre 0 et 20:\n";
        cin >> note;

        if (note < 0 || note > 20) {
            cout << "Note invalide, veuillez recommencer:\n";
        }
    }

    if (note <= 10) {
        cout << "Non validé" << note << endl;
    } else {
        cout << "Validé" << note << endl;
    }
}
