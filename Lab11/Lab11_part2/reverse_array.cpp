//@author: Isaac Avila-Branson
//@date: 11/02/2025
//@purpose: Reverse array order

#include <iostream>
using namespace std;

int main() {
   //initialize integers and set size to a constant value
    const int SIZE = 5;       
    int numbers[SIZE];        
    //prompt user for input for the size of an array
    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    //print the reversed array
    cout << "\nThe integers in reverse order are: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
