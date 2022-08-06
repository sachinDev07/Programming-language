#include <conio.h>
#include <stdio.h>
#include <string.h>
char main()
{
    char s1[50], s2[50], s3[4], s4[5];
    printf("Enter first string");
    gets(s1);
    printf("Enter second string");
    gets(s2);
    printf(" %s", s1);
    printf(" %s", s2);

    if (strcmp(s1, s2) == 0)
    {
        gets(s3);
        strcat(s1, s3);
    }

    else
    {

        gets(s4);
        strcat(s2, s4);
    }
}