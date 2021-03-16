#include <iostream>
#include "BaseDMA.h"
#include "HasDMA.h"
#include "LacksDMA.h"

int main() {
    using std::cout;
    using std::endl;

    BaseDMA shirt("Portabelly", 8);
    LacksDMA balloon("red", "Blimpo", 4);
    HasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying baseDMA object:\n";
    cout << shirt << endl;
    cout << "Displaying lacksDMA object:\n";
    cout << balloon << endl;
    cout << "Displaying hasDMA object:\n";
    cout << map << endl;
    LacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy:\n";
    cout << balloon2 << endl;
    HasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;
    // std::cin.get();
    return 0;
}