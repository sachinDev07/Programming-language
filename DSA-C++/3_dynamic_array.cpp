#include<iostream>
#include<conio.h>
#include<stdlib.h>
 using namespace std;
 
 class ArrayADT
 {
  private:
  int capacity ;
  int lastindex;
  int *ptr;
  protected:
  void doubleArray();
  void halfArray();
  public:
  void createArray(int cap);
  void append(int data);
  void insert(int index,int data);
  void del(int index);
  void edit(int index,int data);
  int search(int data);
  int count();
  int getItem(int index); 
  ~ArrayADT()
  {
	delete []ptr;
  }
		  	
 };
 
 void ArrayADT::halfArray()
 {
 	int *temp,i;
 	capacity/=2;
 	temp=new int(capacity);
 	for(i=0;i<=lastindex;i++)
 	   temp[i]=ptr[i];
 	delete []ptr;
 	ptr=temp;
 }
 
 void ArrayADT::doubleArray()
 {
 	int *temp,i;
 	capacity*=2;
 	temp=new int(capacity);
 	for(i=0;i<=lastindex;i++)
 	   temp[i]=ptr[i];
 	delete []ptr;
 	ptr=temp;
 }
 int main()
 {
    
 }