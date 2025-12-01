//@author: Isaac Avila-Branson
//@date: 11/02/2025
//@purpose: Calculate the average of 10 grades

#include <iostream>


using namespace std;
int main() { 
    int array_size = 10; // initialize array size
    int i = 0; // indexing for while loop
    int grade = 0; // to hold inputed grade
    float sum = 0.0; // record running total
    float average_grade = 0.0; // hold the average grade
    int grades[10] = {0}; // array of 10 elements initialized to 0

    while (i < array_size) {
        cout << "Enter grade: ";
        cin >> grade;
        grades[i] = grade;
        sum = sum + grade;
        i++;
    }
    average_grade = sum / array_size;
    cout << "The average grade is: " << average_grade << endl;
}