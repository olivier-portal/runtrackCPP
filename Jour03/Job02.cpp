//
// Created by porta on 16/05/2025.
//
#include <iostream>
#include <cstring>

void supprimeVoyelles(char chaine[]) {

    int i = 0, j = 0;

    while (chaine[i] != '\0') {
        if (chaine[i] != 'a' && chaine[i] != 'e' && chaine[i] != 'i' &&
            chaine[i] != 'o' && chaine[i] != 'u' && chaine[i] != 'y') {
            chaine[j++] = chaine[i];
        }
        i++;
    }
    chaine[j] = '\0';
}

int main() {
    char chaine[100];
    std::strcpy(chaine, "vive la plateforme !");

    supprimeVoyelles(chaine);

    std::cout << chaine << std::endl;

    return 0;
}