//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program to roll a dice based on user input

#include <iostream>
#include <cstdlib>
using namespace std;
int main() { 
    srand(time(NULL)); // seed
    int rolls; //create int for number of rolls
    cout << "Enter how many rolls: "; //prompt user for input
    cin >> rolls; //store user input
    for (int i = 0; i < rolls; i++) {
        cout << rand() % 6 + 1 << endl;
    }
}