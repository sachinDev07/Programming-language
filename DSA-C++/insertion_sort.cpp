#include<iostream>
#include<conio.h>
 using namespace std;
								  
void insertion_sort(int A[],int s) 
{
	int temp,i,j;
	for(i=1;i<s;i++)
	{
		temp=A[i];
		for(j=i-1;j>=0;j--)
			if(A[j]>temp)
				A[j+1]=A[j];
			else
				break;
		A[j+1]=temp;
	}
}

int main()
{
	int i;
	int arr[10]={34,56,21,11,25,43,87,62,18,7};
	insertion_sort(arr,10);
	for(int i=0;i<10;i++)
	 	cout<<arr[i]<<" ";
}