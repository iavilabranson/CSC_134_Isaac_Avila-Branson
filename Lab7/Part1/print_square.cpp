//@author: Isaac Avila-Branson
//@date: 10/04/2025
//@purpose: Create a program to create a square based on user input

#include <iostream>
using namespace std;

int main() { 
    int side_length, row, column; //declare variables
    cout << "Please enter the side length: " << endl; //prompt user for input
    cin >> side_length; //store user input
    cout << "\n"; //create space for square
    for (row = 0; row < side_length; row++) { //starts new row
        for (column = 0; (column != side_length); column++) { //ensure column prints * for number of side length
            cout << "* ";
        }
        cout << "\n"; //print new line for formatting
    }

}
