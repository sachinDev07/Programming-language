
// Program to reverse a given numbers....

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num, rem, sum = 0;
    cout << "Enter a number" << endl;
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        sum = rem;
        num = num / 10;
        cout << sum;
    }
}