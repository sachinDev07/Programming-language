#include <stdio.h>
#include <conio.h>

int main()
{
    int abc[10], cde[10];
    int i, n;
    int *p, *q;

    p = abc;
    for (i = 1; i <= 10; i++)
        scanf("%d", &p[i]);
    for (i = 1; i <= 10; i++)
        printf("%d ", p[i]);

    cde = p;
    for (i = 1; i <= 10; i++)
        printf("%d ", cde[i]);
}
