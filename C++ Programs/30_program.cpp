
// Program to print all prime numbers between two given numbers....

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b, c, j;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    c = a + 1;

    cout << "Prime numbers between " << a << " and " << b << " are :"<<endl ;
    for (int i = c; i < b; i++)
    {
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)

                break;
        }
        if (i == j)
            cout << i <<endl ;
    }
}