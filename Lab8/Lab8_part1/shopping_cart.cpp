//@author: Isaac Avila-Branson
//@date: 10/10/2025
//@purpose: Create a program to neatly format a shopping cart

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream shopping_cart_file; //defining ofstream object
    shopping_cart_file.open("lab2.txt"); //creating text file and linking to ofstream file
    shopping_cart_file << "**************************************\n" << "\t \t \t" << 
        "Shopping Cart\n" << "*************************************\n" << "product code\t" << 
        "qty\t" << "\tprice\n" << "\t789\t" << "\t" << "\t7\t" << "\t$12.00\n\n" << "\t\t\t\t\t\tTotal: $84.00";
    shopping_cart_file.close(); //closing file for good practice
}
