//
// Created by Francesco Todino on 17/07/17.
//

#include <iostream>
#include "Drawer.h"

using namespace std;
int Drawer::countType = 3;
int Drawer::type = 0;

bool Drawer::draw( int x, int y, time_t now) {
    std::string digits = ctime(&now);
    tm *date = localtime(&now);
    switch(type){
        case 1:
            for(int i = 0; i < digits.length(); i++) {
                printw(&digits[i]);
            }
            break;
        default:
            move(y/10,(x/2 - digits.length()/2));
            printw(&digits[0]);
            break;
    }
    drawFooter(x,y);
    refresh();
    erase();
    return true;
}

void Drawer::drawFooter(int x, int y){
    for(int j = 0; j < x; j++) {
        move(y-2,j);
        printw("-");
    }
    move(y-1,0);
    printw("(C)hange clock type");
    /*
    "| (S)tart timer | Stop (T)imer");
    attron(COLOR_PAIR(2));
    printw("(E)njoy ^_^");
    attroff(COLOR_PAIR(2));
    */
    printw(" | Todino F.");
}