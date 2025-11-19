//@author: Isaac Avila-Branson
//@date: 11/19/2025
//@purpose: Create a program to average three integers using functions

#include <iostream>
using namespace std; 

int averageValues(int num1, int num2, int num3) {
    int average;
    average = (num1 + num2 + num3) / 3; //calculate average of three numbers
    return average; //return result
}

int main() {
    int average = averageValues(1, 2, 3); //create integer to hold function result & call function
    cout << "The Average is: " << average << endl;
    return 0;
}