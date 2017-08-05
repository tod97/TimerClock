//
// Created by Francesco Todino on 30/07/17.
//

#include "Timer.h"

bool Timer::startTimer() {
    if(!started) {
        startTime = steady_clock::now();
        started = true;
        return true;
    }
    return false;
}

bool Timer::stopTimer() {
    if(started) {
        interTime += (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
        startTime = {};
        started = false;
        return true;
    }
    return false;
}

bool Timer::resetTimer() {
    if(!started) {
        startTime = {};
        interTime = 0;
        started = false;
        return true;
    }
    return false;
}

double Timer::getTimer() const {
    if(interTime != 0 && !started)
        return interTime;
    if(!started)
        return 0;
    double result = interTime + (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
    return result;
}

bool Timer::isStarted() const {
    return started;
}
