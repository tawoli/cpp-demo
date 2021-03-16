
#ifndef CPP_DEMO_WINE_H
#define CPP_DEMO_WINE_H


#include <string>
#include <valarray>
#include "Pair.h"

class Wine : private std::string, private Pair<std::valarray<int>, std::valarray<int>> {
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairInt;
    int years{};
public:
    Wine() = default;

    Wine(const char *label, int year, const int years[], const int bottles[]) : std::string(label), years(year), PairInt(ArrayInt(years, year), ArrayInt(bottles, year)) {
    }

    Wine(const char *label, int years) : std::string(label), years(years), PairInt(ArrayInt(years), ArrayInt(years)) {
    }

    void getBottles();

    const std::string &getLabel() const {
        return (const std::string &) (*this);
    }

    int sum() const {
        return PairInt::second().sum();
    }

    void show() const;
};


#endif //CPP_DEMO_WINE_H
