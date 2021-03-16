#include <iostream>

using namespace std;

void toUpper(string &);

int main() {
    string string;
    cout << "Enter a string (q to quit) : ";
    // getline() : 兼容string
    getline(cin, string);
    while (string != "q") {
        toUpper(string);
        cout << string << endl;
        cout << "Next string (q to quit): ";
        getline(cin, string);
    }
    cout << "Bye" << endl;
    return 0;
}

void toUpper(string &string) {
    for (char &i : string) {
        if (isalpha(i))
            i = char(toupper(i));
    }
}
