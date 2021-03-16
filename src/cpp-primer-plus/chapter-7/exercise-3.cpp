#include <iostream>

using namespace std;

struct Box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void a(Box);

void b(Box *);

int main() {
    Box box = {"shaozhengjiang", 2.0, 3.0, 3.5, 0.0};
    a(box);
    b(&box);
    a(box);
    return 0;
}

void a(Box box) {
    cout << "maker " << box.maker << endl;
    cout << "height " << box.height << endl;
    cout << "width " << box.width << endl;
    cout << "length " << box.length << endl;
    cout << "volume " << box.volume << endl;
}

void b(Box *pointerBox) {
    pointerBox->volume = pointerBox->height * pointerBox->length * pointerBox->width;
}
