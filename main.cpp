#include <iostream>
#include <ctime>

#include "scoreCard.h"
#include "help.h"
#include "aboutUs.h"
#include "newGame.h"

using namespace std;

void gotoxy(int x,int y){
    //cout << 0x1B << y << x ;
    printf("%c[%d;%df",0x1B,y,x);
}
void clrscr(void){
    system("clear");
}
int main(){    
    int x=50, y=10;
    clrscr();
    gotoxy(x,y);
    cout << "Typing Game" << endl;
    //gotoxy(x,y);
    cout << "Today's Date" << endl;
    return 0;
}