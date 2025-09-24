//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program to create a times table for a users input

#include <iostream>
using namespace std;

int main() {   
    int userInput, index; //declare integer variables
    cout << "Enter an integer:" << endl; //prompt user for input
    cin >> userInput; //save user input into variable
    cout << "0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n"; //create table of integers
    for (index = 0; index <= 12; index++) {
        cout << index*userInput;
        cout << "\t";
    }

}