#include <stdio.h>
#include <conio.h>
int main()
{
    int *p1, *p2;
    int a, c, b;
    p1 = &a;
    p2 = &b;
    
    printf("Enter two numbers\n");
    scanf("%d %d ", p1, p2);
    
    c = *p1 + *p2 ;
    printf("\nsum is %d", c);
    return 0;
}