//
// Created by Francesco Todino on 17/07/17.
//

#include <iostream>
#include "Drawer.h"

using namespace std;
int Drawer::type = 0;
int Drawer::countType = 4;
int Drawer::utility = 0;
int Drawer::countUtility = 2;

bool Drawer::draw( int x, int y, time_t now, string chrono, string timer) {
    string digits = ctime(&now);
    tm *date = localtime(&now);
    int fontSize = 0,i = 0;

    string seconds = to_string(date->tm_sec);
    string minutes = to_string(date->tm_min);
    string hours = to_string(date->tm_hour);
    if(seconds.length() == 1) seconds = '0'+seconds;
    if(minutes.length() == 1) minutes = '0'+minutes;
    if(hours.length() == 1) hours = '0'+hours;

    unsigned long cal_pos = digits.find(' ',digits.find(' ',digits.find(' ')+1)+1);
    string calendar = digits.substr(0,cal_pos);

    switch(type){
        case 0:
            digits = hours + ':' + minutes + ':' + seconds;
            for(i = 0; i < digits.length(); i++) {
                printDigit(digits[i], (x/2 - (digits.length()*4)/2) + 4*i, (y/2)-4, 2);
            }
            move(y/2,(x/2 - calendar.length()/2));
            printw(&calendar[0]);
            break;
        case 1:
            digits = hours + minutes + seconds;
            fontSize = 4;
            for(i = 0; i < digits.length(); i++) {
                printDigit(digits[i], x/2 - digits.length() + (fontSize+2)*(i%2), (y/10) + (((fontSize/2)+1)*i) - ((fontSize/2)+1)*(i%2), fontSize);
            }
            move((y/10) + (((fontSize/2)+1)*i) - ((fontSize/2)+1)*(i%2),(x/2 - calendar.length()/2) + fontSize/2 - 2);
            printw(&calendar[0]);
            break;
        case 2:
            move(y/8,(x/2 - 5));
            printw("CHRONOMETER");
            move(y / 2, (x / 2 - chrono.length() / 2));
            printw(&chrono[0]);
            break;
        case 3:
            move(y/8,(x/2 - 2));
            printw("TIMER");
            move(y / 2, (x / 2 - timer.length() / 2));
            printw(&timer[0]);
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
    if(Drawer::type == 0 || Drawer::type == 1)
        printw(" | (E)xit program");
    //attron(COLOR_PAIR(2));
    if(Drawer::type == 2)
        printw(" | (S)tart and stop Chrono | (R)eset Chrono");
    if(Drawer::type == 3)
        printw(" | (S)tart Timer | ^v Change Time");
    //attroff(COLOR_PAIR(2));
    printw(" | Todino F.");
}

void Drawer::printDigit(char c, int x, int y, int size) {
    size = (size % 2 == 0)?size:size-1;
    switch(c){
        case '0':
            for (int i = 0; i < size; ++i) {
                mvprintw(y+i, x, "|");
                mvprintw(y+size-1, x+1+i, "_");
                mvprintw(y+i, x+1+size, "|");
                mvprintw(y-1, x+1+i, "_");
            }
            break;
        case '1':
            for (int i = 0; i < size; ++i)
                mvprintw(y+i, x+size+1, "|");
            break;
        case '2':
            for (int i = 0; i < size; ++i) {
                mvprintw(y-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)), x+1+size, "|");
                mvprintw(y+(size/2)-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)) + size/2, x, "|");
                mvprintw(y+size-1, x+1+i, "_");
            }
            break;
        case '3':
            for (int i = 0; i < size; ++i) {
                mvprintw(y-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)), x+1+size, "|");
                mvprintw(y+(size/2)-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)) + size/2, x+1+size, "|");
                mvprintw(y+size-1, x+1+i, "_");
            }
            break;
        case '4':
            for (int i = 0; i < size; ++i) {
                mvprintw(y+(i%(size/2)), x, "|");
                mvprintw(y+(size/2)-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)), x+1+size, "|");
                mvprintw(y+(i%(size/2)) + size/2, x+1+size, "|");
            }
            break;
        case '5':
            for (int i = 0; i < size; ++i) {
                mvprintw(y-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)) + size/2, x+1+size, "|");
                mvprintw(y+(size/2)-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)), x, "|");
                mvprintw(y+size-1, x+1+i, "_");
            }
            break;
        case '6':
            for (int i = 0; i < size; ++i) {
                mvprintw(y-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)), x, "|");
                mvprintw(y+(i%(size/2)) + size/2, x, "|");
                mvprintw(y+(size/2)-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)) + size/2, x+1+size, "|");
                mvprintw(y+size-1, x+1+i, "_");
            }
            break;
        case '7':
            for (int i = 0; i < size; ++i) {
                mvprintw(y-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)) + size/2, x+1+size, "|");
                mvprintw(y+(i%(size/2)), x+1+size, "|");
            }
            break;
        case '8':
            for (int i = 0; i < size; ++i) {
                mvprintw(y-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)) + size/2, x+1+size, "|");
                mvprintw(y+(i%(size/2)) + size/2, x, "|");
                mvprintw(y+(size/2)-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)), x, "|");
                mvprintw(y+(i%(size/2)), x+1+size, "|");
                mvprintw(y+size-1, x+1+i, "_");
            }
            break;
        case '9':
            for (int i = 0; i < size; ++i) {
                mvprintw(y-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)) + size/2, x+1+size, "|");
                mvprintw(y+(size/2)-1, x+1+i, "_");
                mvprintw(y+(i%(size/2)), x, "|");
                mvprintw(y+(i%(size/2)), x+1+size, "|");
                mvprintw(y+size-1, x+1+i, "_");
            }
            break;
        case ':':
            mvprintw(y, x+2, ".");
            mvprintw(y+1, x+2, ".");
            break;
    }
}