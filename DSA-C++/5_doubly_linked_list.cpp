#include<iostream>
#include<conio.h>
#include<stdio.h>
 using namespace std;
 
class DLL
{
	private:
	struct node
	{
		node *prev;
		int item;
		node *next;
	};
	node *start;
	public:
		DLL(){start=NULL;}
		void insertAtLast(int data);
		void insertAtFirst(int data);
		void insertAfter(int value,int data);
		void deleteFirst();
		void deleteLast();
		void deleteNode(int value);
		void viewList();
		~DLL();
		
};

DLL::~DLL()
{
	while(start)
	  deleteFirst();
}

void DLL::viewList()
{
	node *t;
	t=start;
	while(t)
	{
		cout<<t->item<<" ";
		t=t->next;
	}
}

void DLL::deleteNode(int value)
{
	node *t1,*t2;
	t1=start;
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
			start=t1->next;
	    else
			t2->next=t1->next;
		delete t1;
	}
}

void DLL::deleteLast()
{
	node *t1,*t2;
	if(start==NULL)
	  cout<<"Node is Empty ";
	else
	{
		t1=start;
		t2=NULL;
		while(t1->next!=NULL)
		{
			t2=t1;
		    t1=t1->next;
		}
		if(t2==NULL)
			start=NULL;
		else
			t2->next=NULL;
		delete t1;		
	}
}

void DLL::deleteFirst()
{
	node *t;
	if(start==NULL)
	  cout<<"List is empty ";
	else
	{
		t=start;
		t->prev=NULL;
		start=t->next;
		delete t;
	}
}

void DLL::insertAfter(int value,int data)
{
	node *t;
	t=start;
	while(t)
	{
		if(t->item==value)
		 break;
		t=t->next;
	}
	if(t!=NULL)
	{
		node *n=new node;
		n->item=data;
		n->prev=t;
		n->next=t->next;
		
		if(t->next!=NULL)
		 t->next->prev=n;
		t->next=n;
	}
	else
	  cout<<"List is empty or value is not found ";
}

void DLL::insertAtLast(int data)
{
	node *t;
	node *n=new node;
	n->item=data;
	n->next=NULL;
	if(start==NULL)
	{
		n->prev=NULL;
		start=n;
	}
	else
	{
		t=start;
		while(t->next!=NULL)
			t=t->next; 
		n->prev=t;
		t->next=n;
	}	
}

void DLL::insertAtFirst(int data)
{
	node *n=new node;
	n->prev=NULL;
	n->item=data;
	n->next=start;
	if(start)
	  start->prev=n;
	start=n;
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
	DLL list1;
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