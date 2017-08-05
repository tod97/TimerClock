//
// Created by Francesco Todino on 30/07/17.
//

#include "Timer.h"

void Timer::startTimer() {
    if(startTime == 0)
        startTime = clock();
}

void Timer::pauseTimer() {
    if(startTime != 0) {
        interTime += (clock() - startTime) / (double) CLOCKS_PER_SEC;
        startTime = 0;
    }
}

void Timer::resetTimer() {
    startTime = 0;
    interTime = 0;
}

double Timer::getTimer() const {
    if(startTime == 0 && interTime == 0)
        return 0;
    if(interTime != 0 && startTime == 0)
        return interTime;
    return (( clock() - startTime ) / (double) CLOCKS_PER_SEC) + interTime;
}
