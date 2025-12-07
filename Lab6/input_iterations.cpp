//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program that iterates to a users input value

#include <iostream>
using namespace std;

int main() {
    int user_input, current_iterations; //declare integer variables
    cout << "Please input an integer: " << endl; //prompt user for input
    cin >> user_input; //store user input in variable
    for (current_iterations = 0; current_iterations < user_input; current_iterations++) {
        cout << "Current Iteration: " << current_iterations << endl;
    }
    return 0;
    



 }
