//@author: Isaac Avila-Branson
//@date: 11/19/2025
//@purpose: Create a program to square an integer using functions

#include <iostream>
using namespace std;

int squareNumber(int input) {
    int userResult; //declare integer to hold result of square
    userResult = input * input;
    return userResult; //return the calculated result to main
}

int main() { 
    int userInput = 0;
    cout << "Please Enter an Integer: "; //prompt user for input
    cin >> userInput; //store user input in variable
    int squaredNumber = squareNumber(userInput); //call the function using the user input
    cout << "The Square of " << userInput << " is " << squaredNumber << endl;
    return 0; //end program
}