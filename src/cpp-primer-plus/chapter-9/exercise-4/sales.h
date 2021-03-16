
#ifndef CPP_DEMO_SALES_H
#define CPP_DEMO_SALES_H

#include <iostream>

namespace SALES {
    const int QUARTERS = 4;
    struct Sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &, const double [], int);

    void setSales(Sales &);

    void showSales(const Sales &);
}

#endif //CPP_DEMO_SALES_H
