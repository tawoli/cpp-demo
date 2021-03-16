
#ifndef CPP_DEMO_CD_H
#define CPP_DEMO_CD_H


class Cd {
private:
    char performers[50]{};
    char label[20]{};
    int selections;
    double playtime;
public:
    Cd(const char *performers, const char *label, int selections, double playtime);

    Cd();

    // 为何需要虚拟析构函数
    // 如果不是虚拟的 , 将只调用对应于声明类型的析构函数 Brass * = new BrassPlus() 将只调用Brass析构函数
    virtual ~Cd() = default;

    // Brass * = new BrassPlus()
    // virtual方法会调用BrassPlus的方法 , 而不是Brass
    virtual void report() const;
};


#endif //CPP_DEMO_CD_H
