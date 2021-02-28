#pragma once

#include <iostream>
#include <ctime>
//#include <conio.h>

using namespace std;

//adjusting the cursor position 
void gotoxy(int x,int y){
    //cout << 0x1B << y << x ;
    printf("%c[%d;%df",0x1B,y,x);
}
void clrscr(void){
    system("clear");
}
void header(){    
    int x=50, y=10;
    clrscr();
    gotoxy(x,y);
    cout << "Typing Game" << endl;

    // current date and time
    time_t now = time(0);
    char* dt = ctime(&now);
    gotoxy(x,y);
    cout << dt << endl;
}