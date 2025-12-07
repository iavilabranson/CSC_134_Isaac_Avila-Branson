//@author: Isaac Avila-Branson
//@date: 09/29/2025
//@purpose: Create a program to create a times table using nested for-loops

#include <iostream>
using namespace std;

int main() { 
    int index_column, index_row, table_value; //declare integers for required values
    cout << "Multiplication table" <<  endl;
    for (index_column = 1; index_column <= 10; index_column++) {
        for (index_row = 1; index_row <= 10; index_row++) {
            cout << index_row*index_column; //multiply index of row by index of column
            cout << "\t"; //new tab for formatting
        }
        cout << "\n" << endl;//print new line
    }



}