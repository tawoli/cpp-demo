
#include "String.h"

int String::stringNumber = 0;

String::String(const char *string) {
    // strlen : 不包括 '\0'
    this->len = std::strlen(string);
    this->str = new char[len + 1];
    std::strcpy(this->str, string);
    String::stringNumber++;
}

String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    stringNumber++;
}

String::String(const String &string) {
    String::stringNumber++;
    this->len = string.len;
    this->str = new char[this->len + 1];
    std::strcpy(this->str, string.str);
}

String::~String() {
    String::stringNumber--;
    delete[]str;
}

void String::stringlow() {
    for (int i = 0; i < len; ++i) {
        if (std::isupper(str[i])) {
            str[i] = char(std::tolower(str[i]));
        }
    }
}

void String::stringup() {
    for (int i = 0; i < len; ++i) {
        if (std::islower(str[i])) {
            str[i] = char(std::toupper(str[i]));
        }
    }
}

int String::has(char ch) const {
    int sum = 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] == ch) {
            sum++;
        }
    }
    return sum;
}

String &String::operator=(const String &string) {
    if (this == &string) {
        return *this;
    }
    delete[]this->str;
    this->len = string.len;
    this->str = new char[this->len + 1];
    std::strcpy(this->str, string.str);
    return *this;
}

String &String::operator=(const char *string) {
    delete[]str;
    len = std::strlen(string);
    str = new char[len + 1];
    std::strcpy(str, string);
    return *this;
}

char &String::operator[](int i) {
    return str[i];
}

const char &String::operator[](int i) const {
    return str[i];
}

String String::operator+(const String &string) const {
    int len = int(std::strlen(str) + std::strlen(string.str));
    char *stringSum = new char[len + 1];
    std::strcpy(stringSum, str);
    std::strcat(stringSum, string.str);
    String stringNew = String(stringSum);
    delete[] stringSum;

    return stringNew;
}

String String::operator+(const char *string) const {
    // 使用explicit必须显式调用构造函数
    String temp = String(string);
    String sum = *this + temp;
    return sum;
}

int String::HowMany() {
    return String::stringNumber;
}

bool operator<(const String &string1, const String &string2) {
    return (std::strcmp(string1.str, string2.str) < 0);
}

bool operator>(const String &string1, const String &string2) {
    return string2 < string1;
}

bool operator==(const String &string1, const String &string2) {
    return (std::strcmp(string1.str, string2.str) == 0);
}

ostream &operator<<(ostream &os, const String &string) {
    os << string.str;
    return os;
}

istream &operator>>(istream &is, String &string) {
    char temp[String::CIN_LIMIT];
    is.get(temp, String::CIN_LIMIT);
    if (is)
        string = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String operator+(const char *string1, const String &string2) {
    return string2 + string1;
}
