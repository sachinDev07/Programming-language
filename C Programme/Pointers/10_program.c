#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nAfter swapping:\n");
    printf("a = %d \nb = %d", *x, *y);
}

int main()
{
    int a, b;
    printf("Enter two numbers for swapping\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping:\n");
    printf("a = %d \nb = %d", a, b);
    swap(&a,&b);
}