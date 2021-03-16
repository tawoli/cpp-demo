
#include "HasDMA.h"


HasDMA::HasDMA(const char *style, const char *label, int rating) : ABC(label, rating) {
    this->style = new char[std::strlen(style) + 1];
    std::strcpy(this->style, style);
}

HasDMA::HasDMA(const char *style, const ABC &abc) : ABC(abc) {
    this->style = new char[std::strlen(style) + 1];
    std::strcpy(this->style, style);
}

HasDMA::HasDMA(const HasDMA &hasDma) : ABC(hasDma) {
    this->style = new char[std::strlen(hasDma.style) + 1];
    std::strcpy(style, hasDma.style);
}

HasDMA::~HasDMA() {
    delete[]style;
}

void HasDMA::view() const {
    ABC::view();
    std::cout << style << std::endl;
}

HasDMA &HasDMA::operator=(const HasDMA &hasDma) {
    if (this == &hasDma)
        return *this;
    ABC::operator=(hasDma);
    delete[] style;
    style = new char[std::strlen(hasDma.style) + 1];
    std::strcpy(style, hasDma.style);

    return *this;
}

std::ostream &operator<<(std::ostream &os, const HasDMA &hasDma) {
    os << hasDma.style << ", " << (const ABC &)hasDma;
    return os;
}
