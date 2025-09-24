//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program to iterate 50 times and sum value of adder

#include <iostream>
using namespace std;

int main() {   
    int sumOp, adder, index; //create integers to store values
    sumOp = 0; //Initialize sumOp and adder in next line
    adder = 10;

    for (index = 0; index < 50; index++) {
        sumOp = sumOp + adder + index; //sum sumOp, adder, and the index and assign 
        cout << "Value of sum: " << sumOp << endl; //Print current value of sumOp
    }
    return 0;


}