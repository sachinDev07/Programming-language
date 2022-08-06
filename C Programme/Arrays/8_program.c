#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], even = 0, odd = 0;
    printf("Enter any 10 numbers: \n");
    for (int i=0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i=0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            even = even + a[i];
        else
            odd = odd + a[i];
    }
    printf("Sum of even number is : %d", even);
    printf("\nSum of odd number is : %d", odd);
    return 0;
}