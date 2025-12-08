//@author: Isaac Avila-Branson
//@date: 12/08/2025
//@purpose: Create a program to determine where a launched object will  land

#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    //initialize and set our variables for the quadratic formula
    double a = -0.01568;
    double b = 1.00000;
    double c = 1.5;
    double x_add = 0;
    double x_subtract = 0;


    //logic for calculating both the subtraction and addition portion 
    x_add = ((-1 * b) + sqrt((b * b) - (4*a*c))) / (2 * a);
    x_subtract = ((-1 * b) - sqrt((b * b) - (4*a*c))) / (2 * a);
   
   //check if x_add is the positive result, if not print x_subtract
    if (x_add > 0) {
        cout << "The reuslt is: " << x_add << endl;
    }
    else {
        cout << "The Result is: " << x_subtract << endl;
    }
}

//65.2418