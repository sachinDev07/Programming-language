

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int l, m;
    cout << "Enter two numbers" << endl;
    cin >> l >> m;

    for (int i = l; i <= l * m; i++)
    {
        for (int j = l; j <= l * m; j++)
        {
            if (i % l == 0)
            {
                if (j % m == 0)
                {
                    if (i == j)
                    {
                        cout << j;
                        exit(0);
                    }
                }
            }
        }
    }
}