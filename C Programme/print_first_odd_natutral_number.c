#include <stdio.h>
#include <conio.h>
int main()
{
    int a, i;
    // printf("First 10 odd natural numbers");
    scanf("%d", &a);

    for (i = 1; 2*i >= a; i++)
    {
        if (i & 1)
        {
          printf("%d ", i);
        }
    }
    return 0;
}
