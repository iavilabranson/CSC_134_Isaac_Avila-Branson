//@author: Isaac Avila-Branson
//@date: 09/01/2025
//@purpose: Calculate the Force

#include <iostream>
using namespace std;

int main() {
   //declare variables and assign values
    int mass;
    float acceleration, force;
    mass = 10;
    acceleration = 9.81;
    force = mass * acceleration;
//print values
std::cout << "The force is: " << force << std::endl;

return 0;

}
