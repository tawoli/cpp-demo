
#include "Remote.h"
#include <iostream>

Remote::Remote(int mode) : mode(mode), gMode(Normal) {
}

bool Remote::volumeUp(Tv &tv) {
    return tv.volumeUp();
}

bool Remote::volumeDown(Tv &tv) {
    return tv.volumeDown();
}

void Remote::onOff(Tv &tv) {
    tv.onOff();
}

void Remote::channelUp(Tv &tv) {
    tv.channelUp();
}

void Remote::channelDown(Tv &tv) {
    tv.channelDown();
}

void Remote::setChannel(Tv &tv, int channel) {
    tv.channel = channel;
}

void Remote::setMode(Tv &tv) {
    tv.setMode();
}

void Remote::setInput(Tv &tv) {
    tv.setInput();
}

void Remote::showGMode() const {
    std::cout << (gMode == Normal ? "Normal" : "Interactive") << std::endl;
}

void Remote::setGMode() {
    gMode = (gMode == Normal) ? Interactive : Normal;
}

