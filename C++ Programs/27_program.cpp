
// Program to count digits in a number.....

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num, rem, count = 0;
    cout << "Enter any digits" << endl;
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        count++;
        num = num / 10;
    }
    cout << "Total numbers in your digit is " << count;
}