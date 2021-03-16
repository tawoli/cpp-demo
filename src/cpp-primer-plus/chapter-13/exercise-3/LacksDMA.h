
#ifndef CPP_DEMO_LACKSDMA_H
#define CPP_DEMO_LACKSDMA_H

#include "ABC.h"

class LacksDMA : public ABC {
private:
    static const int COLOR_LEN = 40;
    char color[COLOR_LEN]{};
public:
    explicit LacksDMA(const char * = "blank", const char * = "null", int = 0);

    LacksDMA(const char *, const ABC &);

    void view() const override;

    friend std::ostream &operator<<(std::ostream &, const LacksDMA &);
};


#endif //CPP_DEMO_LACKSDMA_H
