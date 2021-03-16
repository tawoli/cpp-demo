
#ifndef CPP_DEMO_STRING_H
#define CPP_DEMO_STRING_H

#include <iostream>

using namespace std;

class String {
private:
    char *str;
    int len;
    static int stringNumber;
    static const int CIN_LIMIT = 80;
public:
    explicit String(const char *);

    String();

    String(const String &);

    ~String();

    int length() const {
        return len;
    };

    void stringlow();

    void stringup();

    int has(char) const;

    // overloaded operator methods
    // 1.返回引用 , 可以避免调用拷贝构造函数
    // 2.形如s3 = s2 = s1 , 需要对 s2 = s1 的返回值进行修改 , 所以返回非 const 引用
    String &operator=(const String &);

    // string = char[]
    String &operator=(const char *);

    // 访问字符 : cout << string[i]
    // 返回类型为 char & , 可以赋值操作 string[i] = 'r'
    char &operator[](int i);

    // 编译器无法识别 const string 的 cout << string[i] 是否修改变量
    // 声明以下方法使得编译器对 const string[i] 调用
    const char &operator[](int i) const;

    // 返回对象返回的是局部对象 , 返回时调用局部对象的析构函数 , 也会调用复制构造函数创建返回对象
    String operator+(const String &string) const;

    String operator+(const char *s) const;

    // overloaded operator friends
    friend bool operator<(const String &, const String &);

    friend bool operator>(const String &, const String &);

    friend bool operator==(const String &, const String &);

    friend ostream &operator<<(ostream &, const String &);

    friend istream &operator>>(istream &, String &);

    friend String operator+(const char *, const String &);

    static int HowMany();
};


#endif //CPP_DEMO_STRING_H
