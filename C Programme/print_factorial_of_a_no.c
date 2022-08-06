#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;
    printf("\t enter the number \n \t");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\t%d",fact);
}