#include <stdio.h>
#include <conio.h>
int main()
// {
//     int a,b,x,y,hcf,temp;
//     printf("enter two numbers");
//     scanf("%d %d",&a,&b);
//     x=a;
//     y=b;

//     while (y!=0)

//     {
//         temp=y;
//         y=x%y;
//         x=temp;
//     }
//     hcf=x;
//     printf("hcf is %d",hcf);

// }

{
    int a, b, h;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);

    for(h=a<b?a:b;h>=1;h--)
    {
        if (a % h == 0 && b % h == 0)
            break;
    }
    printf("hcf is %d", h);
}