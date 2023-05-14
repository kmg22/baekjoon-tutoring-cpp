#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {
private:
    char board[3][3];
    bool isPlayerTurn;
    bool checkWin(char symbol) {
        for(int i = 0; i < 3; i++) {
            if(board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) { return true; } // 가로
            if(board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol) { return true; } // 세로
            if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) { return true; } // 우하향 대각선
            if(board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) { return true; } // 우상향 대각선
        }
        return false;
    }

    bool checkTie() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

public:
    Game() {
        // Initialize the game board with empty spaces
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
        
        // Player goes first
        isPlayerTurn = true;
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            cout << "---|---|---" << endl;
            cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
        }
        cout << "---|---|---" << endl;
    }

    bool makeMove(int row, int col, char symbol) {
        // Check if the cell is empty
        if (board[row][col] == ' ') {
            board[row][col] = symbol;
            return true;
        } else {
            return false;
        }
    }

    void play() {
        char playerSymbol = 'O';
        char computerSymbol = 'X';

        while (true) {
            display();

            // Player's turn
            if (isPlayerTurn) {
                cout << endl << "<Player Turn>" << endl;
                cout << "Input (row, col): ";
                int row, col;
                cin >> row >> col;
                if (makeMove(row, col, playerSymbol)) {
                    if (checkWin(playerSymbol)) {
                        cout << "Congratulations! You win!" << endl;
                        return;
                    } else if (checkTie()) {
                        cout << "It's a tie!" << endl;
                        return;
                    }
                    isPlayerTurn = false;
                } else {
                    cout << "Invalid move. Please try again." << endl;
                }
            }

            // Computer's turn
            else {
                cout << endl << "<Computer Turn>" << endl;
                while (true) {
                    int row = rand() % 3;
                    int col = rand() % 3;
                    if (makeMove(row, col, computerSymbol))
                    {
                        if (checkWin(computerSymbol))
                        {
                            cout << "Sorry, you lose." << endl;
                            return;
                        }
                        else if (checkTie())
                        {
                            cout << "It's a tie!" << endl;
                            return;
                        }
                        isPlayerTurn = true;
                        break;
                    }
                }
            }
        }
    }
};

int main()
{
    srand(time(NULL));
    Game game;
    game.play();
    return 0;
}
