#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("how many numbers you want to print");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}