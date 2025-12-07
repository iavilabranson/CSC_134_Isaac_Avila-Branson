//@author: Isaac Avila-Branson
//@date: 11/09/2025
//@purpose: Create a program to create a graph using the equation y=mx+b

#include <iostream>
using namespace std;

int main() {
    //declare values for m and b
    int m = 2;
    int b = 3;
    
    //define ranges
    int yMin = 0, yMax = 15;
    int xMin = 0, xMax = 15;
    
    //create array for x values for range-based for-loop
    int xRange[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    
    //draw the graph from top to bottom (y from 15 to 0)
    for (int y = yMax; y >= yMin; y--) {
        //print y-axis value
        if (y < 10) {
            cout << " " << y << "|";
        } else {
            cout << y << "|";
        }
        
        //for each x position, check if the line passes through (x, y)
        //using range-based for-loop
        for (int x : xRange) {
            // Calculate y value for current x using y = mx + b
            int yValue = m * x + b;
            
            //check if this point is on the line
            if (yValue == y) {
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    //print x-axis
    cout << "  |";
    for (int x = xMin; x <= xMax; x++) {
        if (x <= 15) {
            cout << x << "|";
        }
    }
    cout << endl;
    return 0;
}