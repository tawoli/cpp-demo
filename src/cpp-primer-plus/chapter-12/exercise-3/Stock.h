
#ifndef CPP_DEMO_STOCK_H
#define CPP_DEMO_STOCK_H


class Stock {
private:
    char *company;
    int shares;
    double shareVal;
    double totalVal{};

    void setTotalVal() {
        totalVal = shares * shareVal;
    }

public:
    Stock();

    explicit Stock(const char *, long = 0, double = 0.0);

    ~Stock();

    void buy(long, double);

    void sell(long, double);

    void update(double);

    void show() const;

    const Stock &topval(const Stock &) const;
};


#endif //CPP_DEMO_STOCK_H
