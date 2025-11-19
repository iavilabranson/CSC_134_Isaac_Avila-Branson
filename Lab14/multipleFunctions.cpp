//@author: Isaac Avila-Branson
//@date: 11/19/2025
//@purpose: Create a program to square and average integers with multiple functions

#include <iostream>
using namespace std;

int averageValues(int num1, int num2, int num3) {
    int average;
    average = (num1 + num2 + num3) / 3; //calculate average of three numbers
    return average; //return result
}

int squareNumber(int input) {
    int userResult; //declare integer to hold result of square
    userResult = input * input;
    return userResult; //return the calculated result to main
}

void multipleFuncs() {
    int squaredNumber = squareNumber(6); //store squared number into variable
    int averages = averageValues(1, 2, 3); //store average number into variable
    //print results out
    cout << "Squared Number is: " << squaredNumber << '\n' << 
        "Average Number is: " << averages << endl;
}

int main() {
    multipleFuncs(); //Call function w/ multiple function calls inside
    return 0; //end program
}