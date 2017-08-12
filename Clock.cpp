//
// Created by Francesco Todino on 17/07/17.
//

#include <ctime>
#include <sstream>
#include <iostream>
#include <thread>
#include "Clock.h"

void Clock::startClock(){
    initscr();
    menu_win = newwin(100, 100, 0, 0);
    keypad(menu_win, TRUE);
    nodelay(stdscr, TRUE);
    getmaxyx(stdscr, Clock::height, Clock::width);

    start_color();
    use_default_colors();
    init_pair(1, COLOR_RED, -1);
    init_pair(2, COLOR_GREEN, -1);
    init_pair(3, COLOR_BLUE, -1);
    init_pair(4, COLOR_YELLOW, -1);

    updateClock();
};

void Clock::updateClock() {
    checkKeyboard();
    time_t now = time(0);
    Drawer::draw(width, height, now, chrono->getChrono(), timer->getTimer());
    napms(50);
    updateClock();
}

int Clock::checkKeyboard() {
    int ch = getch();
    if (ch != ERR) {
        refresh();
        if(ch == 'c' || ch == 'C') {
            Drawer::type = (Drawer::type + 1) % Drawer::countType;
        }
        switch(Drawer::type){
            case 2:
                if(ch == 's' || ch == 'S') {
                    if(!chrono->isStarted())
                        chrono->startChrono();
                    else
                        chrono->stopChrono();
                }
                if(ch == 'r' || ch == 'R') {
                    chrono->resetChrono();
                }
                break;
            case 3:
                if(timer->getSecs() == 0)
                    timer->setSecs(1);
                else{
                    if (ch == 's' || ch == 'S') {
                        if (!timer->isStarted())
                            timer->startTimer();
                    }
                    if (ch == 65) {
                        if (!timer->isStarted())
                            timer->setSecs(timer->getSecs() + 1);
                    }
                    if (ch == 66) {
                        if (!timer->isStarted())
                            timer->setSecs(timer->getSecs() - 1);
                    }
                }
                break;
        }

        return 1;
    } else {
        return 0;
    }
}

int Clock::getWidth() const {
    return width;
}

void Clock::setWidth(int width) {
    Clock::width = width;
}

int Clock::getHeight() const {
    return height;
}

void Clock::setHeight(int height) {
    Clock::height = height;
}
