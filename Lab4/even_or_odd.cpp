//@author: Isaac Avila-Branson
//@date: 09/14/2025
//@purpose: Create a program that determines if an input is even or odd
#include <iostream>

using namespace std;



int main() {
    //declare integer value
    int user_value, remainder;

    //prompt user for integers and store them in values
    std::cout << "Enter an integer" << std::endl;
    std::cin >> user_value;

    //calculate remainder
    remainder = user_value % 2;

    //print result
    if (remainder == 0) {
        std::cout << "Your integer is even" << std::endl;
    } else {
        std::cout << "Your integer is odd" << std::endl;
    }


    return 0;


}