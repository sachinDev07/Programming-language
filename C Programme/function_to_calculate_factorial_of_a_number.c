#include <stdio.h>
#include <conio.h>
int factorial(int);
int main()
{
    int n, fact;
    printf("\tenter the number\n\t ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("\tfactorial of %d is %d", n, fact);
}
int factorial(int m)
{
    int i, sac = 1;
    for (i = 1; i <= m; i++)
    {
        sac = sac * i;
    }
    return (sac);
}