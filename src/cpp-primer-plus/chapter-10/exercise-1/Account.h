
#ifndef CPP_DEMO_ACCOUNT_H
#define CPP_DEMO_ACCOUNT_H

#include <string>

class Account {
private:
    std::string name;
    std::string number;
    double deposit;
public:
    Account(std::string name, std::string number, double deposit = 0.0);

    Account();

    ~Account();

    void show() const;

    void store(double money);

    void draw(double money);
};


#endif //CPP_DEMO_ACCOUNT_H
