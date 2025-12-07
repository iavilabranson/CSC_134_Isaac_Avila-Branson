//@author: Isaac Avila-Branson
//@date: 09/14/2025
//@purpose: Create a program that calculates the users grade
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

    //calculate letter grade with if-else statements
        if (average_value >= 90) {
        std::cout << "Letter Grade: A\n";
    } else if (average_value >= 80) {
        std::cout << "Letter Grade: B\n";
    } else if (average_value >= 70) {
        std::cout << "Letter Grade: C\n";
    } else if (average_value >= 60) {
        std::cout << "Letter Grade: D\n";
    } else {
        std::cout << "Letter Grade: F\n";
    }

    return 0;




}