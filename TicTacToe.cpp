#include <iostream>
#include <random>
//#include "stdafx.h"

using namespace std;

class TicTacToe{
public:
    char board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' }, player[2] = { 'X','O' }, playerChoice[9], human, ai, choice;
    int currentPlayer, tie, x, o;
    bool win;
    
    TicTacToe(){
        currentPlayer = 0, tie = 0, x = 0, o = 0;
        win = false;
    };
    
    void three_row(){
        for(int z = 0; z < 2; z++){
            for(int i = 0; i < 3; i++){
                if((board[i][2]== board[i][1])&&(board[i][0]==board[i][1])){
                    win = true;
                }
            }
            for(int i = 0; i < 3; i++){
                if((board[2][i] == board[1][i]) && (board[0][i] == board[1][i])){
                    win = true;
                }
            }
            if((board[1][1] == player[z]) && (((board[0][0] == player[z]) && (board[2][2]==player[z])) || ((board[0][2] == player[z]) && (board[2][0] == player[z])))){
                win = true;
            }
            if(win == true){
                if(player[z] == ai){
                    cout << endl << "Obviously the computer has won, really you never stood a chance." << endl << endl;
                } else if (player[z] == human){
                    cout << endl << "Remarkable, this bot has never been defeated!" << endl << endl;
                }
                break;
            }
        }
    }
    
    int complete_three_row(char p, int i){
        if((((board[1][0] == p) && (board[2][0] == p)) || ((board[1][1] == p) && (board[2][2] == p)) || ((board[0][1] == p) && (board[0][2] == p))) && board[0][0] == '1'){
            i = 1;
        } else if((((board[0][0] == p) && (board[0][2] == p)) || ((board[1][1] == p) && (board[2][1] == p))) && board[0][1] == '2'){
            i = 2;
        } else if((((board[1][2] == p) && (board[2][2] == p)) || ((board[1][1] == p) && (board[2][0] == p)) || ((board[0][0] == p) && (board[0][1] == p))) && board[0][2] == '3'){
            i = 3;
        } else if((((board[0][0] == p) && (board[2][0] == p)) || ((board[1][1] == p) && (board[1][2] == p))) && board[1][0] == '4'){
            i = 4;
        } else if((((board[0][1] == p) && (board[2][1] == p)) || ((board[0][0] == p) && (board[2][2] == p)) || ((board[1][0] == p) && (board[1][2] == p)) || ((board[2][0] == p) && (board[0][2] == p))) && board[1][1] == '5'){
            i = 5;
        } else if((((board[0][2] == p) && (board[2][2] == p)) || ((board[1][0] == p) && (board[1][1] == p))) && board[1][2] == '6'){
            i = 6;
        } else if((((board[0][0] == p) && (board[1][0] == p)) || ((board[2][1] == p) && (board[2][2] == p))) && board[2][0] == '7'){
            i = 7;
        } else if((((board[0][1] == p) && (board[1][1] == p)) || ((board[2][0] == p) && (board[2][2] == p))) && board[2][1] == '8'){
            i = 8;
        } else if((((board[0][2] == p) && (board[1][2] == p)) || ((board[0][0] == p) && (board[1][1] == p)) || ((board[2][0] == p) && (board[2][1] == p))) && board[2][2] == '9'){
            i = 9;
        }
        return i;
    }
    
    void switchPlayer(){
        if(currentPlayer == 0){
            currentPlayer = 1;
        } else {
            currentPlayer = 0;
        }
    }
    
    void draw(){
        for(int i = 0; i < 3; i++){
            if(i == 0){
                cout << "    Peerless Tic-Tac-Toe" << endl << endl;
            }
            for(int j = 0; j < 3; j++){
                if(j == 0){
                    cout << "         " << board[i][j];
                } else if(j == 1){
                    cout << " | " << board[i][j] << " | ";
                }else if(j == 2){
                    cout << board[i][j] << " ";
                }
            }
            if(i != 2){
                cout << endl << "        -----------" << endl;
            }
        }
        cout << endl << endl;
    }
    
    void input(){
        bool reset=false;
        int a = 5, value;
        do{
            do{
                if(((human == 'X') && (tie%2 == 0)) || ((human == 'O') && (tie%2 != 0))){
                    cout << "In which spot would you like to place your '" << human << "' (1-9)? ";
                    cin >> a;
                } else if(((human == 'X') && (tie%2 != 0)) || ((human == 'O') && (tie%2 == 0))){
                    a = bot_input();
                }
                if ((a > 9) || (a < 1)){
                    cout << endl << "Invalid Input, make sure to use a number from 1-9!" << endl;
                }
            } while((a > 9)||(a<1));
            value = a;
            for(int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    a--;
                    if (a == 0){
                        if ((board[i][j] == 'X')||(board[i][j]=='O')){
                            cout << endl << "Please select a location on the board that is not occupied." << endl;
                            reset = true;
                        } else {
                            board[i][j] = player[currentPlayer];
                            if((human == 'X') && (tie%2 != 0)){
                                playerChoice[x] = value;
                                x++;
                            } else if((human == 'O') && (tie%2 == 0)){
                                playerChoice[o] = value;
                                o++;
                            }
                            reset = false;
                        }
                        break;
                    }
                }
            }
        } while(reset == true);
    }
    
    int bot_input(){
        int b = 0;
        random_device rd;
        mt19937 rng(rd());
        if(((board[0][0] != '1') && (board[0][2] != '3')) && ((board[2][0] != '7') && (board[2][2] != '9'))){
            uniform_int_distribution<int> uni(0,1);
            int random = uni(rng);
            if((board[0][0] == board[0][2]) && (board[2][0] == board[2][2])){
                switch(random){
                    case 0:
                        b = 4;
                        if(board[1][0] == '4'){
                            break;
                        }
                    case 1:
                        b = 6;
                        if(board[1][2] == '6'){
                            break;
                        }
                }
            }
            if((board[0][0] == board[2][0]) && (board[0][2] == board[2][2])){
                switch(random){
                    case 0:
                        b = 2;
                        if(board[0][1] == '2'){
                            break;
                        }
                    case 1:
                        b = 8;
                        if(board[2][1] == '8'){
                            break;
                        }
                }
            }
        }
        if((((board[0][1] != '2') && (board[2][1] != '8')) || ((board[0][0] != '1') && (board[2][2] != '9')) || ((board[1][0] != '4') && (board[1][2] != '6'))) && board[1][1] == '5'){
            b = 5;
        } else if((((board[0][0] != '1') && (board[0][2] != '3')) || ((board[1][1] != '5') && (board[2][1] != '8'))) && board[0][1] == '2'){
            b = 2;
        } else if((((board[0][0] != '1') && (board[2][0] != '7')) || ((board[1][1] != '5') && (board[1][2] != '6'))) && board[1][0] == '4'){
            b = 4;
        } else if((((board[0][2] != '3') && (board[2][2] != '9')) || ((board[1][0] != '4') && (board[1][1] != '5'))) && board[1][2] == '6'){
            b = 6;
        } else if((((board[0][2] != '3') && (board[1][2] != '6')) || ((board[0][0] != '1') && (board[1][1] != '5')) || ((board[2][0] != '7') && (board[2][1] != '8'))) && board[2][2] == '9'){
            b = 9;
        }
        if(((tie == 0) || (board[1][1] != '5')) || (((board[0][1] == human) || (board[1][0] == human) || (board[1][2] == human) || (board[2][1] == human)))){
            int random;
            if(tie == 0){
                uniform_int_distribution<int> uni(0,3);
                random = uni(rng);
            } else {
                random = 0;
            }
            if((board[0][0] == '1') || (board[0][2] == '3') || (board[2][0] == '7') || (board[2][2] == '9')){
                switch(random){
                    case 0:
                        b = 1;
                        if(board[0][0] == '1'){
                            break;
                        }
                    case 1:
                        b = 3;
                        if(board[0][2] == '3'){
                            break;
                        }
                    case 2:
                        b = 7;
                        if(board[2][0] == '7'){
                            break;
                        }
                    case 3:
                        b = 9;
                        if(board[2][2] == '9'){
                            break;
                        }
                    default:
                        break;
                }
            }
        } else if(((board[0][0] == ai) || (board[2][2] == ai)) && ((board[0][1] == human) || (board[0][2] == human) || (board[1][2] == human)) && (board[2][0] == '7')){
            b = 7;
        } else if(((board[0][0] == ai) || (board[2][2] == ai)) && ((board[1][0] == human) || (board[2][0] == human) || (board[2][1] == human)) && (board[0][2] == '3')){
            b = 3;
        } else if(((board[0][2] == ai) || (board[2][0] == ai)) && ((board[0][1] == human) || (board[0][0] == human) || (board[1][0] == human)) && (board[2][2] == '9')){
            b = 9;
        } else if(((board[0][2] == ai) || (board[2][0] == ai)) && ((board[2][1] == human) || (board[2][2] == human) || (board[1][2] == human)) && (board[0][0] == '1')){
            b = 1;
        }
        if(((board[0][0] != '1') || (board[0][2] == '3') || (board[2][0] != '7') || (board[2][2] != '9')) && (board[1][1] == '5')){
            b = 5;
        }
        if(ai == player[1]){
            if(((board[0][0] == human) && (board[0][1] == '2')) || ((board[0][2] == human) && (board[0][1] == '2'))){
                b = 2;
            } else if(((board[0][0] == human) && (board[1][0] == '4')) || ((board[2][0] == human) && (board[1][0] == '4'))){
                b = 4;
            } else if(((board[0][2] == human) && (board[1][2] == '6')) || ((board[2][2] == human) && (board[1][2] == '6'))){
                b = 6;
            } else if(((board[2][0] == human) && (board[2][1] == '8')) || ((board[2][2] == human) && (board[2][1] == '8'))){
                b = 8;
            }
            if((((board[0][0] == human) && (board[1][0] != '4')) || ((board[0][2] == human) && (board[1][2] != '6'))) && (board[0][1] == '2')){
                b = 2;
            } else if((((board[0][0] == human) && (board[0][1] != '2')) || ((board[2][0] == human) && (board[2][1] != '8'))) && (board[1][0] == '4')){
                b = 4;
            } else if((((board[0][2] == human) && (board[0][1] != '2')) || ((board[2][2] == human) && (board[2][1] != '8'))) && (board[1][2] == '6')){
                b = 6;
            } else if((((board[2][0] == human) && (board[1][0] != '4')) || ((board[2][2] == human) && (board[1][2] != '6'))) && (board[2][1] == '8')){
                b = 8;
            }
            if((board[1][1] != '5') && (((board[0][2] == human) || (board[2][0] == human)) || ((board[0][0] == human) || (board[2][2] == human)))){
                uniform_int_distribution<int> uni(0,1);
                int random = uni(rng);
                switch(random){
                    case 0:
                        b = 2;
                        if(board[0][1] == '2'){
                            break;
                        }
                    case 1:
                        b = 8;
                        if(board[2][1] == '8'){
                            break;
                        }
                    default:
                        break;
                }
            }
            if((tie >= 3) && (board[1][1] == '5')){
                b = 5;
            }
            if(board[1][1] == human){
                if(((board[0][2] == human) || (board[2][0] == human)) && (board[0][0] == '1')){
                    b = 1;
                } else if((board[0][0] == human) && (board[0][2] == '3')){
                    b = 3;
                } else if((board[2][2] == human) && (board[2][0] == '7')){
                    b = 7;
                } else if((board[0][2] == human) && (board[2][2] == '9')){
                    b = 9;
                }
                if(((board[0][0] == human) || (board[0][2] == human)) && (board[0][1] == '2')){
                    b = 2;
                } else if(((board[0][0] == human) || (board[2][0] == human)) && (board[1][0] == '4')){
                    b = 4;
                } else if(((board[0][2] == human) || (board[2][2] == human)) && (board[1][2] == '6')){
                    b = 6;
                } else if(((board[2][2] == human) || (board[2][0] == human)) && (board[2][1] == '8')){
                    b = 8;
                }
            }
            for(int i = 0; i < 3; i++){
                for(int z = 0; z < 3; z++){
                    if((((board[0][i] == human) && (board[z][0] == human)) && ((board[0][i] != ai) && (board[z][0] != ai)) && (board[2][0] != board[0][2])) && (board[0][0] == '1')){
                        b = 1;
                    } else if((((board[0][i] == human) && (board[z][2] == human)) && ((board[0][i] != ai) && (board[z][2] != ai)) && (board[0][0] != board[0][2])) && (board[0][2] == '3')){
                        b = 3;
                    } else if((((board[2][i] == human) && (board[z][0] == human)) && ((board[2][i] != ai) && (board[z][0] != ai)) && (board[0][0] != board[2][2])) && (board[2][0] == '7')){
                        b = 7;
                    } else if((((board[2][i] == human) && (board[z][2] == human)) && ((board[2][i] != ai) && (board[z][2] != ai)) && (board[2][0] != board[0][2])) && (board[2][2] == '9')){
                        b = 9;
                    }
                }
            }
        }
        b = complete_three_row(human, b);
        b = complete_three_row(ai, b);
        return b;
    }

    void play(){
        draw();
        while(win == false){
            if(tie == 0){
                char choice;
                cout << "Would you like to play as 'X' or 'O'? ";
                cin >> choice;
                if(choice == 'X'){
                    human = player[0];
                    ai = player[1];
                } else if(choice == 'O'){
                    human = player[1];
                    ai = player[0];
                }
                input();
                if((choice == 'X') || (choice == 'O')){
                    tie++;
                }
            } else if(tie == 9){
                cout << endl << "Draw, Neither the Player or Computer has won." << endl << endl;
                break;
            } else {
                input();
                tie++;
            }
            switchPlayer();
            draw();
            three_row();
        }
    }
};

int main(){
    while(1){
        TicTacToe game;
        game.play();
    }
    //system("pause");
}