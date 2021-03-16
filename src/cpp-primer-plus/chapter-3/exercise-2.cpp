
#include <iostream>

const double INCH_PER_FEET = 12.0;
const double METER_PER_INCH = 0.0254;
const double POUND_PER_KILOGRAM = 2.2;

int main() {
    using namespace std;

    cout << "请输入身高英尺 : ____\b\b\b\b";
    double feet;
    cin >> feet;

    cout << "请输入身高英寸 : ____\b\b\b\b";
    double inch;
    cin >> inch;

    cout << "请输入体重（磅） : ____\b\b\b\b";
    double pound;
    cin >> pound;

    double meter = (feet * INCH_PER_FEET + inch) * METER_PER_INCH;
    double kilogram = pound * POUND_PER_KILOGRAM;
    double bmi = kilogram / meter;

    cout << "BMI : " << bmi << endl;
    return 0;
}