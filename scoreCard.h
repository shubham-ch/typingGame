//
void storeScore(int score, int speed, int level){
    int x=50, y=10;
    clrscr();
    gotoxy(x,y);

    ofstream file;
    file.open("score.txt");
    if(file.is_open()){
        cout << endl;
        file << "\nname = "name << "     " << "score = "score << "   " << "speed = "speed << "   " << "level ="level << endl;
    }
    else{
        cout << "Error opening file" << endl;
    }
    file.close;    
}

void printScore(){
    header();
    int x=50, y=10;
    clrscr();
    gotoxy(x,y);

    string line;
    ofstream file;
    cout << ".......The scores are......... " << endl;
    file.open("score.txt");
    if(file.is_open()){
        while(getline(file, line)){
            cout << line << '\n';
        }
        file.close()
    }

    else{
        cout << "Error reading file" << endl;
    }
}