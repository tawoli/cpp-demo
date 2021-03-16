
#include "Classic.h"
#include <iostream>

Classic::Classic(const char *performers, const char *label, const char *works, int selections, double playtime) : Cd(performers, label, selections, playtime) {
    std::strcpy(this->works, works);
}

// 会自动调用基类的默认构造函数
Classic::Classic() {
    works[0] = '\0';
}

void Classic::report() const {
    Cd::report();
    std::cout << "works: " << works << std::endl;
}
