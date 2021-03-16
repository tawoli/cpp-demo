
#include "Stonewt.h"
#include <iostream>

int main() {
    using namespace std;

    Stonewt s1;
    Stonewt s2 = Stonewt(2, 3);
    Stonewt s3 = Stonewt(3, 2.5, Stonewt::PDS);

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    s3.setStn();
    cout << "s3 set_stn(), s3 = " << s3 << endl;
    cout << "s3 - s2 = " << s3 - s2 << endl;
    cout << "s2 + s1 = " << s2 + s1 << endl;
    cout << "3*s3 = " << 3 * s3 << endl;
    cout << "s3*2 = " << s3 * 2 << endl;
    return 0;
}