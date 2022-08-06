#include<conio.h>
#include<stdio.h>
int sum(int n);
int main()
{
    int x;
    x=sum(456);
        printf(" %d",x);
}
int sum(int n)
{
    int k,add=0;
    while(n>0)
    {
        k=n%10;
        add=add+k;
        sum(n/10);
    } 
    return (add);
}