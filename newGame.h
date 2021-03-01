#include<iostream>
#include<ctime>
#include "header.h"

using namespace std;

void timeDuration(int time){
    int time_spent;
    clock_t begin;
    time_spent = (int)(clock()-begin)/CLOCKS_PER_SEC;
    if (time_spent >= time){
        storeScore();
        printScore();
        break;
    }
}

void level(int mode){
    header();
    int rtime, n; // n is random length for a word // rtime is timeduration for which game would run
    cout << "Enter the number of minutes you wanna play the game" << endl;
    cin >> rtime >> endl;
    while(1){
        timeDuration(rtime);
        int r[9];
        char compare;
        n = rand()%100;
        n = n % 10;
        cout << "Type the following code" << endl;
        for(int i=0; i<n; i++){
            r[i] = rand()%1000;
            r[i] = r[i] % 26 + mode;
            cout << (char)r[i] ;
        }
        cout << endl;
        int j=0;
        do{
            cin >> compare;
            j++;
        }while((compare == r[j]) && (j < n));
    }
    
   
}

void newGame() {
    int bool=0;
    header();
    cout << "Please enter your difficulty level" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "4. Back to main menu" << endl;
    int temp;
    cin >> temp >> endl;
    do{
        switch (temp) {
        case 1: level(65); break;
        case 2: level(97); break;
        case 3: level(120); break;
        case 4: main(); break;
        default: bool=1;
        }
    }while(bool=1)
}