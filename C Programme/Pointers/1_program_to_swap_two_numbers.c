#include <stdio.h>
#include <conio.h>
int swap(int *p, int *q);
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("\n Before swapping : ");
    printf("\n a = %d", a);
    printf("\n b = %d", b);

    swap(&a, &b);
}
int swap(int *p, int *q)
{
    int sswap;
    sswap = *p;
    *p = *q;
    *q = sswap;

    printf("\n After swapping : ");
    printf("\n a = %d", *p);
    printf("\n b = %d", *q);
}