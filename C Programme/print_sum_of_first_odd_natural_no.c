#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum = 0;
    printf("\t enter the number \n \t");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}