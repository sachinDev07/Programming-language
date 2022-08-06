// Multiplication of two matrices 
#include <iostream>
 using namespace std;
int main()
{
    int a[20][20], b[20][20], max[20][20],c, r, i, j, k;
    cout << "Enter how many rows and columns you want " << endl;
    cin >> r >> c;

    cout << "Enter elements of first matrices:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            cin >> a[i][j];
    }

    cout << "Enter elements of second matrices:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            cin >> b[i][j];
    }

    cout << "MUltiplication of two matrices is :" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
             max[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                max[i][j] =  max[i][j] + a[i][k] * b[k][j];
            }
            
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            cout << " " << max[i][j];
        cout << endl;
    }
}
