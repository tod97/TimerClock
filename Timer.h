//
// Created by Francesco Todino on 30/07/17.
//

#ifndef TIMERCLOCK_TIMER_H
#define TIMERCLOCK_TIMER_H

#include <ctime>

using namespace std;

class Timer {

public:
    Timer(){
        startTime = 0;
        interTime = 0;
    }
    void startTimer();
    void pauseTimer();
    void resetTimer();

    double getTimer() const;

private:
    clock_t startTime;
    double interTime;
};


#endif //TIMERCLOCK_TIMER_H
