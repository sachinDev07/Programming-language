#include <conio.h>
#include <stdio.h>
#define MAX_SIZE 10
int main()
{
    int a[MAX_SIZE];
    int i, even_sum = 0, odd_sum = 0;
    printf("Enter the numbers\n");
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < MAX_SIZE; i++)
        if (a[i] % 2 == 0)
            even_sum = even_sum + a[i];
        else
            odd_sum = odd_sum + a[i];

    printf("\nsum of all even number is %d", even_sum);
    printf("\nsum of all odd number is %d", odd_sum);
}