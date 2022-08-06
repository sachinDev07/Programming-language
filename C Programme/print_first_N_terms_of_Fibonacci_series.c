#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("enter a number");
    scanf("%d",&n);

    for ( i = 0; i <= n; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}