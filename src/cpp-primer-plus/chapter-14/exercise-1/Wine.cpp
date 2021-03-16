
#include <iostream>
#include "Wine.h"

Wine::Wine() : label("none"), years(0), data(ArrayInt(0), ArrayInt(0)) {
}

Wine::Wine(const char *label, int year, const int *years, const int *bottles) : label(label), years(year), data(ArrayInt(years, year), ArrayInt(bottles, year)) {
}

Wine::Wine(const char *label, int years) : label(label), years(years), data(ArrayInt(years), ArrayInt(years)) {
}

void Wine::getBottles() {
    int years, bottles;  // year, bottle

    std::cout << "Enter " << label << " data for " << years << " year(s)" << std::endl;
    for (int i = 0; i < years; ++i) {
        std::cout << "Enter year:";
        std::cin >> years;
        data.first()[i] = years;
        std::cout << "Enter bottles for that year: ";
        std::cin >> bottles;
        data.second()[i] = bottles;
    }
}

int Wine::sum() const {
    return data.second().sum();
}

void Wine::show() const {
    std::cout << "Wine: " << label << std::endl;
    std::cout << "Year  " << "  Bottles" << std::endl;
    for (int i = 0; i < years; ++i)
    {
        std::cout << data.second()[i] << "    ";
        std::cout << data.first()[i] << std::endl;
    }
}
