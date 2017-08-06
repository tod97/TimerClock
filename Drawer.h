//
// Created by Francesco Todino on 17/07/17.
//

#ifndef TIMER_DRAWER_H
#define TIMER_DRAWER_H
#include <ncurses.h>

using namespace std;

class Drawer {
public:
    static bool draw( int x, int y, time_t digit, string timer);
    static int type;
    static int countType;

private:
    static void drawFooter(int x, int y);
    static void printDigit(char c, int x, int y, int size);
};


#endif //TIMER_DRAWER_H
