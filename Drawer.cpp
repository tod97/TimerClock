//
// Created by Francesco Todino on 17/07/17.
//

#include <iostream>
#include "Drawer.h"

using namespace std;
int Drawer::countType = 3;
int Drawer::type = 2;

bool Drawer::draw( int x, int y, time_t now) {

    string digits = ctime(&now);
    tm *date = localtime(&now);

    string seconds = to_string(date->tm_sec);
    string minutes = to_string(date->tm_min);
    string hours = to_string(date->tm_hour);
    if(seconds.length() == 1) seconds = '0'+seconds;
    if(minutes.length() == 1) minutes = '0'+minutes;
    if(hours.length() == 1) hours = '0'+hours;

    switch(type){
        case 1:
            for(int i = 0; i < digits.length(); i++) {
                printw(&digits[i]);
            }
            break;
        case 2:

            digits = hours + ':' + minutes + ':' + seconds;
            for(int i = 0; i < digits.length(); i++) {
                printDigit(digits[i], (x/2 - (digits.length()*4)/2) + 4*i, (y/2)-4);
            }

            //printw("%d:%d:%d",date->tm_hour,date->tm_min,date->tm_sec);
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

void Drawer::printDigit(char c, int x, int y) {
    switch(c){
        case '0':
            mvprintw(y, x, "|");
            mvprintw(y+1, x, "|");
            mvprintw(y+1, x+1, "_");
            mvprintw(y+1, x+2, "_");
            mvprintw(y, x+3, "|");
            mvprintw(y+1, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case '1':
            mvprintw(y, x+3, "|");
            mvprintw(y+1, x+3, "|");
            break;
        case '2':
            mvprintw(y+1, x, "|");
            mvprintw(y+1, x+1, "_");
            mvprintw(y+1, x+2, "_");
            mvprintw(y, x+1, "_");
            mvprintw(y, x+2, "_");
            mvprintw(y, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case '3':
            mvprintw(y+1, x+1, "_");
            mvprintw(y+1, x+2, "_");
            mvprintw(y, x+1, "_");
            mvprintw(y, x+2, "_");
            mvprintw(y, x+3, "|");
            mvprintw(y+1, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case '4':
            mvprintw(y, x, "|");
            mvprintw(y, x+1, "_");
            mvprintw(y, x+2, "_");
            mvprintw(y, x+3, "|");
            mvprintw(y+1, x+3, "|");
            break;
        case '5':
            mvprintw(y, x, "|");
            mvprintw(y+1, x+1, "_");
            mvprintw(y+1, x+2, "_");
            mvprintw(y, x+1, "_");
            mvprintw(y, x+2, "_");
            mvprintw(y+1, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case '6':
            mvprintw(y, x, "|");
            mvprintw(y+1, x, "|");
            mvprintw(y+1, x+1, "_");
            mvprintw(y+1, x+2, "_");
            mvprintw(y, x+1, "_");
            mvprintw(y, x+2, "_");
            mvprintw(y+1, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case '7':
            mvprintw(y, x+3, "|");
            mvprintw(y+1, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case '8':
            mvprintw(y, x, "|");
            mvprintw(y+1, x, "|");
            mvprintw(y+1, x+1, "_");
            mvprintw(y+1, x+2, "_");
            mvprintw(y, x+1, "_");
            mvprintw(y, x+2, "_");
            mvprintw(y, x+3, "|");
            mvprintw(y+1, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case '9':
            mvprintw(y, x, "|");
            mvprintw(y+1, x+1, "_");
            mvprintw(y+1, x+2, "_");
            mvprintw(y, x+1, "_");
            mvprintw(y, x+2, "_");
            mvprintw(y, x+3, "|");
            mvprintw(y+1, x+3, "|");
            mvprintw(y-1, x+1, "_");
            mvprintw(y-1, x+2, "_");
            break;
        case ':':
            mvprintw(y, x+2, ".");
            mvprintw(y+1, x+2, ".");
            break;
    }
}