//@author: Isaac Avila-Branson
//@date: 08/27/2025
//@purpose: attempt to divide by zero and observe what happens

#include <iostream>

using namespace std;

int main() {

int nonzeroInteger = 5;
int zeroInteger = 0;
int divideByZero = nonzeroInteger / zeroInteger;

std::cout << divideByZero << std::endl;

return 0;
}