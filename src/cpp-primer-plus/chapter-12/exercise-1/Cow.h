
#ifndef CPP_DEMO_COW_H
#define CPP_DEMO_COW_H


class Cow {
private:
    char name[20]{};
    char *hobby{};
    double weight;
public:
    Cow();

    Cow(const char *name, const char *hobby, double weight);

    Cow(const Cow &cow);

    ~Cow();

    Cow &operator=(const Cow &);

    void showCow() const;
};


#endif //CPP_DEMO_COW_H
