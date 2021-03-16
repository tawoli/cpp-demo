
#ifndef CPP_DEMO_CLASSIC_H
#define CPP_DEMO_CLASSIC_H


#include "Cd.h"

class Classic : public Cd {
private:
    char works[100]{};
public:
    Classic(const char *performers, const char *label, const char *works, int selections, double playtime);

    Classic();

    ~Classic() override = default;

    void report() const override;
};


#endif //CPP_DEMO_CLASSIC_H
