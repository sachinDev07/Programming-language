#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a[10], r, t, p, i;
    cout << "Enter 10 array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (r = 1; r <= 9; r++)
    {
        for (i = 0; i <= 9 - r; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }

    cout << "shorting of an array" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
}