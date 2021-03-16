#include <iostream>

void silly(const char *, int n = 0);

int main() {
    using namespace std;

    char str[10] = "zhuyupeng";

    // call 1
    cout << "call 1" << endl;
    silly(str);
    // call 2
    cout << "call 2" << endl;
    silly(str);
    // call 3
    cout << "call 3" << endl;
    silly(str, 1);

    return 0;
    return 0;
}

void silly(const char *str, int n) {
    using namespace std;
    static int times = 1;
    if (n != 0) {
        for (int i = 0; i < times; ++i) {
            cout << str << endl;
        }
    } else {
        cout << str << endl;
    }
    times++;
}
