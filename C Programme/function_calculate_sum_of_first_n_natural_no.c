#include <stdio.h>
#include <conio.h>
                        // no return no argument.....
// void sum1();
// int main()
// {
//     sum1();
// }
// void sum1()
// {
//     int sum = 0, x, i;
//     printf("enter the number from where to you want sum numbers");
//     scanf("%d", &x);
//     for (i = 0; i <= x; i++)
//         sum = sum + i;
//     printf("sum of first %d numbers is %d", x, sum);
// }

                        // no return but argument......
// void sum2();
// void main()
// {
//     int x;
//     printf("enter the number from where to you want sum numbers");
//     scanf("%d", &x);
//     sum2(x);
// }
// void sum2(int y)
// {
//     int i, sum = 0;
//     for (i = 0; i <= y; i++)
//         sum = sum + i;
//     printf("sum of numbers is %d", sum);
// }

//                      return with argument......
// int sum3(int b);
//  int main()
// {
//     int a, x;
//     printf("Enter the number");
//     scanf("%d", &a);
//         x = sum3(a);
//     printf("sum of numbers is %d", x);
// }
// int sum3(int b)
// {
//     int i, sum = 0;
//     for (i = 0; i <= b; i++)
//         sum = sum + i;
//     return (sum);
// }

                        // return but no argument......
int sum3();
int main()
{
    int x;
    x = sum3();
    printf("sum of numbers is %d", x);
}
int sum3()
{
    int i, a, sum = 0;
    printf("Enter the number");
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
        sum = sum + i;
    return (sum);
}