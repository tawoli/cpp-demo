
#include "BadDude.h"


double BadDude::gDraw() const {
    return Gunslinger::getDrawTime();
}

double BadDude::cDraw() const {
    return PokerPlayer::draw();
}

void BadDude::show() const {
    Gunslinger::show();
    PokerPlayer::show();
}

void BadDude::set() {
    Gunslinger::set();
}
