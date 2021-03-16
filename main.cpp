#include <iostream>
#include <ctime>
#include <fstream>
//#include <conio.h>

#include "scoreCard.h"
#include "help.h"
#include "aboutUs.h"
#include "newGame.h"
// #include "header.h"

using namespace std;

// #define pos gotoxy(50, 10)
char name[20];

int main(){
    // header();
    int c = 0, ch;
    if (c == 0){
        cout << "Enter user name::" << endl;
        cin >> name;
    }
    c++;
    cout << "****Main Menu****\n" << endl;
    cout << "1) New game" << endl;
    cout << "2) Scorecard" << endl;
    cout << "3) Help" << endl;
    cout << "4) About us" << endl;
    cout << "5) Log out" << endl;
    cout << "6) Exit" << endl;
    cin >> ch;
    switch(ch){
        //case 1: newGame(); break;
        case 1: newGame(); break;
        case 2: printScore(); break;
        case 3: help(); break;
        case 4: aboutUs(); break;
    }
}

// code for speed needed



