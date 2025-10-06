//@author: Isaac Avila-Branson
//@date: 09/29/2025
//@purpose: Create a program to create a right triangle based on user input

#include <iostream>
using namespace std;

int main() { 
    int user_number_of_rows, row, column; //declare variables
    cout << "Please enter a number of rows: " << endl; //prompt user for input
    cin >> user_number_of_rows; //store user input
    cout << "\n"; //create space for right triangle
    for (row = 0; row < user_number_of_rows; row++) { 
        for (column = 1; (column <= row); column++) {
            cout << "*";
        }
        cout << "\n";
    }

}

