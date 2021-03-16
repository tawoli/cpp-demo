#include <iostream>

struct Car {
    std::string producer;
    int year{};
};

int main() {
    using namespace std;

    cout << "How many cars do you wish to catalog ?";
    int carNumber;
    cin >> carNumber;
    cin.get();

    Car *cars = new Car[carNumber];
    for (int i = 0; i < carNumber; ++i) {
        cout << "Car #" << i + 1 << " : \n";
        cout << "Please enter the make : ";
        getline(cin, cars[i].producer);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }

    cout << "Here is your collection : " << endl;
    for (int i = 0; i < carNumber; ++i) {
        cout << cars[i].year << " " << cars[i].producer << endl;
    }
    return 0;
}
