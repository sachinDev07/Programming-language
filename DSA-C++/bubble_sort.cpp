#include<iostream>
#include<conio.h>
 using namespace std;
 
void bubble_sort(int arr[],int s)
{
	int i,a,temp;
	for(a=1;a<=s-1;a++)
	{
		for(i=0;i<=s-1-a;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	
}

void bubble(int arr[], int size ) {
	for (int i = 0; i < size; i++) {
            bool swapped = false;
            for (int j = 1; j < size - i; j++) {
                if( arr[j] < arr[j-1]) {
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }
        if (!swapped) {
            break;
        }
    }
}

int main()
{
	int size=11;
	int arr[size]={2,7,4,1,8,6,77,99,10,43,23};
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	bubble(arr,size);
	cout<<"\n";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

}