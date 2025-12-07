//@author: Isaac Avila-Branson
//@date: 10/27/2025
//@purpose: Create a program to sum the total of an arrays values

#include <iostream>


using namespace std;
int main() { 
    int array[5] = {1, 2, 3, 4, 5}; //create and fill array with integers
    int sum = 0; //create integer to hold the sum of the array
    for (int i = 0; i < 5; i++) {
        sum = array[i] + sum; //add the value at the current index of the array to the sum
    }
    cout << "The sum of the array is: " << sum << endl; //print total sum
}