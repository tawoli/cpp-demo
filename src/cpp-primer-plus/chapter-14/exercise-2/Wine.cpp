#include <iostream>
#include "Wine.h"

void Wine::getBottles() {
    int years, bottle;  // year, bottle

    std::cout << "Enter " << getLabel() << " data for " << years << " year(s)" << std::endl;
    for (int i = 0; i < years; ++i) {
        std::cout << "Enter year:";
        std::cin >> years;
        PairInt::first()[i] = years;
        std::cout << "Enter bottles for that year: ";
        std::cin >> bottle;
        PairInt::second()[i] = bottle;
    }
}

void Wine::show() const {
    std::cout << "Wine: " << getLabel() << std::endl;
    std::cout << "Year  " << "  Bottles" << std::endl;
    for (int i = 0; i < years; ++i) {
        std::cout << PairInt::second()[i] << "    ";
        std::cout << PairInt::first()[i] << std::endl;
    }
}