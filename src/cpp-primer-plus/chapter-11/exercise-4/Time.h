
#ifndef CPP_DEMO_TIME_H
#define CPP_DEMO_TIME_H

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int, int = 0);

    void addMin(int);

    void addHour(int);

    void reset(int hour = 0, int minute = 0);

    // friend
    friend Time operator+(const Time &, const Time &);

    friend Time operator-(const Time &, const Time &);

    // Time * 2.75 将调用此函数
    friend Time operator*(const Time &, double);

    // 非成员函数调用 , 2.75 * Time 这种形式的调用将调用此函数
    friend Time operator*(double minute, const Time &time) {
        return time * minute;
    }

    // cout << Time 将调用此函数 ; 若使用非友元 , 则调用方式为 Time << cout
    // 为了能够连续调用 , cout << Time << Time , 返回值必须是ostream &
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};


#endif //CPP_DEMO_TIME_H
