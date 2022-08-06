#include<stdio.h>
#include<conio.h>
#include<iostream>
  using namespace std;

int quick(int A[],int left,int right)
{
	int loc,t;
	loc=left;	
	while(left<right)
	{
		while(left<right && A[loc]<=A[right])
			right--;
		if(left==right)
		{
			break;
		}
		else
		{
			t=A[loc];
			A[loc]=A[right];
			A[right]=t;
			loc=right;
		}
		while(left<right&&A[loc]>A[left])
			left++;
		if(left==right)
			break;
		else
		{
			t=A[loc];
			A[loc]=A[left];
			A[left]=t;
			loc=left;
		}
	}
	return loc;
}

void quick_sort(int A[],int l,int u)
{
	int loc;
	loc=quick(A,l,u);
	if(l+1<loc)
		quick_sort(A,l,loc-1);
	if(loc<u-1)
		quick_sort(A,loc+1,u);
}

int main()
{
//	int arr[15]={30,50,11,79,90,56,44,18,25,36,12,8,48,61,15};
//	quick_sort(arr,0,14);
//	for(int i=0;i<15;i++)
//	 	cout<<arr[i]<<" ";
}