//@author: Isaac Avila-Branson
//@date: 11/19/2025
//@purpose: Create a program to pass an integer into a function and iterate through a for loop

#include <iostream>
using namespace std;

int loop(int index) {
    int i; //declare integer for loop, done to help return value
    for (i = 0; i < index; i++) {
        cout << "Current iteration is: " << i << endl; //print current iteration
    }
    return i; //return number of iterations
}

int main() {
    int userIndex = 0; //define userIndex before user input
    cout << "Enter integer to iterate over: "; //prompt user for input
    cin >> userIndex; //store user input
    int result = loop(userIndex); //call the function and store index into result
    cout << "Total Iterations: " << result << endl; //print the total number of iterations
    return 0; //end program
}