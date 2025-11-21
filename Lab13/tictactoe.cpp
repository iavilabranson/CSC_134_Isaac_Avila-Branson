//@author: Isaac Avila-Branson
//@date: 11/19/2025
//@purpose: Create a program to allow users to play a game of tic-tac-toe

#include <iostream>
#include <array>
using namespace std; 

int main() {
    int board[3][3];

    //initialize board with 0s
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = 0;
        }
    }

    int currentPlayer = 1;   // 1 = X, 2 = O
    bool gameOver = false;

    while (!gameOver) {
        // draw board
        cout << "\nCurrent board:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == 1) cout << "X ";
                else if (board[i][j] == 2) cout << "O ";
                else cout << ". ";
            }
            cout << endl;
        }
        cout << endl;

        //player input
        int row, col;
        cout << "Player " << currentPlayer << " enter row (0-2): ";
        cin >> row;
        cout << "Enter column (0-2): ";
        cin >> col;

        //check valid move
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            cout << "Invalid position.\n";
            continue;
        }

        if (board[row][col] != 0) {
            cout << "Spot already taken.\n";
            continue;
        }

        // place mark
        board[row][col] = currentPlayer;

        //check win conditions
        for (int i = 0; i < 3; i++) {
            // rows
            if (board[i][0] == currentPlayer &&
                board[i][1] == currentPlayer &&
                board[i][2] == currentPlayer)
                gameOver = true;

            // columns
            if (board[0][i] == currentPlayer &&
                board[1][i] == currentPlayer &&
                board[2][i] == currentPlayer)
                gameOver = true;
        }

        // diagonals
        if (board[0][0] == currentPlayer &&
            board[1][1] == currentPlayer &&
            board[2][2] == currentPlayer)
            gameOver = true;

        if (board[0][2] == currentPlayer &&
            board[1][1] == currentPlayer &&
            board[2][0] == currentPlayer)
            gameOver = true;

        // check draw
        bool draw = true;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == 0)
                    draw = false;

        if (gameOver) {
            cout << "\nPlayer " << currentPlayer << " wins!\n";
        } else if (draw) {
            cout << "\nDraw\n";
            gameOver = true;
        } else {
            // switch players
            if (currentPlayer == 1) currentPlayer = 2;
            else currentPlayer = 1;
        }
    }

    return 0; //end program
}
