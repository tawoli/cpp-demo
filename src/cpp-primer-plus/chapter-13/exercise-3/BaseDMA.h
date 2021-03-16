
#ifndef CPP_DEMO_BASEDMA_H
#define CPP_DEMO_BASEDMA_H

#include <ostream>
#include "ABC.h"

class BaseDMA : public ABC {
private:
public:
    explicit BaseDMA(const char * = "null", int = 0);

    friend std::ostream &operator<<(std::ostream &, const ABC &);
};


#endif //CPP_DEMO_BASEDMA_H
