
#ifndef CPP_DEMO_HASDMA_H
#define CPP_DEMO_HASDMA_H

#include "ABC.h"

class HasDMA : public ABC {
private:
    char *style;
public:
    explicit HasDMA(const char * = "none", const char * = "null", int = 0);

    HasDMA(const char *, const ABC &);

    HasDMA(const HasDMA &);

    ~HasDMA() override;

    void view() const override;

    HasDMA &operator=(const HasDMA &);

    friend std::ostream &operator<<(std::ostream &, const HasDMA &);
};


#endif //CPP_DEMO_HASDMA_H
