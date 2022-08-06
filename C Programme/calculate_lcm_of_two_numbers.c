#include <stdio.h>
#include <conio.h>
int main()

{
    int x, y, l;
    printf("enter two number");
    scanf("%d %d", &x, &y);
    for (l = 1; l <= x * y; l++)
    {
        if (l % x == 0 && l % y == 0)
        {
            break;
        }
    }
    printf("lcm is %d", l);
}