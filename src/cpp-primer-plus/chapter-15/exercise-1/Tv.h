
#ifndef CPP_DEMO_TV_H
#define CPP_DEMO_TV_H

class Remote;

class Tv {
public:
    friend class Remote;

    enum { Off, On };
    enum { MinVal, MaxVal = 20 };
    enum { Antenna, Cable };
    enum { TV, DVD };
private:
    int state;
    int volume;
    int maxChannel;
    int channel;
    int mode;
    int input;
public:
    explicit Tv(int state = Off, int maxChannel = 125);

    void onOff();

    bool isOn() const;

    bool volumeUp();

    bool volumeDown();

    void channelUp();

    void channelDown();

    inline void setMode() {
        mode = (mode == Antenna) ? Cable : Antenna;
    };

    inline void setInput() {
        input = (input == TV) ? DVD : TV;
    }

    void settings() const;

    void setGMode(Remote &) const;
};


#endif //CPP_DEMO_TV_H
