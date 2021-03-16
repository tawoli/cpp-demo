
#include "Stonewt.h"
#include <iostream>

using namespace std;

Stonewt::Stonewt(double pounds) {
    this->stone = int(pounds) / LBS_PER_STN;
    this->poundsLeft = int(pounds) % LBS_PER_STN + pounds - int(pounds);
    this->pounds = pounds;
}

Stonewt::Stonewt(int stone, double pounds) {
    this->stone = stone;
    this->poundsLeft = pounds;
    this->pounds = stone * LBS_PER_STN + pounds;
}

Stonewt::Stonewt() {
    stone = 0;
    pounds = 0;
    poundsLeft = 0;
}

void Stonewt::showLbs() const {
    cout << stone << " stone, " << poundsLeft << " pounds\n";
}

void Stonewt::showStn() const {
    cout << pounds << " pounds\n";
}
