#include <iostream>

using namespace std;

const int SLEN = 30;
struct Student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(Student [], int);

void display1(Student);

void display2(const Student *);

void display3(const Student *, int);

int main() {
    cout << "Enter class size : ";
    int classSize;
    cin >> classSize;
    while (cin.get() != '\n') {
    }
    auto *pointerStudent = new Student[classSize];
    int entered = getinfo(pointerStudent, classSize);
    for (int i = 0; i < entered; ++i) {
        display1(pointerStudent[i]);
        display2(&pointerStudent[i]);
    }
    display3(pointerStudent, entered);
    delete[] pointerStudent;
    cout << "Done\n";
    return 0;
}

int getinfo(Student pointerStudent[], int arrayLength) {
    Student *pointer;
    int i;
    for (i = 0; i < arrayLength; ++i) {
        pointer = pointerStudent + i;
        cout << "Enter info student #" << i << " : " << endl;
        cout << "fullname : ";
        cin.getline(pointer->fullname, SLEN);
        if (strlen(pointer->fullname) == 0) {
            break;
        }
        cout << "hobby : ";
        cin.getline(pointer->hobby, SLEN);
        cout << "ooplevel: ";
        cin >> pointer->ooplevel;
        cin.get();
    }
    return i;
}

void display1(Student student) {
    cout << "name: " << student.fullname << endl;
    cout << "hobby: " << student.hobby << endl;
    cout << "ooplevel: " << student.ooplevel << endl;
}

void display2(const Student *pointerStuent) {
    cout << "name: " << pointerStuent->fullname << endl;
    cout << "hobby: " << pointerStuent->hobby << endl;
    cout << "ooplevel: " << pointerStuent->ooplevel << endl;
}

void display3(const Student pointerStudent[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "info #" << i << endl;
        cout << "name: " << (pointerStudent + i)->fullname << endl;
        cout << "hobby: " << (pointerStudent + i)->hobby << endl;
        cout << "ooplevel: " << (pointerStudent + i)->ooplevel << endl;
    }
}