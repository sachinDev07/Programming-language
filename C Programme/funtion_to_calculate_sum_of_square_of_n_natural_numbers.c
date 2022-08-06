#include <stdio.h>
#include <conio.h>
// no return no argument......
int sumsquar4(void);
int main()
{
    int  x;
    x = sumsquar4();
    printf("%d", x);
}
void sumsquar1()
{
    int n, i, sum = 0;
    printf("Enter any number");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        sum = sum + i * i;
    printf("%d", sum);
}

// no return but argument......

void sumsquar2(int);
void main()
{
    int n;
    printf("Enter any number");
    scanf("%d", &n);
    sumsquar2(n);
}
void sumsquar2(int m)
{
    int i, sum = 0;
    for (i = 0; i <= m; i++)
        sum = sum + i * i;
    printf("%d", sum);
}

// return but no argument......
int sumsquar4()
{
    int i,n, sum = 0;
    printf("Enter any number");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
        sum = sum + i * i;
    return (sum);
}