//@author: Isaac Avila-Branson
//@date: 09/24/2025
//@purpose: Create a program to count backwards in for-loop

#include <iostream>
using namespace std;

int main() { 
    int iteration; //create integer for iteration
    for (iteration = 100; iteration > 1; iteration--) {
        cout << "current iteration: " << iteration << endl; //print current iteration
    }
    cout << "Loop complete" << endl;
    return 0;
}