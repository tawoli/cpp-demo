
#ifndef CPP_DEMO_REMOTE_H
#define CPP_DEMO_REMOTE_H

#include "Tv.h"

class Remote {
public:
    friend class Tv;

    enum { Normal, Interactive };

private:
    int mode;
    int gMode;

public:
    explicit Remote(int mode = Tv::TV);

    static bool volumeUp(Tv &tv);

    static bool volumeDown(Tv &);

    static void onOff(Tv &);

    static void channelUp(Tv &);

    static void channelDown(Tv &);

    static void setChannel(Tv &, int);

    static void setMode(Tv &);

    static void setInput(Tv &);

    void showGMode() const;

    void setGMode();
};


#endif //CPP_DEMO_REMOTE_H
