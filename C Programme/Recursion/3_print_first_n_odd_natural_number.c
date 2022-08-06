#include <conio.h>
#include <stdio.h>
void evenNaturalNu(int);
int main()
{
    int a;
    printf("How many odd number wants to be print : ");
    scanf("%d", &a);

    evenNaturalNu(a);
  
}
void evenNaturalNu(int n)
{
    if (n > 0)
    {
        evenNaturalNu(n - 1);
        if (n % 2 != 0)
        {
            printf("%d ", n);
        }
        
    }
}