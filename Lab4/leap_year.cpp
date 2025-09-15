//@author: Isaac Avila-Branson
//@date: 09/14/2025
//@purpose: Create a program that determines whether a year is a leap year
#include <iostream>

using namespace std;

int main() {
//create int for determining if it is a leap year    
int year;
//prompt user
cout << "Enter a year: ";
cin >> year;
//leap year logic
if (year % 4 == 0) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            cout << "Year " << year << " is a leap year\n";
        }
        else {
            cout << "Year " << year << " is NOT a leap year\n";
        }
    }
    else {
        cout << "Year " << year << " is a leap year\n";
    }
}
else {
    cout << "Year " << year << " is NOT a leap year\n";
}

return 0;
}