#include <conio.h>
#include <stdio.h>
#define Max_size 100
int main()
{
    int a, i;
    int array[Max_size];
    int *p = array;

    printf("Enter the size of array : ");
    scanf("%d", &a);

    printf("Enter the elements of array : ");
    for (i = 0; i < a; i++)
    {
        scanf("%d", p);
        p++;
    }

    p = array;

    printf(" Array elements are: ");
    for (i = 0; i < a; i++)
    {
        printf("%d ", *p);

        p++;
    }
    return 0;
}