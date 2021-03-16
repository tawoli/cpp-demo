#include <iostream>
#include "Stock.h"

Stock::Stock() {
    company = new char[1];
    company[0] = '\0';
    shares = 0;
    shareVal = 0.0;
    totalVal = 0.0;
}

Stock::Stock(const char *company, long number, double price) {
    this->company = new char[std::strlen(company) + 1];
    std::strcpy(this->company, company);
    if (number < 0) {
        std::cout << "Number of shares can't be negative; " << this->company << " shares set to 0.\n";
        this->shares = 0;
    } else {
        this->shares = int(number);
    }
    this->shareVal = price;
    setTotalVal();
}

Stock::~Stock() {
    delete[] company;
}

void Stock::buy(long number, double price) {
    if (number < 0) {
        std::cout << "Number of shares purchased can't be negative. " << "Transaction is aborted.\n";
    } else {
        this->shares += int(number);
        this->shareVal = price;
        setTotalVal();
    }
}

void Stock::sell(long number, double price) {
    using namespace std;
    if (number < 0) {
        cout << "Number of shares sold can't be negative. " << "Transaction is aborted.\n";
    } else if (number > this->shares) {
        cout << "You can't sell more than you have! " << "Transaction is aborted.\n";
    } else {
        this->shares -= int(number);
        this->shareVal = price;
        setTotalVal();
    }
}

void Stock::update(double price) {
    this->shareVal = price;
    setTotalVal();
}

void Stock::show() const {
    using namespace std;
    // set format to #.###
    ios_base::fmtflags orig =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << "  Shares: " << shares << '\n';
    cout << "  Share Price: $" << this->shareVal;
    // set format to #.##
    cout.precision(2);
    cout << "  Total Worth: $" << this->totalVal << '\n';

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock &Stock::topval(const Stock &stock) const {
    if (stock.totalVal > this->totalVal) {
        return stock;
    } else {
        return *this;
    }
}
