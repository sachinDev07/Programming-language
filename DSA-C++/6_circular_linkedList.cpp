#include<conio.h>
#include<stdio.h>
#include<iostream>
 using namespace std;
 
 class CLL
 {
 	private:
 	struct node
 	{
 		int item;
 		node *next;
	 };
	 node *last;
	public:
		CLL(){last=NULL;}
		void insertAtLast(int data);
		void insertAtFirst(int data);
		void insertAfter(int value,int data);
		void deleteFirst();
		void deleteLast();
		void deleteNode(int value);
		void viewList();
		~CLL();
 };
 
 CLL::~CLL()
 {
 	while(last)
		deleteFirst();
 }
 
 void CLL::viewList()
 {
// 	node *t;
	while(last!=last->next)
	{
		cout<<last->item<<" ";
		last=last->next;
	}
 }
 
 void CLL::deleteNode(int value)
 {
 	node *t1,*t2;
		t1=last;
		t2=NULL;
		while(t1)
		{
			if(t1->item==value)
			 break;
			t2=t1;
			t1=t1->next;
		}
		if(t1==NULL)
		  cout<<"No item with value"<< value <<" in the list";
		else
		{
			if(t2==NULL)
			 last=t1->next;
			else
			 t2->next=t1->next;
			delete t1;
		}
 }
 
 void CLL::deleteLast()
 {
 	if(last)
 	{
 		if(last->next==last)
 		{
 			delete last;
			last=NULL;	
		}
		else
		{
			node *t;
			t=last->next;
			while(t->next!=last)
				t=t->next;
			t->next=last->next;
			delete last;
			last=t;
		}
	}
	else
	{
		cout<<"List is Empty";
	}
 }
 
 void CLL::deleteFirst()
 {
 	
 	if(last)
 	{
 		if(last->next==last)
 		{
 			delete last;
 			last=NULL;
		}
		else
		{
		 	node *t;
			t=last->next;
			last->next=t->next;
			delete t;
		}	
	}
	else
	{
		cout<<"List is empty ";
	}  
	
 }
 
 void CLL::insertAfter(int value,int data)
 {
 	node *t,*n;
 	t=last;
 	while(t)
 	{
 		if(t->item==value)
 		  break;
 		t=t->next;
	}
	if(t==NULL)
	  cout<<"List is empty or value is not found :";
	else
	{
		n=new node;
		n->item=data;
		n->next=t->next;
		t->next=n;
	}
	 
 }
 
 void CLL::insertAtLast(int data)
 {
 	node *n=new node;
 	n->item=data;
 	if(last==NULL)
 	{
 		n->next=n;
 		last=n;
	}
	else
	{
		n->next=last->next;
		last->next=n;
		last=n;
	}
 }
 
 void CLL::insertAtFirst(int data)
 {
 	node *n=new node;
 	n->item=data;
 	if(last==NULL)
 	{
 		n->next=n;
 		last=n;
	 }
	 else
	 {
	 	n->next=last->next;
 	    last->next=n->next;
	 }
 }
 
 int menu()
      {
      	int choice;
      	cout<<"\n1. Insert data at first position :";
      	cout<<"\n2. Insert data at last position :";
      	cout<<"\n3. Insert data after a  value :";
      	cout<<"\n4. Delete first data :";
      	cout<<"\n5. Delete last data :";
      	cout<<"\n6. Delete particular data :";
      	cout<<"\n7. Exit";
      	cout<<"\n\nEnter your choice : ";
      	cin>>choice;
      	return choice;
	  }

int main()
{
	int data,value;
	CLL list1;
	while(true)
	{
		system("cls");
    	list1.viewList();
    	cout<<"\n";
    	switch(menu())
    	{
    		case 1:
    			cout<<"Enter data to insert : ";
    			cin>>data;
    			list1.insertAtFirst(data);
    			break;
    		case 2:
    			cout<<"Enter data to insert : ";
    			cin>>data;
    			list1.insertAtLast(data);
    			break;
    		case 3:
    			cout<<"Enter data to insert : ";
    			cin>>data;
    			cout<<"Enter value after which want to insert : ";
    			cin>>value;
    			list1.insertAfter(value,data);
    			break;
    		case 4:
    			list1.deleteFirst();
    			break;
    		case 5:
    			list1.deleteLast();
    			break;
    		case 6:
    			cout<<"Enter value : ";
    			cin>>value;
    			list1.deleteNode(value);
    			break;
    		case 7:
    			exit(0);
    		default:
    		    cout<<"Invalid choiced";
		}
		getch();
	}
}