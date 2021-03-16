
#include "Gunslinger.h"
#include <iostream>

double Gunslinger::getDrawTime() const {
    return drawTime;
}

int Gunslinger::getNotches() const {
    return notches;
}

Gunslinger::Gunslinger(const char *firstName, const char *lastName, double drawTime, int notches) : Person(firstName, lastName), drawTime(drawTime), notches(notches) {

}

void Gunslinger::show() const {
    Person::show();
    std::cout << "Draw: " << drawTime << std::endl;
    std::cout << "Notches: " << notches << std::endl;
}

void Gunslinger::set() {
    Person::set();
    std::cout << "Enter Drawtime: ";
    std::cin >> drawTime;
    std::cout << "Enter Notches: ";
    std::cin >> notches;
}
