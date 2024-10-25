#include<iostream>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkWin(){

    int winPatterns[8][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {1,4,7}, {2,5,8}, {3,6,9}, {1,5,9},{3,5,7}};
    for(auto &pattern : winPatterns){
        if(square[pattern[0]] == square[pattern[1]] && square[pattern[1]] == square[pattern[2]])
            return 1;
    }
    for(int i=1; i<=9; i++){
        if(square[i] == '0' + i)
            return -1;  //Square not filled
    }
    return 0; //Draw
}

void board(){
    system("cls");
    cout<<"\n\n\nTic Tac Toe Game\n\n\n";

    cout<<"Player 1(X) - Player 2(O)"<<"\n"<<endl;
    
    cout<<"    |    |    "<<endl;
    for(int i=1; i<=9; i+=3){
        cout<<"  "<<square[i]<<" |  "<<square[i+1]<<" | "<<square[i+2]<<endl;
        if(i < 7)
            cout<<"____|____|____"<<endl;
            cout<<"    |    |    "<<endl;
    }
    cout<<"    |    |    "<<endl;
}

int main(){
    int player = 1, i, choice;
    char mark;
    do{
        board();
        player = (player%2)?1:2;
        cout<<"Player "<<player<<" \nEnter the number: ";
        cin>>choice;
        mark = (player == 1)?'X':'O';
        while(!choice || choice > 9 || choice < 1 || (square[choice] != '0' + choice)){
            cout<<"INVLAID MOVE!!!";
            cin.ignore();
        }
        square[choice] = mark;
        i = checkWin();
        player++;
    }
    while(i == -1);
    board();
    if(i == 1)
        cout<<"\aCONGRATULATIONS!!! PLAYER "<<--player<<" WINS!";
    else
        cout<<"\aGAME DRAW!!!";
    cin.ignore();
    cin.get();
    return 0;
}