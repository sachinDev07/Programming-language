
// Write a program to compare two numbers....

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    cout << (a > b ? a : b) << " is greater";
}