#include <iostream>

struct CandyBar {
    char brand[30];
    double weight;
    int heat;
};

void set(CandyBar &, const char *brand = "Millennium Munch", double weight = 2.85, int heat = 350);

void show(const CandyBar &);

int main() {
    using namespace std;
    CandyBar candyBar{};
    char brand[] = "Munch";
    double weight = 4.85;
    int heat = 650;

    // show default struct
    set(candyBar);
    cout << "Original Bar: " << endl;
    show(candyBar);
    // fill struct
    set(candyBar, brand, weight, heat);
    // show struct
    cout << "New Bar: " << endl;
    show(candyBar);

}

void set(CandyBar &candyBar, const char *brand, double weight, int heat) {
    strcpy(candyBar.brand, brand);
    candyBar.weight = weight;
    candyBar.heat = heat;
}

void show(const CandyBar &candyBar) {
    using namespace std;

    cout << "Brand: " << candyBar.brand << endl;
    cout << "Weight: " << candyBar.weight << endl;
    cout << "Heat: " << candyBar.heat << endl;
}
