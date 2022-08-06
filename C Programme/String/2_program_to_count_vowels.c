#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    char s[MAX_SIZE];
    printf("Enter the name of string \n");
    // scanf("%s", s);
    gets(s);
    int i = 0;
    int count = 0;
    while (s[i] != NULL)   // while (i < MAX_SIZE) 
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            count++;
        }
        i++;
    }
    printf("The number of vowels %d", count);
}