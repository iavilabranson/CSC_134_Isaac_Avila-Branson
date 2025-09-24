//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program to make a table of an integer and its square in a for loop

#include <iostream>
#include <cmath>
using namespace std;

int main() {  
    int minNum = 0; //create integer for minNum
    int maxNum = 100; //create integer for maxNum
    string text = "Number   Number Squared \n";
    string hypens = "-----------------------\n";
    for (minNum; minNum < maxNum; minNum++) {
        cout << text << hypens << endl;
        cout << minNum << "           " << pow(minNum, 2) << "\n" << hypens << endl;
    }

    return 0;

}