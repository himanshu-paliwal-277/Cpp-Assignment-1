// Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.

#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Enter a length of a rectangle : " << endl;
    cin >> length;
    cout << "Enter a breadth of a rectangle : " << endl;
    cin >> breadth;
    cout << "Area of rectangle = " << length * breadth << endl;
    return 0;
}