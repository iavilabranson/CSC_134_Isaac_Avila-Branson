//@author: Isaac Avila-Branson
//@date: 11/02/2025
//@purpose: Design a program to read sales from a text file and store them in an array, then sum the values

#include <iostream>
#include <fstream>

using namespace std;
int main() { 
    //initialize our integers
    int index = 5;
    int array[index];
    int currentValue = 0;
    float totalSum = 0;

    ifstream sales; //create ifstream object to read file
    sales.open("sales.txt"); //open sales.txt file
    //store current line int into current value int, assign currentValue at index of array, calculate sum
    for (int i = 0; i < index; i++) {
        sales >> currentValue;
        array[i] = currentValue;
        totalSum = currentValue + totalSum;
    }
    cout << "The total sum is: " << totalSum << endl; //print end result
 }