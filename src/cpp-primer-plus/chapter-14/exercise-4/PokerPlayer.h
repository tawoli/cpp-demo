
#ifndef CPP_DEMO_POKERPLAYER_H
#define CPP_DEMO_POKERPLAYER_H


#include "Person.h"

class PokerPlayer : virtual public Person {
public:
    explicit PokerPlayer(const char *firstName = "none", const char *lastName = "none");

    int draw() const;
};


#endif //CPP_DEMO_POKERPLAYER_H
