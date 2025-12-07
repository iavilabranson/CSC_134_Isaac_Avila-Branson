//@author: Isaac Avila-Branson
//@date: 10/10/2025
//@purpose: Create a program to take input from a file & sum values to print result

#include <iostream>
#include <fstream>

using namespace std;
int main() { 
    int number; //define variable to hold line integer
    int sum = 0; //define integer to hold running sum
    ifstream inputFile; //define file object to read
    inputFile.open("numbers.txt"); //reading text from file
    cout << "Reading data from file: \n";
    for (int i = 0; i < 10; i++) {
        inputFile >> number; //store line integer into number
        sum = number + sum; //sum the current line value of number with running total
    }
    cout << "The sum of the values is: " << sum << "\n";
}