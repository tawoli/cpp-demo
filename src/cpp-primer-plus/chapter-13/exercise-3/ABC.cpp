
#include "ABC.h"

ABC::ABC(const char *label, int rating) {
    this->label = new char[std::strlen(label) + 1];
    std::strcpy(this->label, label);
    this->rating = rating;
}

ABC::ABC(const ABC &abc) {
    this->label = new char[std::strlen(abc.label) + 1];
    std::strcpy(this->label, abc.label);
    this->rating = abc.rating;
}

ABC::~ABC() {
    delete[] label;
}

void ABC::view() const {
    std::cout << "label: " << label << std::endl;
    std::cout << "rating: " << rating << std::endl;
}

ABC &ABC::operator=(const ABC &abc) {
    if (this == &abc)
        return *this;

    delete[] this->label;
    this->label = new char[std::strlen(abc.label) + 1];
    std::strcpy(this->label, abc.label);

    this->rating = abc.rating;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const ABC &abc) {
    os << abc.label << ", " << abc.rating;
    return os;
}
