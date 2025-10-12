//@author: Isaac Avila-Branson
//@date: 10/10/2025
//@purpose: Create a program to observe changes in file when removing newline operator

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream movieFile; //defining ofstream object
    movieFile.open("lab3.txt"); //creating text file named lab1.txt and linking it 
   //writing text to file
    movieFile << "Bourne Identity" << "Star Wars Episode IV" << "The Hunger Games" 
        << "Dead Pool" << "X-Men First Class" << "Star Wars Episode V" << "Get Out";
    movieFile.close(); //closing the file for good practice
}