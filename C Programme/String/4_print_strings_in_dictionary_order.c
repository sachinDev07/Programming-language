#include <conio.h>
#include <stdio.h>
#include<string.h>
int main()
{
    char str[5][20], s[10];
    int i,r,round;
    printf("Enter the 5 strings\n");
    for (i = 0; i <= 4; i++)
        gets(str[i]);
    for (round = 1; round <= 4; round++)
    {
        for (i = 0; i <= 4 - round; i++)
        {
            r = strcmp(str[i], str[i + 1]);
            if (r > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], s);
            }
        }
    }
    printf("\nStrings in dictionary order\n");
    for (i = 0; i <= 4; i++)
        puts(str[i]);
}