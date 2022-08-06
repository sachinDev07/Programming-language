#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
 using namespace std;

void merge(int A[],int l,int m,int u)
{
	int L[m-l+1],R[u-m],i,j,k;
	for(i=0;i<m-l+1;i++)
		L[i]=A[l+i];
	for(j=0;j<u-m;j++)
		R[j]=A[m+1+j];
		
	for(k=l,i=0,j=0;i<m-l+1&&j<u-m;k++)
	{
		if(L[i]<R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
	}
	
	while(i<m-l+1)
	{
		A[k]=L[i];
		i++;
		k++;
	}
	while(j<u-m)
	{
		A[k]=R[j];
		j++;
		k++;
	}
}

void merge_sort(int A[],int l,int u)
{
	int m;
	if(l<u)
	{
		m=(l+u)/2;
		merge_sort(A,l,m);
		merge_sort(A,m+1,u);
		merge(A,l,m,u);
	}
}

int main()
{
	system("cls");
	int arr[15]={30,50,11,79,90,56,44,18,25,36,12,8,48,61,15};
	for(int i=0;i<15;i++)
	 	cout<<arr[i]<<" ";
	 	cout<<"\n";
	merge_sort(arr,0,14);
	for(int i=0;i<15;i++)
	 	cout<<arr[i]<<" "; 
}