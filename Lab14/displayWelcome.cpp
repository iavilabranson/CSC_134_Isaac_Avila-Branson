//@author: Isaac Avila-Branson
//@date: 11/19/2025
//@purpose: Create a program to display a welcome message using functions

#include <iostream>
using namespace std;

void displayWelcome() {
    cout << "==============================" << '\n' << '\n' << "C++ Function Demonstration" <<
        '\n' << '\n' << "==============================";
        return; //leaving function
}

int main() {
    displayWelcome(); //call function
    return 0; //end program
}