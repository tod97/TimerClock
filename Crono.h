//
// Created by Francesco Todino on 30/07/17.
//

#ifndef TIMERCLOCK_TIMER_H
#define TIMERCLOCK_TIMER_H

#include <ctime>
#include <chrono>
#include <string>
#include <math.h>

using namespace std;
using namespace std::chrono;

class Crono {

public:
    Crono(){
        startTime = steady_clock::now();
        interTime = 0;
        started = false;
    }
    bool startTimer();
    bool stopTimer();
    bool resetTimer();

    bool isStarted() const;

    string getTimer(int stampType = 0) const;

private:
    time_point<high_resolution_clock> startTime;
    double interTime;
    bool started;

    string convertTime(double t, int stampType = 0) const{
        double msecs, secs, mins, hours;
        string h, m, s, ms;

        msecs = modf (t , &secs) * 1000000;
        hours = secs / 3600;
        modf (hours , &hours);
        mins = secs / 60;
        modf (mins , &mins);

        secs -= mins * 60 - hours * 3600;
        mins -= hours * 60;

        h = (to_string((int)hours).length() == 1)?"0"+to_string((int)hours):to_string((int)hours);
        m = (to_string((int)mins).length() == 1)?"0"+to_string((int)mins):to_string((int)mins);
        s = (to_string((int)secs).length() == 1)?"0"+to_string((int)secs):to_string((int)secs);
        ms = to_string((int)msecs);
        while(ms.length() < 6)
            ms = "0"+ms;

        switch(stampType){
            case 1:
                return h+"h "+m+"m "+s+"s "+ms + "ms";
            default:
                return h+":"+m+":"+s+"."+ms;
        }
    };
};


#endif //TIMERCLOCK_TIMER_H
