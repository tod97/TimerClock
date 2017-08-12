//
// Created by Francesco Todino on 30/07/17.
//

#include "Crono.h"

bool Crono::startTimer() {
    if(!started) {
        startTime = steady_clock::now();
        started = true;
        return true;
    }
    return false;
}

bool Crono::stopTimer() {
    if(started) {
        interTime += (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
        startTime = {};
        started = false;
        return true;
    }
    return false;
}

bool Crono::resetTimer() {
    if(!started) {
        startTime = {};
        interTime = 0;
        started = false;
        return true;
    }
    return false;
}

string Crono::getTimer(int stampType) const{
    if(interTime != 0 && !started) {
        return convertTime(interTime,stampType);
    }
    if(!started) {
        return convertTime(0,stampType);
    }
    double result = interTime + (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
    return convertTime(result, stampType);
}

bool Crono::isStarted() const {
    return started;
}