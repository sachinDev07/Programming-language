// Program to find greatest among 10 numbers using array size 10

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10],size;
    int t, m, n, x, y;
    printf("Enter size of an array  : \n");
    scanf("%d",&size);
    printf("Enter the numbers: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    m = a[0];
    n = a[1];
    t = m > n ? m : n;

    for (int i = 0; i < size-3; i++)
    {
        x = t;
        y = 0;
        y = x > a[i + 2] ? x : a[i + 2];
        t = y;
    }
    printf("Greatest among all 10 numbers: %d", t);
}