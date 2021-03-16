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

int level(std::string name, int mode){
    //header();
    int rtime, time_spent, n, j, par1, par2, vp = 0; // n is random length for a word // rtime is timeduration for which game would run
    int points = 0;
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
            switch (mode){
                case 1: par1 = 26, par2 = 97; break;
                case 2: par1 = 56, par2 = 65; break;
                case 3: par1 = 92, par2 = 32; break;
            }
            r[i] = r[i] % par1 + par2;
            cout << (char)r[i] ;
        }
        cout << endl;
        j=0;
        for(j = 0; j < n; j++){
            cin >> compare[j];
        }
        //compare[strlen(compare)-1];
        for(j = 0; j < n; j++){
            if(compare[j] == r[j]){
                points++;
                vp++;
            }
            else{
                points--;
            }
        }
        time_spent = (int)(clock()-begin)/(CLOCKS_PER_SEC*60);
    }while(time_spent < rtime);
    double speed = vp/time_spent;
    storeScore(name, points, speed, mode);
    return points;
}

void newGame(std::string name) {
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
        case 1: points = level(name, 1); break;
        case 2: points = level(name, 2); break;
        case 3: points = level(name, 3); break;
        //case 4: main(); break;
        default: bool1=1;
        }
    }while(bool1==1);
    cout << "points: " << points << endl;
}