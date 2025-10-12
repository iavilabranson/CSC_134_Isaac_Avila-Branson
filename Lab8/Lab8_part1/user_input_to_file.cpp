//@author: Isaac Avila-Branson
//@date: 10/10/2025
//@purpose: Create a program to take user input and use it in file

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    int user_input;
    cout << "Enter an integer: ";
    cin >> user_input;
    ofstream outputFile; //defining ofstream object
    outputFile.open("lab4.txt");
    for (int i = 0; i < user_input; i++) {
        outputFile << i << "\t"; //writing number to file
    }
    outputFile.close(); //closing file for good practice
    cout << "Done Writing...."; //letting user know file is done writing
}