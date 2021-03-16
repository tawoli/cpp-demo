#include <iostream>
#include "Stonewt.h"

Stonewt::Mode Stonewt::getStatus() const {
    return status;
}

void Stonewt::setStatus(Stonewt::Mode status) {
    Stonewt::status = status;
}

Stonewt::Stonewt(double pounds, Stonewt::Mode status) {
    stone = int(pounds) / LBS_PER_STN;
    poundsLeft = (int) pounds % LBS_PER_STN + pounds - int(pounds);
    this->pounds = pounds;
    this->status = status;
}

Stonewt::Stonewt(int stone, double pounds, Stonewt::Mode status) {
    this->stone = stone;
    this->poundsLeft = pounds;
    this->pounds = stone * LBS_PER_STN + pounds;
    this->status = status;
}

Stonewt::Stonewt() {
    this->stone = 0;
    this->pounds = 0;
    this->poundsLeft = 0;
    this->status = STN;
}


Stonewt Stonewt::operator+(const Stonewt &stonewt) const {
    double poundsSum = this->pounds + stonewt.pounds;
    Stonewt sum = Stonewt(poundsSum);
    return sum;
}

Stonewt Stonewt::operator-(const Stonewt &stonewt) const {
    double poundsDiff = this->pounds - stonewt.pounds;
    Stonewt diff = Stonewt(poundsDiff);
    return diff;
}

Stonewt Stonewt::operator*(double pounds) const {
    double multi = this->pounds * pounds;
    return Stonewt(multi);
}

std::ostream &operator<<(std::ostream &os, const Stonewt &stonewt) {
    if (stonewt.status == Stonewt::STN)
        std::cout << stonewt.stone << " stone, " << stonewt.poundsLeft << "pounds";
    else if (stonewt.status == Stonewt::PDS)
        std::cout << stonewt.pounds << " pounds";
    else
        std::cout << "Incorrect status";
    return os;
}
