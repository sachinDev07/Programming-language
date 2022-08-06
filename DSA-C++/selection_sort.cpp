#include<iostream>
 using namespace std;
 
int findMinValueIndex(int A[],int j,int n)
{
	int min,minIndex;
	for(min=A[j],minIndex=j;j<=n-1;j++)
		if(A[j]<min)
		{
			min=A[j];
			minIndex=j;
		}
		return minIndex;
}


void selection_sort(int A[],int n )
{
	int t,minIndex,i;
	for(i=0;i<=n-2;i++)
	{
		minIndex=findMinValueIndex(A,i,n);
		t=A[i];
		A[i]=A[minIndex];
		A[minIndex]=t;
	}
}

int main()
{
	int arr[10]={33,11,55,7,999,66,88,66,767,786};
	selection_sort(arr,10);
	for(int i=0;i<10;i++)
	 	cout<<arr[i]<<" ";
	 	
}