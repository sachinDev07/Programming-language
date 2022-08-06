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
 
 int ArrayADT::getItem(int index)
 {
 	if(index<0 || index>lastindex)
 	  {
 	  	cout<<"Operation failed:Invalid index";
 	  return 0;
	   }
    else
    {
 	return ptr[index];
    }
 }
 
 int ArrayADT::count()
 {
 	return lastindex+1;
 }
 
 int ArrayADT::search(int data)
 {
 	int i;
 	for(i=0;i<=lastindex;i++)
 	  if(ptr[i]==data)
 	    return i;
 	return -1;
 }
 
 void ArrayADT::edit(int index,int data)
 {
 	if(index<0||index>lastindex)
 	{
 		cout<<"Operation failed:Invalid index";
	 }
	 else
	 {
	 	ptr[index]=data;
	 }
 }
 
 void ArrayADT::del(int index)
 {
 	int i;
 	if(index<0 || index>lastindex)
 	{
 		cout<<"Operation failed:Invalid index or Empty array";
	 }
	 else
	 {
	 	for(i=index;i<lastindex;i++)
	 	  ptr[i]=ptr[i+1];
	 	lastindex-- ;
	 	if(lastindex==count())
	 	{
	 		
	 	  halfArray();
	 	  
		 }
	 }
 }
 
 void ArrayADT::insert(int index,int data)
 {
 	int i;
 	if(index<0 || index>lastindex+1)
 	{
 		cout<<"Operation failed:Invalid index";
	 }
	 else if(lastindex+1 == capacity)
	 {
	 	doubleArray();
	 }
	 else
	 {
		for(i=lastindex;i>=index;i--)
	 	  ptr[i+1]=ptr[i];  
	 	ptr[index]=data;
		 lastindex++; 
	 }
	  
	
 }
 
 void ArrayADT::append(int data)
 {
 	if(lastindex+1==capacity)
 	{
 		doubleArray();
	}
	lastindex++;
	ptr[lastindex]=data;
 }
 
 void ArrayADT::createArray(int cap)
 {
  	ptr=new int(cap);
  	capacity=cap;
  	lastindex=-1;
 }	
 
 int menu()
 {
 	int choice;
 	cout<<"\n1. Append";
    cout<<"\n2. Insert";
    cout<<"\n3. Delete";
    cout<<"\n4. Edit";
    cout<<"\n5. Search";
    cout<<"\n6. Exit";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    return choice;
 }
 
 void viewArrayData(ArrayADT &arr)
 {
 	int i;
 	cout<<endl;
 	for(i=0;i<arr.count();i++)
 	  cout<<arr.getItem(i)<<" ";
 }
 
 int main()
 {
 	ArrayADT arr;
 	arr.createArray(2);
 	while(true)
 	{
 		int data,index;
 		system("cls");
 		cout<<"\nTotal Elements of array : "<<arr.count();
 		viewArrayData(arr);
    	switch(menu())
    	{
    		case 1:
    			cout<<"Enter data to append : ";
    			cin>>data;
    			arr.append(data);
    			break;
    		case 2:
    			cout<<"Enter data to insert: ";
    			cin>>data;
    			cout<<"Enter index to insert: ";
    			cin>>index;
    			arr.insert(index,data);
    			break;
    		case 3:
    			cout<<"Enter index for delete:";
    			cin>>index;
    			arr.del(index);
    			break;
    		case 4:
    			cout<<"Enter index to edit";
    			cin>>index;
    			cout<<"Enter data to edit";
    			cin>>data;
    			arr.edit(index,data);
    			break;
    		case 5:
    			cout<<"Enter data to search:";
    			cin>>data;
    			index = arr.search(data);
    			if(index == -1)
    			  cout<<"Search failed:";
    			else
    			  cout<<"Element found at index: "<< index;
    			break;
    		case 6:
    			exit(0);
    		default:
    		     cout<<"Invalid choice";	
		}
		getch();
	 }
 	
 }