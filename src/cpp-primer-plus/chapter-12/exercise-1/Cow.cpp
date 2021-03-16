
#include "Cow.h"
#include <cstring>
#include <iostream>

Cow::Cow() {
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char *name, const char *hobby, double weight) {
    std::strcpy(this->name, name);

    int length;
    length = std::strlen(hobby);
    this->hobby = new char[length];
    std::strcpy(this->hobby, hobby);

    this->weight = weight;
}

Cow::Cow(const Cow &cow) {
    std::strcpy(this->name, cow.name);

    // add new hobby
    int length;
    length = std::strlen(hobby);
    hobby = new char[length];
    std::strcpy(this->hobby, hobby);

    this->weight = cow.weight;
}

Cow::~Cow() {
    name[0] = '\0';
    delete[]hobby;
    weight = 0;
}

Cow &Cow::operator=(const Cow &cow) {
    std::strcpy(this->name, cow.name);

    delete[]hobby;

    int length = std::strlen(cow.hobby);
    this->hobby = new char[length];
    std::strcpy(this->hobby, cow.hobby);

    this->weight = cow.weight;
    return *this;
}

void Cow::showCow() const {
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}
