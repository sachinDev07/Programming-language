#include <conio.h>
#include <stdio.h>
int main()
{
    int i, j,n;
     printf("Enter number of rows\n");
     scanf("%d", &n);
    // p = n;
    for (i = 0; i <= n*2-1; i++)
    {
        for (j = 0; j <= n*2-1; j++)
        {
            if (j>=n-i && j<= n+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    
    }

    // while(1)
    // {

    
}