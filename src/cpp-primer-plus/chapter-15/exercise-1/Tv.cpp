
#include "Tv.h"
#include "Remote.h"
#include <iostream>

Tv::Tv(int state, int maxChannel) : state(state), volume(5), maxChannel(maxChannel), channel(2), mode(Cable), input(DVD) {
}

void Tv::onOff() {
    state = (state == On) ? Off : On;
}

bool Tv::isOn() const {
    return state == On;
}

bool Tv::volumeUp() {
    if (volume < MaxVal) {
        volume++;
        return true;
    } else {
        return false;
    }
}

bool Tv::volumeDown() {
    if (volume > MinVal) {
        volume--;
        return true;
    } else {
        return false;
    }
}

void Tv::channelUp() {
    if (channel < maxChannel) {
        channel++;
    } else {
        channel = 1;
    }
}

void Tv::channelDown() {
    if (channel > 1) {
        channel--;
    } else {
        channel = maxChannel;
    }
}

void Tv::settings() const {
    std::cout << "TV is " << (state == On ? "On" : "Off") << std::endl;
    if (state == On) {
        std::cout << "Volume setting = " << volume << std::endl;
        std::cout << "Channel setting = " << channel << std::endl;
        std::cout << "Mode = " << (mode == Antenna ? "Antenna" : "Cable") << std::endl;
        std::cout << "Input = " << (input == TV ? "TV" : "DVD") << std::endl;
    }
}

void Tv::setGMode(Remote &remote) const {
    if (state == On) {
        remote.setGMode();
    }
}
