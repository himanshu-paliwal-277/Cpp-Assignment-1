// Q6 - Write a C++ program to swap two numbers with the help of a third variable.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a first number : " << endl;
    cin >> a;
    cout << "Enter a second number : " << endl;
    cin >> b;
    cout << "Before swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "After swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}