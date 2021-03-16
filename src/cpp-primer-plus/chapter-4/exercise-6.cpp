#include <iostream>
#include <string>

struct CandyBar {
    std::string brand;
    double weight;
    int calorie;
};

int main() {
    using namespace std;

    CandyBar snacks[3] = {
            {"Mocha Munch", 2.3, 350},
            {"Mocha Munch", 2.3, 350},
            {"Mocha Munch", 2.3, 350}
    };

    for (auto & snack : snacks) {
        cout << "Brand: " << snack.brand << endl;
        cout << "Weight: " << snack.weight << endl;
        cout << "Calorie: " << snack.calorie << endl;
    }
    return 0;
}