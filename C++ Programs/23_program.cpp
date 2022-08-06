
// Program to calculate sum of first N natural numbers......

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, x = 1;
    int sum = 0;
    cout << "Enter any number" << endl;
    cin >> n;

    while (x <= n)
    {

        sum = sum + x;
        x++;
    }
    cout << "Sum of first " << n << " natural numbers is : " << sum;
}