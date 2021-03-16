#include <iostream>

int main() {
    using namespace std;

    struct Patron {
        string name;
        double money{};
    };

    cout << "输入捐献者数量 : ";
    int patronNumber;
    cin >> patronNumber;
    auto *patron = new Patron[patronNumber];
    for (int i = 0; i < patronNumber; ++i) {
        cout << "输入捐献者姓名 : ";
        cin >> (patron + i)->name;
        cout << "输入捐献者款项 : ";
        cin >> (patron + i)->money;
    }

    for (int i = 0; i < patronNumber; ++i) {
        if ((patron + i)->money > 10000) {
            cout << (patron + i)->name << endl;
        }
    }

    delete[] patron;
    return 0;
}