// A simple C++ program to calculate area of a rectangle
#include <iostream>
using namespace std;
int main() {
    // Declaring variables
    int length, breadth;
    float area;
    
    // Taking input from the user using cin
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    
    // Calculating the area
    area = length * breadth;
    
    // Printing the output
    cout << "Area of the rectangle is: " << area << endl;
    
    return 0;
}
