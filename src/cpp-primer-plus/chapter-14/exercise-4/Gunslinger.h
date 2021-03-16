
#ifndef CPP_DEMO_GUNSLINGER_H
#define CPP_DEMO_GUNSLINGER_H


#include "Person.h"

// 虚基类 : 派生类只保留一份间接基类
class Gunslinger : virtual public Person {
private:
    double drawTime;
    int notches;
public:
    explicit Gunslinger(const char *firstName = "none", const char *lastName = "none", double drawTime = 0.0, int notches = 0);

    ~Gunslinger() override = default;

    double getDrawTime() const;

    int getNotches() const;

    void show() const override;

    void set() override;
};


#endif //CPP_DEMO_GUNSLINGER_H
