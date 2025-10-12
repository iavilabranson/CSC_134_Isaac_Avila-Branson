//@author: Isaac Avila-Branson
//@date: 10/10/2025
//@purpose: Create a program to take input from a file and print it to console

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    string name;
    string last_name;
    ifstream inputFile; //define file object to read
    inputFile.open("friends.txt"); //reading text from file
    cout << "Reading data from file: \n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile >> name;
    inputFile >> last_name;
    cout << name << " " << last_name <<"\n";
    inputFile.close(); //closing file
}