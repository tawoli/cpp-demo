
#include "Cd.h"
#include <iostream>
#include <cstring>

Cd::Cd(const char *performers, const char *label, int selections, double playtime) {
    std::strcpy(this->performers, performers);
    std::strcpy(this->label, label);
    this->selections = selections;
    this->playtime = playtime;
}

Cd::Cd() {
    performers[0] = '\0';
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


