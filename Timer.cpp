//
// Created by Francesco Todino on 30/07/17.
//

#include "Timer.h"

void Timer::startTimer() {
    if(!started) {
        startTime = steady_clock::now();
        started = true;
    }
}

void Timer::stopTimer() {
    if(started) {
        interTime += (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
        startTime = {};
        started = false;
    }
}

void Timer::resetTimer() {
    startTime = {};
    interTime = 0;
    started = false;
}

double Timer::getTimer() const {
    if(interTime != 0 && !started)
        return interTime;
    if(!started)
        return 0;
    return (interTime + (duration_cast<microseconds>(steady_clock::now() - startTime)).count()) / 1000000.0;
}

bool Timer::isStarted() const {
    return started;
}
