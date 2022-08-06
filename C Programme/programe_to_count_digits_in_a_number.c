#include <stdio.h>
#include <conio.h>
int main()
{
    int n, count = 0, rem;
    printf("enter the number");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("total digit = %d", count);
    return 0;
}