//@author: Isaac Avila-Branson
//@date: 09/15/2025
//@purpose: Create a program to prompt user for a desired set temperature

#include <iostream>

using namespace std;

int main() {
    float user_temperature = 0; //create double for user input
    float target_temp = 212.34;
    while(user_temperature != target_temp) {
        cout << "Please enter a temperature" << endl; //prompt user for temperature
        cin >> user_temperature; //take user temperature
    }
    cout << "The temperature has been properly set, thank you" << endl; //confirm temp
    return 0;

}