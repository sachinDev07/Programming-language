#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10];
    int i, max;

    printf("Enter 10 numbers\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for (i = 1; i < 10; i++)
         if (max > a[i])  
         if (max < a[i])
            max = a[i];
    printf("Greatest number is %d", max);
    
}