
#include "Stonewt.h"
#include <iostream>

int main() {
    using namespace std;

    Stonewt array[6] = {Stonewt(50.0), Stonewt(100.0), Stonewt(150.0)};
    for (int i = 3; i < 6; ++i) {
        std::cout << "Stonewt[" << i << "]: ";
        double pounds;
        std::cin >> pounds;
        Stonewt st = Stonewt(pounds);
        array[i] = st;
    }
    Stonewt max = array[0], min = array[0];
    int num = 0;
    Stonewt eleven = Stonewt(11, 0.0);
    for (const auto & i : array) {
        if (i > max)
            max = i;
        if (i < min)
            min = i;
        if (i > eleven)
            num++;
    }

    std::cout << "max: " << std::endl;
    max.showLbs();
    std::cout << "min: " << std::endl;
    min.showLbs();
    std::cout << num << "elements > 11 stones" << std::endl;

    return 0;
}