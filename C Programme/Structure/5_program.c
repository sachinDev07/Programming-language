#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Book
{
  int bookId;
  char bookName[20];
  float bookPrice;  
};

void main()
{
    struct Book b1={2,"Subconcous mind",20.3};
    printf("Ist way...\n%d %s %.2f",b1.bookId,b1.bookName,b1.bookPrice);

    struct Book b2,b3;
    b2.bookId = 3;
    strcpy(b2.bookName,"Python");
    b2.bookPrice = 255.5;
    printf("\n2nd way...\n%d %s %.2f",b2.bookId,b2.bookName,b2.bookPrice);

    printf("\nEnter the bookid,bookname and bookprice:\n");
    scanf("%d",&b3.bookId);
    fflush(stdin);
    gets(b3.bookName);
    scanf("%f",&b3.bookPrice);
    printf("3rd way...\n%d %s %.2f",b3.bookId,b3.bookName,b3.bookPrice);
    
}