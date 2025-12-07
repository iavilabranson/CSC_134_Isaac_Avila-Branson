//@author: Isaac Avila-Branson
//@date: 10/04/2025
//@purpose: Create a program to calculate if a user is over/under their budget

#include <iostream>
using namespace std;

int main() { 
    float user_budget, user_total, total_expenses, current_expense; //declare variables 
    cout << fixed; //setting precision
    cout << "Please enter your desired budget: ";
    cin >> user_budget; //take desired budget
    cout << "Please enter your total number of expenses: ";
    cin >> total_expenses; //take total number of expenses
    for (int i = 0; i < total_expenses; i++) {
        cout << "Please enter value of next expense: ";
        cin >> current_expense; //take value of current expense
        user_total = current_expense + user_total; //perform arithmetic to get current total
    }
    cout << "User budget " << user_budget << " User Total " << user_total << endl;
    if (user_budget > user_total) {
        cout << "You are under your budget & were under by: " << (user_budget - user_total)<< endl;
    }
    else {
        cout << "You are over your budget & went over by : " << (user_total - user_budget) << endl;
    }
}