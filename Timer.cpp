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

string Timer::getTimer(int stampType) const{
    if(interTime != 0 && !started) {
        return convertTime(interTime,stampType);
    }
    if(!started) {
        switch(stampType){
            case 1:
                return "00h 00m 00s 000000ms";
            default:
                return "00:00:00.000000";
        }
    }
    double result = interTime + (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;

    return convertTime(result, stampType);
}

bool Timer::isStarted() const {
    return started;
}