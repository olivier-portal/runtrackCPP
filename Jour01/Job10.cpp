//
// Created by porta on 13/05/2025.
//
#include <iostream>

double taxCalculator(const double price, const double quantity, const double tva) {
        const double totalPrice = price * quantity * (tva / 100.0 + 1);
        return totalPrice;
}

int main() {
        double price, quantity, tva;
        std::cout << "What is the price of your vegetables in euros?";
        std::cin >> price;
        std::cout << "What is the quantity of your vegetables in kg?";
        std::cin >> quantity;
        std::cout << "What is the tax cost of your vegetable?";
        std::cin >> tva;
        std::cout << "The total cost of your vegetable is: " << taxCalculator(price, quantity, tva) << " euros";
}