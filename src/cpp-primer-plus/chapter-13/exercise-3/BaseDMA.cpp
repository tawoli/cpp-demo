
#include "BaseDMA.h"

BaseDMA::BaseDMA(const char *label, int rating) : ABC(label, rating) {
}

std::ostream &operator<<(std::ostream &os, const BaseDMA &baseDma) {
    // 调用abc的<<方法
    os << (const ABC &) baseDma;
    return os;
}
