//@author: Isaac Avila-Branson
//@date: 12/01/2025
//@purpose: Design a program to check the validity of a credit card

#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string cardNumber;
    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    int sum = 0;
    bool doubleDigit = false;  //flip each loop 

    //loop through the card number from the END
    for (int i = cardNumber.length() - 1; i >= 0; i--) {
        int digit = cardNumber[i] - '0';  //convert char to int

        if (doubleDigit) {
            digit = digit * 2;
            if (digit > 9) {
                digit -= 9;  //same as adding digits
            }
        }

        sum += digit;

        doubleDigit = !doubleDigit;  //flip each time
    }

    if (sum % 10 == 0) {
        cout << "VALID credit card number." << endl;
    } else {
        cout << "INVALID credit card number." << endl;
    }

    return 0;
}
