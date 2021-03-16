#include "sales.h"

namespace SALES {
    void setSales(Sales &sales, const double array[], int arrayLength) {
        for (int i = 0; i < QUARTERS; ++i) {
            if (i < arrayLength) {
                sales.sales[i] = array[i];
            } else {
                sales.sales[i] = 0.0;
            }
        }

        double sum = 0.0;
        double max = sales.sales[0];
        double min = sales.sales[0];
        for (int i = 0; i < arrayLength; ++i) {
            double current = sales.sales[i];
            if (current > max) {
                max = current;
            }
            if (current < min) {
                min = current;
            }
            sum += current;
        }
        sales.average = sum / arrayLength;
        sales.max = max;
        sales.min = min;
    }

    void setSales(Sales &sales) {
        using namespace std;

        cout << "Enter sales:" << endl;
        for (int i = 0; i < QUARTERS; ++i) {
            cout << "sales[" << i << "]: ";
            cin >> sales.sales[i];
        }

        // get average, max, min
        double sum = 0.0;
        double max = sales.sales[0];
        double min = sales.sales[0];
        for (double current : sales.sales) {
            if (current > max)
                max = current;
            if (current < min)
                min = current;
            sum += current;
        }
        sales.average = sum / (float) QUARTERS;
        sales.max = max;
        sales.min = min;
    }

    void showSales(const Sales &sales) {
        using namespace std;

        // show sales
        cout << "sales: ";
        for (double sale : sales.sales)
            cout << sale << " ";
        cout << endl;

        // show average
        cout << "average: " << sales.average << endl;

        // show max and min
        cout << "max: " << sales.max << endl;
        cout << "min: " << sales.min << endl;
    }
}