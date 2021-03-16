#include<iostream>
#include<ctime>
//#include "header.h"

using namespace std;

// void timeDuration(int time){
//     int time_spent;
//     clock_t begin;
//     begin = clock();
//     time_spent = (int)(clock()-begin)/CLOCKS_PER_SEC;
//     if (time_spent >= time){
//         // storeScore(score, speed, level);
//         printScore();
//     }
// }

void level(int mode, int points){
    //header();
    int rtime, time_spent, n; // n is random length for a word // rtime is timeduration for which game would run
    cout << "Enter the number of minutes you wanna play the game" << endl;
    cin >> rtime;
    clock_t begin;
    begin = clock();
    do{
        time_spent = (int)(clock()-begin)/(CLOCKS_PER_SEC*60);
        int r[9];
        char compare[9];
        n = rand()%100;
        n = n % 10;
        cout << "Type the following code" << endl;
        for(int i=0; i<n; i++){
            r[i] = rand()%1000;
            r[i] = r[i] % 26 + mode;
            cout << (char)r[i] ;
        }
        cout << endl;
        int j=0, points = 0;
        for(j = 0; j < n; j++){
            cin >> compare[j];
        }
        
    }while(time_spent >= rtime);
    
   
}

void newGame() {
    int bool1=0;
    //header();
    cout << "Please enter your difficulty level" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "4. Back to main menu" << endl;
    int temp, points;
    cin >> temp;
    do{
        switch (temp) {
        case 1: level(65, points); break;
        case 2: level(97, points); break;
        case 3: level(120, points); break;
        //case 4: main(); break;
        default: bool1=1;
        }
    }while(bool1==1);
}