
#include "Cd.h"
#include <iostream>

Cd::Cd(const char *performers, const char *label, int selections, double playtime) {
    this->performers = new char[std::strlen(performers) + 1];
    std::strcpy(this->performers, performers);
    this->label = new char[std::strlen(label) + 1];
    std::strcpy(this->label, label);
    this->selections = selections;
    this->playtime = playtime;
}

Cd::Cd() {
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

void Cd::report() const {
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}


Cd::Cd(const Cd &cd) {
    this->performers = new char[std::strlen(cd.performers) + 1];
    std::strcpy(this->performers, cd.performers);

    this->label = new char[std::strlen(cd.label) + 1];
    std::strcpy(this->label, cd.label);

    this->selections = cd.selections;
    this->playtime = cd.playtime;
}

Cd::~Cd() {
    delete[] performers;
    delete[] label;
}

Cd &Cd::operator=(const Cd &cd) {
    if (this == &cd)
        return *this;

    delete [] performers;
    performers = new char [std::strlen(cd.performers) + 1];
    std::strcpy(performers, cd.performers);

    delete [] label;
    label = new char [std::strlen(cd.label) + 1];
    std::strcpy(label, cd.label);

    selections = cd.selections;
    playtime = cd.playtime;

    return *this;
}