#include <conio.h>
#include <stdio.h>
int main()
{
    int num[10], i, max;
    printf("enter 10 numbers");

    for (i = 0; i <= 9; i++)

        scanf("%d", &num[i]);

    max = num[0];
    for (i = 1; i <= 9; i++)

        if (max < num[i])
            max = num[i];
    printf("\tthe greatest number is %d", max);

    getch();
}
