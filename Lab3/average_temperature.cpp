//@author: Isaac Avila-Branson
//@date: 09/03/2025
//@purpose: Create a program that calculates the average temperature for July

#include <iostream>

using namespace std;

int main() {
    //declare the integers variables for temperature
    int temperature_nyc, temperature_denver, temperature_phoenix;
    //assign values to variables
    temperature_nyc = 85;
    temperature_denver = 88;
    temperature_phoenix = 106;

    //Create floats to handle potential decimals for updated temperatures
    float new_temp_nyc, new_temp_denver, new_temp_phoenix;

    // assign and calculate new average temperatures to the floats
    new_temp_nyc = (temperature_nyc * 0.02) + temperature_nyc;
    new_temp_denver = (temperature_denver * 0.02) + temperature_denver;
    new_temp_phoenix = (temperature_phoenix * 0.02) + temperature_phoenix;

    //print the values with text and new lines to neatly print to console
    std::cout << "The new average temperature in NYC is: " << new_temp_nyc
    << '\n' << "The new average temperature in Denver is: " << new_temp_denver 
    << '\n' << "The new average temperature in Phoenix is: " << new_temp_phoenix
    << std::endl;

}