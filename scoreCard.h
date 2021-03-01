#include <iostream>
#include <fstream>
#include <string>
//#include <conio.h>

#include "header.h"

using namespace std;

char name1[20];

void storeScore(int score, int speed, int level){
    int x=50, y=10;
    clrscr();
    gotoxy(x,y);

    ofstream file;
    file.open("score.txt");
    if(file.is_open()){
        cout << endl;
        file << "name =  " << name1 << "     " << "score = " << score << "   " << "speed = " << speed << "   " << "level =" << level << endl;
    }
    else{
        cout << "Error opening file" << endl;
    }
    file.close();    
    //getch(); main();
}

void printScore(){
    header();
    int x=50, y=10;
    clrscr();
    gotoxy(x,y);

    std::string line;
    std::ifstream file;
    cout << ".......The scores are......... " << endl;
    file.open("score.txt");
    if(file.is_open()){
        while( getline (file,line) ){
            cout << line << '\n';
        }
        file.close();
    }

    else{
        cout << "Error reading file" << endl;
    }
}