//
// Created by Francesco Todino on 17/07/17.
//

#ifndef TIMER_DRAWER_H
#define TIMER_DRAWER_H
#include <ncurses.h>

class Drawer {
public:
    static bool draw( int x, int y, time_t digit);
    static int type;
    static int countType;

private:
    static void drawFooter(int x, int y);
};


#endif //TIMER_DRAWER_H
