
#ifndef CPP_DEMO_STONEWT_H
#define CPP_DEMO_STONEWT_H
#include <iostream>

class Stonewt {
public:
    enum Mode { STN, PDS };
private:
    // lbs : 磅 , stn : 英石
    // 1 英石 = 14 磅
    static const int LBS_PER_STN = 14;
    int stone;
    double pounds;
    double poundsLeft;
    Mode status;
public:
    explicit Stonewt(double, Mode = STN);

    Stonewt(int, double, Mode = STN);

    Stonewt();

    ~Stonewt() = default;

    // overloaded functions
    Stonewt operator+(const Stonewt &) const;

    Stonewt operator-(const Stonewt &) const;

    Stonewt operator*(double) const;

    Mode getStatus() const;

    void setStatus(Mode status);

    void setStn() {
        status = STN;
    }

    void setPds() {
        status = PDS;
    }

    // friend function
    friend Stonewt operator*(double p, const Stonewt &st) {
        return st * p;
    }

    friend std::ostream &operator<<(std::ostream &os, const Stonewt &st);
};


#endif //CPP_DEMO_STONEWT_H
