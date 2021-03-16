#include <array>
#include <iostream>
#include <numeric>

const int SIZE = 10;

int main() {
    using namespace std;

    array<double, SIZE> donationArray{};

    cout << "输入donation（非数字则结束） : ";
    double donation;
    // cin >> : 会将读到的数字转换为double
    int i;
    for (i = 0; (i < SIZE) && (cin >> donation); ++i) {
        donationArray[i] = donation;
    }

    int n = i + 1;
    // 平均值
    double avg = accumulate(donationArray.begin(), donationArray.begin() + i, 0.0) / i;
    cout << "平均值 = " << avg << endl;

    // 输出大于平均值的数字
    cout << "大于平均值的数字 : " << endl;
    for (i = 0; i < n; ++i) {
        if (donationArray[i] > avg)
            cout << donationArray[i] << " ";
    }
    cout << endl;
    return 0;
}