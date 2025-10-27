//@author: Isaac Avila-Branson
//@date: 10/27/2025
//@purpose: Create a program to take user input and calculate the average grade in an array

#include <iostream>


using namespace std;
int main() { 
    int sizeOfArray = 10; //intiialize size of array
    int grade; //create integer to hold user input of each grade
    float averageGrade = 0; //initialize a float to calculate the average grade
    int gradeBook[sizeOfArray]; //Assign size of gradebook
    for (int i = 0; i < sizeOfArray; i++) {
        cout << "Please Enter Grade: ";
        cin >> grade;
        gradeBook[i] = grade;
    }
   //Next array is used for calculating the average of the grade
    for (int j = 0; j < sizeOfArray; j++) {
        averageGrade = gradeBook[j] + averageGrade;
    }
    averageGrade = averageGrade / 10;
    cout << "The average of the grades is: " << averageGrade << endl;
}