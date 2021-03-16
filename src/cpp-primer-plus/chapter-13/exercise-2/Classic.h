
#ifndef CPP_DEMO_CLASSIC_H
#define CPP_DEMO_CLASSIC_H

#include "Cd.h"

class Classic : public Cd {
private:
    char *works;
public:
    Classic(const char *works, const char *performers, const char *label, int selections, double playtime);

    Classic(const Classic &);

    Classic();

    ~Classic() override;

    void report() const override;

    // overloaded functions
    Classic &operator=(const Classic &);
};


#endif //CPP_DEMO_CLASSIC_H
