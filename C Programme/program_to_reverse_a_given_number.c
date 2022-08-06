#include <stdio.h>
#include <conio.h>
                             //program of reverse by using function.............
void reverse1();
void reverse2();
void reverse3();

void main()
{
    reverse1();
    reverse2();
    reverse3();
}
void reverse1()
{
    int a, rem, x;
    printf("enter the digits ");
    scanf("%d", &a);
    while (a > 0)
    {
        rem = a % 10;
          x = rem;
          a = a / 10;
        printf("%d", x);
    }
    // return 0;
}

void reverse2()
{
    int a, rem ;
    printf("\nenter the digits ");
    scanf("%d", &a);
    while (a > 0)
    {
        rem = a % 10;
          a = a / 10;
        printf("%d", rem);
    }
    // return 0;
}

void reverse3()
{
    int a, rem, x = 0;
    printf("\nenter the digits ");
    scanf("%d", &a);
    while (a > 0)
    {
        rem = a % 10;
          x = x * 10 + rem;
          a = a / 10;
    }
    printf("%d", x);
    // return 0;
}
