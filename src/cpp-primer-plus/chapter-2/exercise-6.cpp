#include <iostream>

void print(int hour, int minute);

void print(int hour, int minute) {
    std::cout << "Time : " << hour << ":" << minute << std::endl;
}

int main() {
    int hourNumber;
    int minuteNumber;
    std::cout << "请用户输入小时数 : ";
    std::cin >> hourNumber;
    std::cout << "请用户输入分钟数 : ";
    std::cin >> minuteNumber;
    print(hourNumber, minuteNumber);
    return 0;
}