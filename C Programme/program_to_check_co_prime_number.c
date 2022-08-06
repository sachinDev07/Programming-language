#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, i, min;
    printf("enter two numbers");
    scanf("%d %d ", &a, &b);

    min = a < b ? a : b;
    for (i=2;i<=min;i++)
    {
        if (a%i==0 && b%i==0)
            break;
    }
    if (i== min+1)
        printf("it is  co-prime numbers");
    else
        printf("it is not co-prime numbers");

    return 0;
}