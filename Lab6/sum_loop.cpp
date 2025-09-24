//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program to iterate 50 times and sum value of adder

#include <iostream>
using namespace std;

int main() {   
    int sumOp, adder; //create integers to store values
    sumOp = 0;
    adder = 10;
    for (sumOp; sumOp < 50; sumOp++) {
        cout << "Value of sumOp: " << sumOp << endl;
        adder = sumOp + adder;
    }



}