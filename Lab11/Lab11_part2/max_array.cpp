//@author: Isaac Avila-Branson
//@date: 11/02/2025
//@purpose: Find max value in array

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;  // number of integers
    int numbers[SIZE];  // array to store integers
    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cout << endl;
        cin >> numbers[i];
    }
    int max = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    cout << "\nThe maximum value is: " << max << endl;
}
