#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, i, p = 1;
    printf("\tenter the value of number and power\n");
    scanf("%d %d", &x, &y);

    for (i = 1; i <= y; i++)
        p = p * x;
    printf("result is %d", p);
    return 0;
}