#include <iostream>

const int N = 2;

struct Chaff {
    char dross[20];
    int slag;
};

char buffer1[N];

int main() {
    using namespace std;

    Chaff array[N] = {
            {"shao", 24},
            {"zhengjiang", 23}
    };
    auto *buffer2 = new(buffer1) Chaff[N];

    strcpy(buffer2[0].dross, array[0].dross);
    buffer2[0].slag = array[0].slag;
    strcpy(buffer2[1].dross, array[1].dross);
    buffer2[1].slag = array[1].slag;

    for (int i = 0; i < N; ++i) {
        cout << "chaff[" << i << "]" << endl;
        cout << "dross: " << buffer2[i].dross << endl;
        cout << "slag: " << buffer2[i].slag << endl;
    }
    return 0;
}