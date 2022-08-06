#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("enter any integer number");
    scanf("%d",&a);

    for ( i = a; i <=a && i!=0; i--)
    {
        printf("%d ",i*2-1);
    }
    return 0;
}