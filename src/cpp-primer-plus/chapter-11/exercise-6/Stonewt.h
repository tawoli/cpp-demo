
#ifndef CPP_DEMO_STONEWT_H
#define CPP_DEMO_STONEWT_H


class Stonewt {
private:
    // lbs : 磅 , stn : 英石
    // 1 英石 = 14 磅
    static const int LBS_PER_STN = 14;
    int stone;
    double poundsLeft;
    double pounds;
public:
    explicit Stonewt(double);

    Stonewt(int, double);

    Stonewt();

    ~Stonewt() = default;

    void showLbs() const;

    void showStn() const;

    // comparation operator
    bool operator<(const Stonewt &stonewt) const {
        return pounds < stonewt.pounds;
    }

    bool operator>(const Stonewt &stonewt) const {
        return pounds > stonewt.pounds;
    }

    bool operator==(const Stonewt &stonewt) const {
        return pounds == stonewt.pounds;
    }

    bool operator<=(const Stonewt &stonewt) const {
        return pounds <= stonewt.pounds;
    }

    bool operator>=(const Stonewt &stonewt) const {
        return pounds >= stonewt.pounds;
    }

    bool operator!=(const Stonewt &stonewt) const {
        return pounds != stonewt.pounds;
    }
};


#endif //CPP_DEMO_STONEWT_H
