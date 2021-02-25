#include <iostream>

#include "header.h"

using namespace std;

void aboutMe(){
    header();
    int x=50, y=10;
    clrscr();
    gotoxy(x,y);
    cout << "This is a typing game. Its entirely made on c and c++." << endl;
    cout << "I wish you all the best and enjoy te game :)" << endl;
}