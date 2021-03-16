#include <iostream>

double calculateHarmonicMean(double, double);

int main() {
    using namespace std;

    double x;
    double y;

    cout << "输入两个数（两个其中一个为0中止） : ";
    cin >> x >> y;

    while (x != 0 && y != 0) {
        double harmonicMean = calculateHarmonicMean(x, y);
        cout << "调和平均数 : " << harmonicMean << endl;
        cout << "再次输入 : ";
        // cin : 以空格、tab、换行符为结束 , 继续读取时 , 会忽略空格、tab、换行符
        cin >> x >> y;
    }
    return 0;
}

double calculateHarmonicMean(double x, double y) {
    return 2 * x * y / (x + y);
}
