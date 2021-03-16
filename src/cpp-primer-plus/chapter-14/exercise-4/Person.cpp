
#include "Person.h"
#include <iostream>

Person::Person(const char *firstName, const char *lastName) : firstName(firstName), lastName(lastName) {
}

void Person::show() const {
    std::cout << firstName << std::endl;
    std::cout << lastName << std::endl;
}

void Person::set() {
    std::cout << "Enter firstname: ";
    std::cin >> firstName;
    std::cout << "Enter lastname: ";
    std::cin >> lastName;
}
