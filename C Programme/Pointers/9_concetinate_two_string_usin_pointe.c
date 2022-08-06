#include<stdio.h>

char* condisplay(char* str1,char* str2);
 void main()
 {
     char* str1[]="sachin" ;
     char* str2[]="kumar" ;
    
     printf(" %s %s",   condisplay(str1,str2));
    
 }
 char* condisplay( char* str1, char* str2)
 {
     return ( str1, str2);
 }