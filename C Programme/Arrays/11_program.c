#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], max, i,size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter %d numbers :\n",size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 1; i < size; i++)
        if (a[i] <  max)
            max = a[i];
    printf("Greatest number : %d", max);
}