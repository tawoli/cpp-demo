// iostream包含了string , 但是不要依赖这种包含关系
#include <iostream>

int main() {
    using namespace std;

    cout << "Enter your first name : ";
    string firstName;
    getline(cin, firstName);

    cout << "Enter your last name : ";
    string lastName;
    getline(cin, lastName);

    string fullName = lastName + ", " + firstName;
    cout << "Here's the information in a single string : " << fullName << endl;
    return 0;
}