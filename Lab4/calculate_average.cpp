//@author: Isaac Avila-Branson
//@date: 09/14/2025
//@purpose: Create a program that calculates the average of three integers
#include <iostream>

using namespace std;



int main() {

//create integer variable to store user values, create float value for decimal results
int integer_one, integer_two, integer_three;
float average_value;

//prompt user for integers and store them in values
std::cout << "Enter your first integer" << std::endl;
std::cin >> integer_one;

std::cout << "Enter your second integer" << std::endl;
std::cin >> integer_two;

std::cout << "Enter your third integer" << std::endl;
std::cin >> integer_three;

//calculate the average
average_value = (integer_one + integer_two + integer_three) / (3);

//print the results to the user
std::cout << "The average of your three numbers is: " << average_value << 
    std::endl;

}