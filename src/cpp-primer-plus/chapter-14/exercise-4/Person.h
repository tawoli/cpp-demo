
#ifndef CPP_DEMO_PERSON_H
#define CPP_DEMO_PERSON_H


#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;

public:
    // 不要在头文件中实现构造函数 , 这会让构造函数内联化 , 尽可能避免使用内联函数
    explicit Person(const char *firstName = "none", const char *lastName = "none");

    virtual ~Person() = default;

    virtual void show() const;

    virtual void set();
};


#endif //CPP_DEMO_PERSON_H
