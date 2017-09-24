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

bool Timer::resetTimer() {
    if(!started) {
        startTime = {};
        timerSecs = 1;
        started = false;
        return true;
    }
    return false;
}

void Timer::setSecs(double timerSecs) {
    if(timerSecs >= 1)
        Timer::timerSecs = timerSecs;
}

double Timer::getSecs() const {
    return timerSecs;
}

string Timer::getTimerString(int stampType){
    if(timerSecs != 0 && !started) {
        return convertTime(timerSecs,stampType);
    }
    if(!started) {
        return convertTime(timerSecs,stampType);
    }
    double result = timerSecs - (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
    if(result <= 0){
        result = 0;
        started = false;
        timerSecs = 0;
    }
    return convertTime(result, stampType);
}

double Timer::getTimerDouble(int stampType){
    if(timerSecs != 0 && !started) {
        return timerSecs;
    }
    if(!started) {
        return timerSecs;
    }
    double result = timerSecs - (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
    if(result <= 0){
        result = 0;
        started = false;
        timerSecs = 0;
    }
    return result;
}

bool Timer::isStarted() const {
    return started;
}

const time_point<high_resolution_clock> &Timer::getStartTime() const {
    return startTime;
}