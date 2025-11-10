//@author: Isaac Avila-Branson
//@date: 11/09/2025
//@purpose: Create a program to create a graph using the equation y=mx+b

#include <iostream>
#include <fstream>

using namespace std;
#include <iostream>
using namespace std;

int main() {
    int m = 2;
    int b = 3;
    
    //define ranges
    int yMin = 0, yMax = 15;
    int xMin = 0, xMax = 15;
    
    //draw the graph from top to bottom (y from 15 to 0)
    for (int y = yMax; y >= yMin; y--) {
        // Print y-axis value
        if (y < 10) {
            cout << " " << y << "|";
        } else {
            cout << y << "|";
        }
        
        //for each x position, check if the line passes through (x, y)
        for (int x = xMin; x <= xMax; x++) {
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
    cout << "  ";
    for (int x = xMin; x <= xMax; x++) {
        cout << "|" << x;
    }
    cout << endl;
    
    return 0;
}

