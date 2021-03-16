
#ifndef CPP_DEMO_ABC_H
#define CPP_DEMO_ABC_H

#include <iostream>

class ABC {
private:
    char *label;
    int rating;
public:
    explicit ABC(const char * = "null", int = 1);

    ABC(const ABC &);

    // 纯虚方法 , 有纯虚方法的类是抽象基类
    // 1.包含纯虚函数的类 , 不能创建该类对象 , 只能作基类
    // 2.纯虚函数允许有无定义
    virtual ~ABC() = 0;

    virtual void view() const;

    ABC &operator=(const ABC &);

    friend std::ostream &operator<<(std::ostream &, const ABC &);
};


#endif //CPP_DEMO_ABC_H
