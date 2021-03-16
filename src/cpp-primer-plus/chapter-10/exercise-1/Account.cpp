
#include "Account.h"

#include <iostream>
#include <utility>

Account::Account(std::string name, std::string number, double deposit) {
    this->name = std::move(name);
    this->number = std::move(number);
    this->deposit = deposit;
}

Account::Account() {
    name = "";
    number = "";
    deposit = 0.0;
}

Account::~Account() = default;

void Account::draw(double money) {
    if (money > deposit)
        std::cout << "Money is larger than deposit, drawing is aborted" << std::endl;
    else
        deposit -= money;
}

void Account::store(double money) {
    if (money < 0.0)
        std::cout << "Money is negative, storage is aborted" << std::endl;
    else
        deposit += money;
}

void Account::show() const {
    std::cout << "Account name: " << name << std::endl;
    std::cout << "Account number: " << number << std::endl;
    std::cout << "deposit: " << deposit << std::endl;
}
