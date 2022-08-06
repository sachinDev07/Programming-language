#include <conio.h>
#include <stdio.h>
int evenNaturalNu(int);
int main()
{
    int a;
    printf("Enter any natural number : ");
    scanf("%d", &a);
    printf("Sum of first %d numbers is  %d ",a, evenNaturalNu(a));
}
int evenNaturalNu(int n)
{
    if (n > 0)
        return n + evenNaturalNu(n - 1);
}