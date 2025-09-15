//@author: Isaac Avila-Branson
//@date: 09/15/2025
//@purpose: Create a program to prompt user for a desired set temperature

#include <iostream>

using namespace std;

int main() {
    double user_temperature; //create float for user input

    while(user_temperature != 212.34) {
        cout << "Please enter a temperature" << endl; //prompt user for temperature
        cin >> user_temperature; //take user temperature
    }
    cout << "The temperature has been properly set, thank you" << endl; //confirm temp
    return 0;

}