#include <stdio.h>
#include <conio.h>
int area_of_circle(int);
int main()
{
    int r;
    float x;
    printf("Enter the radius");
    scanf("%d", &r);
    x = area_of_circle(r);
    printf("Area of circle is %f", x);
}
int area_of_circle(int n)
{
    float area;
    area = 3.14 * n * n;
    return (area);
}