//
// Created by Francesco Todino on 30/07/17.
//

#ifndef TIMERCLOCK_TIMER_H
#define TIMERCLOCK_TIMER_H

#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Timer {

public:
    Timer(){
        startTime = steady_clock::now();
        interTime = 0;
        started = false;
    }
    void startTimer();
    void stopTimer();
    void resetTimer();

    bool isStarted() const;

    double getTimer() const;

private:
    time_point<high_resolution_clock> startTime;
    double interTime;
    bool started;
};


#endif //TIMERCLOCK_TIMER_H
