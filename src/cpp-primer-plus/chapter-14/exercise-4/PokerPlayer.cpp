
#include "PokerPlayer.h"

PokerPlayer::PokerPlayer(const char *firstName, const char *lastName) : Person(firstName, lastName) {
}

int PokerPlayer::draw() const {
    srand(time(0));
    return int(rand()) % 52;
}
