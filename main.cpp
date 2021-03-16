#include <iostream>
#include <ctime>
#include <fstream>
//#include <conio.h>

#include "scoreCard.h"
#include "help.h"
#include "aboutUs.h"
#include "newGame.h"
#include "header.h"

using namespace std;

#define pos gotoxy(50, 10)
char name[20];

int main(){
    header();
    int c = 0, ch;
    pos;
    if (c == 0){
        cout << "Enter user name::" << endl;
        cin >> name;
    }
    c++; pos;
    cout << "****Main Menu****\n" << endl; pos;
    cout << "1) New game" << endl; pos;
    cout << "2) Scorecard" << endl; pos;
    cout << "3) Help" << endl; pos;
    cout << "4) About us" << endl; pos;
    cout << "5) Log out" << endl; pos;
    cout << "6) Exit" << endl; pos;
    cin >> ch;
    switch(ch){
        //case 1: newGame(); break;
        case 3: help(); break;
        case 4: aboutUs(); break;
    }
}



