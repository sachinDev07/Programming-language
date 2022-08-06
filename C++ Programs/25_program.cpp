
// Program to calculate sum of square of first N natural numbers.....

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, x = 1, sq, sum = 0;
    cout << "Enter any number" << endl;
    cin >> n;

    while (x <= n)
    {
        sq = x * x;
        sum = sum + sq;
        x++;
    }
    cout << "Sum of square of first N natural numbers is " << sum;
}