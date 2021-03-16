#include <iostream>
#include "Cow.h"

int main() {
    Cow cow;
    Cow cow1 = Cow("zhuyupeng", "coding", 120);
    cow1.showCow();
    const Cow& cow2 = cow1;
    cow2.showCow();
    cow = cow2;
    cow.showCow();
    return 0;
}