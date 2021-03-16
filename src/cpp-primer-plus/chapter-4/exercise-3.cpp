#include <iostream>

const int CHAR_LENGTH = 20;

int main() {
    using namespace std;

    cout << "Enter your first name : ";
    char firstName[CHAR_LENGTH];
    cin.getline(firstName, CHAR_LENGTH);

    cout << "Enter your last name : ";
    char lastName[CHAR_LENGTH];
    cin.getline(lastName, CHAR_LENGTH);

    char fullName[2 * CHAR_LENGTH];
    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    cout << "Here's the information in a single string : " << fullName << endl;
    return 0;
}