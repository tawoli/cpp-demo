
#ifndef CPP_DEMO_CD_H
#define CPP_DEMO_CD_H


class Cd {
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(const char *performers, const char *label, int selections, double playtime);

    Cd(const Cd &);

    Cd();

    virtual ~Cd();

    virtual void report() const;

    // overloaded functions
    Cd &operator=(const Cd &);
};


#endif //CPP_DEMO_CD_H
