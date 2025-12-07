//@author: Isaac Avila-Branson
//@date: 09/15/2025
//@purpose: Create a program to calculate the angle of a triangle given sides

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float c, theta,x,y; //declare float values
    //assign side length values
    x = 3;
    y = 4;
    c = sqrt(pow(x,2) + pow(y,2)); //calculate hypotenuse using formula
    theta =  atan2(y,x); //calculate the angle
    theta = (theta) * (180 / M_PI); //convert theta to radians
    cout << theta << endl; //ensure theta value is 51.3
    //check to confirm theta is a 3-4-5 triangle and print if it is
    if (theta = 51.3) {
        cout << "This is a 3-4-5 Triangle" << endl;
    }
    else {
        cout << "This is not a 3-4-5 Triangle" << endl;
    }


    return 0;



}