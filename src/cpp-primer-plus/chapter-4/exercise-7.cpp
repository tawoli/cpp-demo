#include <iostream>
#include <string>

int main() {
    using namespace std;

    struct Pizza {
        string company;
        double diameter{};
        double weight{};
    };

    Pizza pizza;

    cout << "Enter company name: ";
    getline(cin, pizza.company);
    cout << "Enter diameter of pizza: ";
    cin >> pizza.diameter;
    cout << "Enter weight of pizza: ";
    cin >> pizza.weight;

    cout << "Company: " << pizza.company << endl;
    cout << "Diameter: " << pizza.diameter << endl;
    cout << "Weight:" << pizza.weight << endl;
    return 0;
}