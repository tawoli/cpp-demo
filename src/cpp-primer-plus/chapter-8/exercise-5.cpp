#include <iostream>

const int LEN = 5;

template<typename T>
T max5(T []);

int main() {
    using namespace std;

    int arrayInt[LEN] = {1, 2, 3, 4, 5};
    double arrayDouble[LEN] = {1.0, 2.0, 3.0, 4.0, 5.0};

    cout << "Max int = " << max5(arrayInt) << endl;
    cout << "Max double = " << max5(arrayDouble) << endl;

    return 0;
}

template<typename T>
T max5(T array[]) {
    T max = array[0];
    for (int i = 0; i < LEN; ++i) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
