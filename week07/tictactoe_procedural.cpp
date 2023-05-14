#include <iostream>
#include <cstdlib>

using namespace std;

void setting(char board[3][3]);
void display(char board[3][3]);
int win_check(char board[3][3]);

int main(void)
{
    char board[3][3];
    int x, y;
    setting(board);
    display(board);

TURN_CHANGE:
    while(1)
    {
        cout << endl << "<Player Turn>" << endl;
        cout << "input (x, y)" << endl;
        cin >> x >> y;
        if(board[x][y] == ' ')
        {
            board[x][y] = 'O';
            display(board);
            if(win_check(board) == 1)
            {
                cout << "YOU WIN" << endl;
                return 0;
            }
        }
        else
        {
            cout << "invalid input. try again..." << endl;
            continue;
        }
        // computer turn
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == ' ')
                {
                    cout << "=============" << endl;
                    cout << "<Computer Turn>" << endl;
                    board[i][j] = 'X';
                    display(board);
                    if(win_check(board) == 1)
                    {
                        cout << "YOU LOSE" << endl;
                        return 0;
                    }
                    goto TURN_CHANGE;
                }
            }
        }
    }
    return 0;
}

void setting(char board[3][3]) // board setting
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void display(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "---|---|---" << endl;
        cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
    }
    cout << "---|---|---" << endl;
}

int win_check(char board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ') { return 1; } // 가로
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ') { return 1; } //  세로 
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ') { return 1; } //  우하향 대각선
        if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ') { return 1; } //  우상향 대각선
    }
    return 0;
}