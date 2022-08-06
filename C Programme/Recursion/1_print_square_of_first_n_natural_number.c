#include <conio.h>
#include <stdio.h>
void naturalN(int);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    naturalN(x);
}
void naturalN(int n)
{
    if (n > 0)
    {
        naturalN(n - 1);
        printf("%d ", n * n);
    }
}