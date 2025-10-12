//@author: Isaac Avila-Branson
//@date: 10/10/2025
//@purpose: Create a program to take user input and write names of three friends to file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() { 
    string friend1;
    string friend2;
    string friend3;
    cout << "Enter name of first friend: ";
    cin >> friend1;
    cout << "Enter name of second friend: ";
    cin >> friend2;
    cout << "Enter name of third friend: ";
    cin >> friend3;
    ofstream friendsList; //define ofstream Object
    friendsList.open("lab5.txt"); //open text file named lab5 linked to object
    friendsList << friend1 << "\n" << friend2 << "\n" << friend3 << "\n";
    friendsList.close(); //closing file
}