//@author: Isaac Avila-Branson
//@date: 11/02/2025
//@purpose: Sum an array of 5 elements

#include <iostream>


using namespace std;
int main() { 
    int array[5] = {1, 2, 3, 4, 5};
    int i = 0;
    int sum = 0;

    while (i < 5) {
        sum = sum + array[i];
        i++;
    }
    cout << "The total is " << sum << endl;
}