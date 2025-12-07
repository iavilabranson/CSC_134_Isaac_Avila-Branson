//@author: Isaac Avila-Branson
//@date: 09/15/2025
//@purpose: Create a program to calculate the average of 10 grades input by user

#include <iostream>
using namespace std;

int main() {
    //declare variables
    float user_input, total_grade;
    float input_amount = 0;
    user_input = 0;

    while (input_amount < 10) {
        cout << "Enter grade" << endl; //prompt user to enter grade
        cin >> user_input; //store users grade as user_input
        total_grade = total_grade + user_input; //add the user input to sum
        input_amount++; //increment the number of grades taken for while condition
    }
    //checking if values appear correct
    cout << total_grade << endl;
    cout << input_amount <<endl;
    total_grade = total_grade / input_amount; //calculate total grade

    cout << "Your grade average is: " << total_grade << endl; //print grade

}