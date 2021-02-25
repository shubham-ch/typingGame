#include <iostream>
#include <ctime>
<<<<<<< HEAD
#include <fstream>
=======
#include <conio.h>
>>>>>>> 17e46d3552313d49e45258a469d5b920e8eb4b2a

#include "scoreCard.h"
#include "help.h"
#include "aboutUs.h"
#include "newGame.h"
#include "header.h"

using namespace std;

#define pos gotoxy(50, 10)

int main(){
    header();
<<<<<<< HEAD
    
=======
    char name[20];
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
        case 4: help(); break;
    }
>>>>>>> 17e46d3552313d49e45258a469d5b920e8eb4b2a
}



