#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char s[50];
    printf("Enter the string");
    gets(s);
    puts(s);

    printf("your string in lower case is %s ",strupr(s));
   // puts(strlwr(s));
}
