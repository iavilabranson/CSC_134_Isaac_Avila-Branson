//@author: Isaac Avila-Branson
//@date: 09/15/2025
//@purpose: Create a program to loop and add the iterations

#include <iostream>

using namespace std;

int main() {
    int iterations = 0; //set initial iterations to 0

    while (iterations < 100) {
        iterations++; //increment iterations by 1
        cout << "The number of iterations is " << iterations << endl; //print current point
    }

    cout << "The final number of iterations is " << iterations << endl;
    return 0;

}