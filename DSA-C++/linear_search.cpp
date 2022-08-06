#include<conio.h>
#include<stdio.h>
#include<iostream>
 using namespace std;

int linear_search(int A[],int s,int item)
{
	int i;
	for( i=0;i<s;i++)
		if(A[i]==item)	
			return i;
		return -1;
}

int main()
{
	int arr[10]={22,66,33,77,44,0,45,89,65,777};
	int result = linear_search(arr,10,45);
	(result==-1)?cout<<"Item Not Found":cout<<"Element found at index: "<<result;
	
}