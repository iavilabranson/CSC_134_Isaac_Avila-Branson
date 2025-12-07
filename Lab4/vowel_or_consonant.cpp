//@author: Isaac Avila-Branson
//@date: 09/14/2025
//@purpose: Create a program that determines if a character is a vowel or consonant

#include <iostream>
#include <string>
using namespace std;



int main() {
//create a char to hold the users input
char c;
cout << "Enter a character (NO NUMBERS): ";
cin >> c;
//determine if input is a vowel or consonant
if (c == 65 || c == 97 || c == 69 || c == 101 || c == 73 || c == 105 ||
    c == 79 || c == 111 || c == 85 || c == 117) {
    cout << "Character " << c << " is a vowel\n";
}
else {
    cout << "Character " << c << " is a consonant\n";
}

}