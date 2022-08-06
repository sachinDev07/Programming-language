#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3], b[3][3], g[3][3], i, j, k, d, r, sum = 0;

    printf("Enter any number for rows and columns");
    scanf("%d %d", &r, &d);

    printf("Enter numbers for matrix first ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter numbers for matrix second ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    
        for (j = 0; j < d; j++)
        {
            for (k = 0; k < d; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            g[i][j] = sum;
        }
    

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < d; j++)
        {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }
}