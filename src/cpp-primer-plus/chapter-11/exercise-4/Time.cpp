
#include "Time.h"

Time::Time() {
    hours = 0;
    minutes = 0;
}

Time::Time(int hours, int minutes) {
    this->hours = hours;
    this->minutes = minutes;
}

void Time::addMin(int minutes) {
    this->minutes += minutes;
    this->hours += minutes / 60;
    this->minutes %= 60;
}

void Time::addHour(int hours) {
    this->hours += hours;
}

void Time::reset(int hours, int minutes) {
    this->hours = hours;
    this->minutes = minutes;
}

Time operator+(const Time &t1, const Time &t2) {
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time &t1, const Time &t2) {
    Time diff;
    int tot1, tot2;
    tot1 = t2.minutes + 60 * t2.hours;
    tot2 = t1.minutes + 60 * t1.hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time operator*(const Time &time, double minutes) {
    Time result;
    long totalminutes = long(time.hours * minutes * 60 + time.minutes * minutes);
    result.hours = int(totalminutes / 60);
    result.minutes = int(totalminutes % 60);
    return result;
}

std::ostream &operator<<(std::ostream &os, const Time &time) {
    os << time.hours << " hours, " << time.minutes << " minutes";
    return os;
}
