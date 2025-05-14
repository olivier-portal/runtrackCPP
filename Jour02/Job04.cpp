//
// Created by porta on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultat;
    char operateur;

    // Entrez un premier nombre
    cout << "Donnez un nombre:\n";
    cin >> num1;

    // Entrez un opérateur
    cout << "Entrez un operateur (+, -, *, / ):\n";
    cin >> operateur;

    // Entrez un deuxième nombre
    cout << "Donnez un autre nombre:\n";
    cin >> num2;

    switch (operateur) {
        case '+':
            resultat = num1 + num2;
            break;
        case '-':
            resultat = num1 - num2;
            break;
        case '*':
            resultat = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
            }
            else {
               cout << "Erreur: On ne peut pas diviser par 0\n" << endl;
            }
            break;
            default:
                cout << "Operateur invalide" << endl;
                return 1;

    }
    cout << "Resultat: " << resultat << endl;
    return 0;
}