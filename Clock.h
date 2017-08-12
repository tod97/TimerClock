//
// Created by Francesco Todino on 17/07/17.
//

#ifndef TIMER_TIMER_H
#define TIMER_TIMER_H

#include <ncurses.h>
#include "Drawer.h"
#include "Timer.h"
#include "Crono.h"

class Clock {
public:
    Clock(){
        width = 0;
        height = 0;
        chrono = new Crono();
        timer = new Timer();
    };

    ~Clock(){
        delete menu_win;
        delete timer;
        delete chrono;
    }
    void startClock();

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

private:
    int width, height;
    WINDOW *menu_win;
    Crono *chrono;
    Timer *timer;
    void updateClock();
    int checkKeyboard();
};


#endif //TIMER_TIMER_H
