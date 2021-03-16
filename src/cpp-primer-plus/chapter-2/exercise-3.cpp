
#include <iostream>

void printMice();

void printSee();

int main() {
    printMice();
    printMice();
    printSee();
    printSee();
    return 0;
}

void printMice() {
    std::cout << "Three blind mice" << std::endl;
}

void printSee() {
    std::cout << "See how they run" << std::endl;
}