
// Program to print first N odd natural numbers in reverse order....

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, x ;
    cout << "Enter any number" << endl;
    cin >> n;

    cout << "First " << n << " odd natural numbers in reverse order are :" << endl;
    for (x=n; x > 0; x--)
    {
        if (x % 2 != 0)
            cout << x << endl;
    }
    
}