// function to convert a string into uppercase...
#include <stdio.h>
#include <conio.h>

void display(char* s)
{
    printf("%s", s);
    printf("\n");
}

void displaylength(char* s)
{
    printf("%d",s);
    printf("\n");
}

int lenthFun(char* s)
{
    int l;
    printf("\nlenght of string :\n");
    for ( l = 0; s[l]; l++);
    return l;
    
}

int upperFun(char *s)
{
    printf("\nString in upper case :\n");
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    return i;
}

int lowerFun(char *s)
{
    printf("\nString in lower case :\n");
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return i;
}

int reverFun(char *s,int len)
{
    printf("\nReverse of a string :\n");
    int i,temp;
    for (i = 0; i<len/2; i++)
    {
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    return i;
}

int main()
{
    system("cls");
    int length;
    char str[20];
    printf("Enter a string :\n");
    gets(str);

    length=lenthFun(str);
    displaylength(length);

    upperFun(str);
    display(str);
    
    lowerFun(str);
    display(str);

    reverFun(str,length);
    display(str);

}