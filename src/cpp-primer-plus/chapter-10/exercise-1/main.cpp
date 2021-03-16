#include "account.h"

int main() {
    Account account = Account("shaozhengjiang", "19920221", 0);

    account.show();
    account.store(100);
    account.show();
    account.draw(10);
    account.show();

    return 0;
}