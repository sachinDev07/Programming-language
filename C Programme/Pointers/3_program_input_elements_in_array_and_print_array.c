#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100
int main()
{
    int abc[MAX_SIZE];
    int  i, n;
    int *ptr;
    ptr = abc;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}