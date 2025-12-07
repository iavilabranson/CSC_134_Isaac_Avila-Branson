//@author: Isaac Avila-Branson
//@date: 10/04/2025
//@purpose: Create a program to calculate the projected revenue of the club

#include <iostream>
#include <iomanip> //allow usage of setprecision(n)
using namespace std;

int main() { 
    double starting_value = 250000;
    cout << setprecision(12); //attempting to correct error with printing floats to console
    for (int i = 1; i <= 5; i++) {
        starting_value = starting_value  * 1.06 ;
        cout << "Current Year is: " << i << " Current price is: " << starting_value << "\n";
    }
    return 0;
    
}