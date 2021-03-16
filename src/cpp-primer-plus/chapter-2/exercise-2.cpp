
#include <iostream>

int main() {
    std::cout << "一浪等于220码" << std::endl;
    std::cout << "请输入一个以浪为单位的距离 : ";
    int waveNumber;
    std::cin >> waveNumber;
    std::cout << "转换为码 : " << waveNumber * 220 << std::endl;
    return 0;
}