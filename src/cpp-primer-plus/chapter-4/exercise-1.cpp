#include <iostream>

int main() {
    using namespace std;

    cout << "What is your first name ?";
    string firstName;
    getline(cin, firstName);

    cout << "What is your last name ?";
    string lastName;
    getline(cin, lastName);

    cout << "what letter grade do you deserve ?";
    char grade;
    cin >> grade;

    cout << "what is your age ?";
    int age;
    cin >> age;

    grade++;
    cout << "Name : " << lastName << ", " << firstName << endl;
    cout << "Grade : " << grade << endl;
    cout << "Age : " << age << endl;
    return 0;
}