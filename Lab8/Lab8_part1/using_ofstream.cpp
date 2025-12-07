//@author: Isaac Avila-Branson
//@date: 10/10/2025
//@purpose: Create a program to utilize ofstream to write text to a file

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream movieFile; //defining ofstream object
    movieFile.open("lab1.txt"); //creating text file named lab1.txt and linking it 
   //writing text to file
    movieFile << "Bourne Identity\n" << "Star Wars Episode IV\n" << "The Hunger Games\n" 
        << "Dead Pool\n" << "X-Men First Class\n" << "Star Wars Episode V\n" << "Get Out\n";
    movieFile.close(); //closing the file for good practice
}