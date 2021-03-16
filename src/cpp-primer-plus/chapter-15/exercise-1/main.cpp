#include <iostream>
#include "Tv.h"
#include "Remote.h"

int main() {
    Tv t;
    t.settings();

    Remote r;
    r.showGMode();

    r.onOff(t);
    t.settings();

    t.setGMode(r);
    r.showGMode();

    return 0;
}