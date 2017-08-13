#include <iostream>

using namespace std;

void display();
bool checkWin();
char square[] = {'0','1','2','3','4','5','6','7','8','9'};


int main()
{
    cout << "Hello World!" << endl;
    display();
    int player = 1;
    int choice;
    char mask;
    bool isWin = false;

    while(!isWin){
        display();

        player = (player % 2) ? 1 : 2;
        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;
        mask = (player == 1) ? 'X' : 'O';

        if(choice == 1 && square[1] == '1')
            square[choice] = mask;
        else if(choice == 2 && square[2] == '2')
            square[choice] = mask;
        else if(choice == 3 && square[3] == '3')
            square[choice] = mask;
        else if(choice == 4 && square[4] == '4')
            square[choice] = mask;
        else if(choice == 5 && square[5] == '5')
            square[choice] = mask;
        else if(choice == 6 && square[6] == '6')
            square[choice] = mask;
        else if(choice == 7 && square[7] == '7')
            square[choice] = mask;
        else if(choice == 8 && square[8] == '8')
            square[choice] = mask;
        else if(choice == 9 && square[9] == '9')
            square[choice] = mask;
        else{
            cout << "Invalid Move";
            player--;
            cin.ignore();
            cin.get();
        }
        isWin = checkWin();
        player++;
    }
    display();
    if(isWin)
        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";
    cin.ignore();
    cin.get();
    return 0;
}

void display(){
    system("cls");  //  清屏
    cout << "\n\n\tTic Tac Toe\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
    cout << "\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;
    cout << "\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;
    cout << "\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "\t     |     |     " << endl << endl;
}

bool checkWin(){
    if(square[1] == square[2] && square[2] == square[3])
        return true;
    else if(square[4] == square[5] && square[5] == square[6])
        return true;
    else if(square[7] == square[8] && square[8] == square[9])
        return true;
    else if(square[1] == square[4] && square[4] == square[7])
        return true;
    else if(square[2] == square[5] && square[5] == square[8])
        return true;
    else if(square[3] == square[6] && square[6] == square[9])
        return true;
    else if(square[1] == square[5] && square[5] == square[9])
        return true;
    else if(square[3] == square[5] && square[5] == square[7])
        return true;
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' &&
            square[4] != '4' && square[5] != '5' && square[6] != '6' &&
            square[7] != '7' && square[8] != '8' && square[9] != '9')
        return false;
    return false;
}

