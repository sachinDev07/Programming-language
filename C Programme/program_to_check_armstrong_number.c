#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, sum = 0, x;
    printf("enter the digits");
    scanf("%d", &b);
    x = b;

    if (b > 0)
    {
        while (b > 0)
        {
            a = b % 10;
            sum = a * a * a + sum;
            b = b / 10;
        }

        if (sum == x)
            printf("yes %d is a an armstrong number", sum);
        else
            printf("it is not an armstrong number");
    }
}
