#include <stdio.h>
#include <conio.h>
int main()
{
    int a, i, q, p, temp;
    printf("Enter a number");
    scanf("%d", &a);
       
       q = a;
    for (i = 2; i <= a; i++)
    {
        while (q % i == 0)
        {
            temp = q;
            p = temp / i;
            q = p;
            printf("%d ", i);
        }
    }
    return 0;
}