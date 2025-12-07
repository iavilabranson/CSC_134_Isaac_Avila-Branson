//@author: Isaac Avila-Branson
//@date: 09/01/2025
//@purpose: Calculate the voltage

#include <iostream>
using namespace std;

int main() {
    //declare all integer variables on one line
    int voltage, current, resistance;
    resistance = 2;
    current = 10;
    voltage = current * resistance;
//print calculated voltage
std::cout << "The Voltage is: " << voltage << std::endl;

return 0;

}