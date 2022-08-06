#include<stdio.h>
#include<conio.h>

struct Coordinate
{
    int x_axis,y_axis;
};

 int  quadrant(struct Coordinate x,struct Coordinate y)
{ 
    
    if(x.x_axis > 0 && y.y_axis > 0)
    return 1;  // for ist quadrant 
    else if(x.x_axis < 0 && y.y_axis > 0)
    return 2;  // for 2nd quadrant
    else if(x.x_axis < 0 && y.y_axis < 0)
    return 3;  // for 3rd quadrant
    else if(x.x_axis > 0 && y.y_axis < 0)
    return 4;  // for 4th quadrant
    else
    return 0;
}

void displayQadrant(int b)
{
    printf("%d",b);
}

int main()
{
    struct Coordinate c1,c2;
    printf("Enter the coordinates:\n");
    scanf("%d %d", &c1.x_axis , &c1.y_axis);
    int c = quadrant(c1,c1);
    displayQadrant(c);

}