#include <conio.h>
#include <stdio.h>
int main()
{
    int num[10], i, j, sum = 0, odd = 0;
    printf("enter 10 numbers");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if (num[i] % 2 == 0)
        {
            sum = sum + num[i];
        }
        else
            odd = odd + num[i];
    }
    printf("sum of even number is %d \n", sum);
    printf("sum of odd number is%d", odd);
}