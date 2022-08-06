#include <stdio.h>
#include <conio.h>
int main()
{
    char name[30];
    int i, j, a;
    printf("\thow many times you want to print your name\n\t");
    scanf("%d", &a);
    printf("\tenter your name\n\t");
    scanf("%s", name);

    i = a;
    j = a;

    for (i = 1, j = 1; i <= 5, j <= 5; i++, j++)
    {
        printf("\n\t%d %s \n", j, name);
    }
}