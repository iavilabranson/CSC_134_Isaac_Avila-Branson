//@author: Isaac Avila-Branson
//@date: 11/02/2025
//@purpose: Reverse array order

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;       
    int numbers[SIZE];        

    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    cout << "\nThe integers in reverse order are: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
