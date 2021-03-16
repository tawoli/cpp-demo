
#include <iostream>

int main() {
    using namespace std;
    cout << "请开始输入数字 : ";
    int sum = 0;
    int number;
    cin >> number;
    while (number != 0) {
        sum += number;
        cout << "输入的数字之和为 : " << sum << endl;
        cin >> number;
    }
    cout << "程序结束" << endl;
    return 0;
}