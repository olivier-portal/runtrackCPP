//
// Created by porta on 13/05/2025.
//
#include <iostream>
#include <string>

using namespace std;

class Aquatic {
protected:
    double vitesseNage;

public:
    Aquatic(double v) : vitesseNage(v){}

    virtual void nage() {
        cout << "Je nage a: " << vitesseNage << " m/s" << endl;
    }

    virtual ~Aquatic() = default; // destucteur virtuel
};

class Terrestre {
protected:
    double vitesseMarche;

public:
    Terrestre(double v) : vitesseMarche(v){}

    virtual void marche() {
        cout << "Je marche a: " << vitesseMarche << " m/s" << endl;
    }

    virtual ~Terrestre() = default; // destucteur virtuel
};

class Pinguoin : public Aquatic, public Terrestre {
private:
    string nom;

public:
    Pinguoin(string n, double vNage, double vMarche) : Aquatic(vNage), Terrestre(vMarche), nom(n) {}

        void sePresenter() {
            cout << "Bonjour, je suis le pingouin " << nom << " !" << endl;
        }

        void nage() {
            cout << "Je nage a: " << vitesseNage << " m/s" << endl;
        }

        void marche() {
            cout << "Je marche a: " << vitesseMarche << " m/s" << endl;
        }
};

int main() {
    Pinguoin p("Happy feet", 2.5, 0.7);

    p.sePresenter();
    p.nage();
    p.marche();

    return 0;
}