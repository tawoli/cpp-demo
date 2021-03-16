
#include <iostream>

int main() {
    using namespace std;

    cout << "输入两个整数 : ";
    int min;
    cin >> min;
    int max;
    cin >> max;

    int sum = 0;
    for (int i = min; i <= max; ++i) {
        sum += i;
    }
    cout << "和 : " << sum << endl;
    return 0;
}