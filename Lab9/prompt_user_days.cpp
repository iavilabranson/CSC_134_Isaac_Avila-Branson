//@author: Isaac Avila-Branson
//@date: 10/22/2025
//@purpose: Create a program to take user input and keep track of sales

#include <iostream>
#include <fstream>

using namespace std;
int main() { 
    int user_days, day_total; //create int for user input and total revenue
    cout << "Please enter total number of days: "; //prompt user for input of days
    cin >> user_days; //user_days stores user input
    ofstream sales_file; //define ofstream object
    sales_file.open("week9_lab1.txt"); //creating and open text file linked to object
    for (int i = 0; i < user_days; i++) {
        cout << "Please enter total for the day: ";
        cin >> day_total;
        sales_file << "Total for the day: " << day_total << endl;
    }
    sales_file.close(); //closing file for good practice
}