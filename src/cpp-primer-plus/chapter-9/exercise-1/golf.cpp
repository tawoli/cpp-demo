#include <cstring>
#include <iostream>

const int Len = 40;
struct golf {
    char fullname[Len];
    int handicap;
};

void setgolf(golf &golf, const char *name, int handicap) {
    strcpy(golf.fullname, name);
    golf.handicap = handicap;
}

int setgolf(golf &golf) {
    std::cout << "Enter fullname: ";
    std::cin.getline(golf.fullname, Len);
    if (golf.fullname[0]) {
        std::cout << "Enter handicap: ";
        std::cin >> golf.handicap;
        std::cin.get();
        return 1;
    } else
        return 0;
}

void handicap(golf &golf, int handicap) {
    golf.handicap = handicap;
}

void showgolf(const golf &golf) {
    std::cout << "fullname: " << golf.fullname << std::endl;
    std::cout << "handicap: " << golf.handicap << std::endl;
}

