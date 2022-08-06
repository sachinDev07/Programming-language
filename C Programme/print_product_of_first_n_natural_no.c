#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=1;
    printf("\thow many numbers you want to print \n \t");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("\t%d",sum);
}