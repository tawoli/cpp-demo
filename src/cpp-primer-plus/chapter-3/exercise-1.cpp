
#include <iostream>

int main() {
    std::cout << "请输入自己的身高（英寸） : ____\b\b\b\b";
    double heightInch;
    std::cin >> heightInch;
    const double INCH_PER_FEET = 12;
    double heightFeet = heightInch / INCH_PER_FEET;
    std::cout << "身高（英尺） : " << heightFeet << std::endl;
    return 0;
}