#include "sales.h"

int main() {
    using namespace SALES;

    Sales sales1{}, sales2{};

    // set data
    setSales(sales1);
    // interactive
    double array[3] = {3.0, 4.0, 1.0};
    setSales(sales2, array, 3);

    // show struct
    showSales(sales1);
    showSales(sales2);

    return 0;
}