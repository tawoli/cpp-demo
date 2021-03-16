
#include "LacksDMA.h"

LacksDMA::LacksDMA(const char *color, const char *label, int rating) : ABC(label, rating) {
    std::strcpy(this->color, color);
}

LacksDMA::LacksDMA(const char *color, const ABC &abc) : ABC(abc) {
    std::strcpy(this->color, color);
}

void LacksDMA::view() const {
    ABC::view();
    std::cout << color << std::endl;
}

std::ostream &operator<<(std::ostream &os, const LacksDMA &lacksDma) {
    os << lacksDma.color << ", " << (const ABC &) lacksDma;
    return os;
}
