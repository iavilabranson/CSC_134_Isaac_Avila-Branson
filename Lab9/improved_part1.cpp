//@author: Isaac Avila-Branson
//@date: 10/22/2025
//@purpose: Create an improved program to handle user revenue

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;
int main() { 
    float user_days, day_total, running_total; //create int for user input and total revenue
    running_total = 0; //initializing running_total to reduce chance of errors
    cout << "Please enter total number of days: "; //prompt user for input of days
    cin >> user_days; //user_days stores user input
    ofstream sales_file; //define ofstream object
    sales_file.open("week9_lab2.txt"); //creating and open text file linked to object
    for (int i = 0; i < user_days; i++) {
        cout << "Please enter total for the day: ";
        cin >> day_total;
        sales_file << "Total for the day: " << day_total << endl;
        running_total = day_total + running_total;
    }
    sales_file << "--------------------" << endl;
    sales_file << "--------------------" << endl;
    sales_file << "Total Sales: $" <<  setprecision(2) << fixed << running_total << endl;
    sales_file << "--------------------" << endl;
    sales_file << "--------------------" << endl;
    sales_file.close(); //closing file for good practice

}