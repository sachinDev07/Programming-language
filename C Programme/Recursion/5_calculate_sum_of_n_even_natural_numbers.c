#include <conio.h>
#include <stdio.h>
int evenNaturalNu(int);
int main()
{
    int a;
    printf("How many even number wants to be print : ");
    scanf("%d", &a);
    printf("Sum of even natural number : %d", evenNaturalNu(a));
}
int evenNaturalNu(int n)
{
    if (n > 0)
    {
        evenNaturalNu(n - 1);
        if (n % 2 == 0)
            return n + evenNaturalNu(n - 1);
        else
            return n ;
    }
}