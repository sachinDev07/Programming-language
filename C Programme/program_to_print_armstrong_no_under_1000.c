#include <stdio.h>
#include <conio.h>

int main()
{
    int i, x, r,sum;
    printf("Armstron numbers are\n ");
    for (i = 0; i < 1000; i++)
    {
        sum = 0;
        x = i;
        while (x != 0)
        {
            r = x % 10;
            sum = sum + r * r * r;
            x = x / 10;
        }
        if (sum == i)
            printf("%d\n", i);
    }
    
}