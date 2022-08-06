#include<conio.h>
#include<stdio.h>
#include<iostream>
 using namespace std;

void insert(int A[],int N,int value)
{
	int index,parindex;
	N++;
	index=N;
	while(index>0)
	{
		parindex=(index-1)/2;
		if(value<=A[parindex])
			break;
		A[index]=A[parindex];
		index=parindex;
	}
	
	A[index]=value;
	
}
 
void del(int A[],int N,int *v)
{
	int last,index,left,right;
	*v=A[0];
	last = A[N];
	N--;
	index=0;
	left=1;
	right=2;
	
	while(right<=N)
	{
		if(last>=A[left] && last>=A[right])
		{
			A[index]=last;
			return;
		}
		if(A[left]>=A[right])
		{
			A[index]=A[left];
			index=left;
		}
		else
		{
			A[index]=A[right];
			index=right;
		}
		left=2*index+1;
		right=2*index+2;	
	}
	 
	if(left==N&&last<A[left])
	{
		A[index]=A[left];
		index=left;
	}
	A[index]=last;
}

void heap_sort(int A[],int N)
{
	int j,item;
	for(j=0;j<N-1;j++)
		insert(A,j,A[j+1]);
	while(N>0)
	{
		del(A,N-1,&item);
		A[N-1]=item;
		N--;
	}
}
 
int main()
{
	int arr[10]={20,70,10,30,90,80,40,60,50,100};
	heap_sort(arr,10);
	for(int i=0;i<=9;i++)
		cout<<" "<<arr[i];
	getch();
}