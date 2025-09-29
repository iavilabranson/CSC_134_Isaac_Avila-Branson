//@author: Isaac Avila-Branson
//@date: 09/29/2025
//@purpose: Create a program to create a right triangle based on user input

#include <iostream>
using namespace std;

int main() { 
    int user_number_of_rows, row, column, zero_comparator; //declare variables
    zero_comparator = 0;
    cout << "Please enter a number of rows: " << endl;
    cin >> user_number_of_rows;
    cout << "\n";
    for (row = 1; row < user_number_of_rows; row++) { 
        for (column = 1; (user_number_of_rows - column) != zero_comparator; column++) {
            cout << "*";
        }
        cout << "\n";
    }



}