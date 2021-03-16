
#ifndef CPP_DEMO_BADDUDE_H
#define CPP_DEMO_BADDUDE_H


#include "PokerPlayer.h"
#include "Gunslinger.h"

class BadDude : public PokerPlayer, public Gunslinger {
public:
    double gDraw() const;

    double cDraw() const;

    void show() const override;

    void set() override;
};


#endif //CPP_DEMO_BADDUDE_H
