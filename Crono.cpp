//
// Created by Francesco Todino on 12/08/17.
//

#include "Crono.h"

bool Crono::startChrono() {
    if(!started) {
        startTime = steady_clock::now();
        started = true;
        return true;
    }
    return false;
}

bool Crono::stopChrono() {
    if(started) {
        interTime += (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
        startTime = {};
        started = false;
        return true;
    }
    return false;
}

bool Crono::resetChrono() {
    if(!started) {
        startTime = {};
        interTime = 0;
        started = false;
        return true;
    }
    return false;
}

string Crono::getChronoString(int stampType) const{
    if(interTime != 0 && !started) {
        return convertTime(interTime,stampType);
    }
    if(!started) {
        return convertTime(0,stampType);
    }
    double result = interTime + (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
    return convertTime(result, stampType);
}

double Crono::getChronoDouble(int stampType) const{
    if(interTime != 0 && !started) {
        return interTime;
    }
    if(!started) {
        return 0;
    }
    double result = interTime + (duration_cast<microseconds>(steady_clock::now() - startTime)).count() / 1000000.0;
    return result;
}

bool Crono::isStarted() const {
    return started;
}

const time_point<high_resolution_clock> &Crono::getStartTime() const {
    return startTime;
}

double Crono::getInterTime() const {
    return interTime;
}
