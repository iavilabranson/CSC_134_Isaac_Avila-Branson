//@author: Isaac Avila-Branson
//@date: 10/04/2025
//@purpose: Create a program to create a chessboard based on user input

#include <iostream>
using namespace std;

int main() { 
    int board_size, row, column; //declare variables
    cout << "Please enter the side length: " << endl; //prompt user for input
    cin >> board_size; //store user input
    cout << "\n"; //create space for square
    for (row = 0; row < board_size; row++) { //starts new row
        for (column = 0; (column != board_size); column++) { //ensure column prints * for number of side length
            if ((row + column) % 2 == 0) { // alternate pattern
                cout << "* ";
            else {
                cout << "  ";
            }
        }
        cout << "\n"; //print new line for formatting
    }
    }
}
