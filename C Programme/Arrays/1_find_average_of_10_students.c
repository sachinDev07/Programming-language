#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10];
    int i, sum = 0;
    float avg;
    printf("Enter 10 numbers\n");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
        sum = sum + a[i];
    avg = sum / 10.0;
    printf("\nAverage of 10 students is %f", avg);
}