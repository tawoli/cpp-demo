#include "golf.h"

const int N = 5;

int main() {
    using namespace std;
    golf golfArray[LEN];
    int i;
    int result;

    for (i = 0; i < N; ++i) {
        cout << "golf[" << i << "]" << endl;
        result = setgolf(golfArray[i]);
        if (!result) {
            cout << "empty name detected!" << endl;
            break;
        }
    }

    int nout = i;
    for (i = 0; i < nout; ++i) {
        cout << "golf[" << i << "]" << endl;
        showgolf(golfArray[i]);
    }

    return 0;
}