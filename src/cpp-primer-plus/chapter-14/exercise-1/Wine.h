
#ifndef CPP_DEMO_WINE_H
#define CPP_DEMO_WINE_H

#include <valarray>
#include <string>
#include "Pair.h"

class Wine {
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string label;
    PairArray data;
    int years;
public:
    Wine();

    Wine(const char *, int, const int[], const int[]);

    Wine(const char *, int);

    Wine(const Wine &) = default;

    void getBottles();

    const std::string & getLabel() const {
        return label;
    };

    int sum() const;

    void show() const;
};


#endif //CPP_DEMO_WINE_H
