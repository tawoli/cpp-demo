
#ifndef CPP_DEMO_GOLF_H
#define CPP_DEMO_GOLF_H

#include <iostream>

const int LEN = 40;
struct golf {
    char fullname[LEN];
    int handicap;
};

void setgolf(golf &, const char [], int);

int setgolf(golf &);

void handicap(golf &, int);

void showgolf(const golf &);

#endif //CPP_DEMO_GOLF_H
