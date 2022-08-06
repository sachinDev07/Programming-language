#include<iostream>
#include<conio.h>
 using namespace std;
 
void modified_bubble_sort(int arr[],int s)
{
	int i,a,temp,flag=1;
	for(a=1,flag=1;a<=s-1;a++)
	{
		for(i=0;i<=s-1-a;i++)
		{
			if(arr[i]>arr[i+1])
			{
				flag=0;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		if(flag)
			break;
	}
	
}

int main()
{
	int size=11;
	int arr[size]={2,7,4,1,8,6,77,99,10,43,23};
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	modified_bubble_sort(arr,size);
	cout<<"\n";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

}