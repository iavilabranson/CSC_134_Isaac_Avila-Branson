//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program to iterate through and count a for loop

#include <iostream>
using namespace std;

int main() {
    int value; // initialize value as int
    for (value = 0; value < 10; value++) {
        cout << value << endl; // Print current value of iteration
    }
    cout << "Exiting loop, ending iteration is : " << value << endl; //ending statement
    return 0;

}