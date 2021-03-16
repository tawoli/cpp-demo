
#include "Classic.h"
#include <iostream>

Classic::Classic(const char *works, const char *performers, const char *label, int selections, double playtime) : Cd(performers, label, selections, playtime) {
    this->works = new char[std::strlen(works) + 1];
    std::strcpy(this->works, works);
}

Classic::Classic(const Classic &classic) : Cd(classic) {
    this->works = new char[std::strlen(classic.works) + 1];
    std::strcpy(this->works, classic.works);
}

Classic::Classic() {
    works = new char[1];
    works[0] = '\0';
}

Classic::~Classic() {
    delete[] works;
}

void Classic::report() const {
    Cd::report();
    std::cout << "works: " << works << std::endl;
}


Classic &Classic::operator=(const Classic &classic) {
    if (this == &classic)
        return *this;

    Cd::operator=(classic);
    delete[] works;
    works = new char[std::strlen(classic.works) + 1];
    std::strcpy(works, classic.works);

    return *this;
}