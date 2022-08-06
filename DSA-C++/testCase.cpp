#include<iostream>
#include<stdlib.h>
#include<conio.h>
 using namespace std;

class Linkedlist
{
	private:
		struct node 
		{
			int item;
			node* next;
		};
		node* start;
	public:
		Linkedlist(){start = NULL;}
		SLL(){start=NULL;}
		void insertAtLast(int data);
	    void insertAtfirst(int data);
	    void insertAfter(int value,int data);
	    void deleteFirst();
	    void deletelast();
	    void deleteNode(int value);
	    void viewList();
//	    ~SLL();
};

void Linkedlist::deleteNode(int value) 
{
	node *t1,*t2;
	t1 = start;
	t2 = NULL;
	
	while(t1)
	{
		t2 = t1;
		if( value == t1->item)
			break;
		t1 = t1->next;
	}
	if(t1 == NULL)
	{
		delete t1;
		t2->next = NULL;
	}
	else
	{
		t2->next = t1->next;
		delete t1;
		
	}
	
	if( value != t1->item)
	cout<<" Not Found:";
	
}


void Linkedlist::insertAfter(int value, int data)
{
	node *t, *n;
	t = start;
	while (t)
	{
		if (t->item == value)
			break;
		t = t->next;
	}
	if (t != NULL)
	{
		n = new node;
		n->item = data;
		n->next = t->next;
		t->next = n;
	}
	else
	{
		cout << "No item with value " << value << " in the list";
	}
}


void Linkedlist::insertAtLast(int data)
{
	node *n = new node;
	n->item = data;
	n->next = NULL; 	
	
	if(start == NULL)
	{
		start = n;
	}
	else
	{
		node* t;
		while(t->next != NULL)
		{
			t = t->next;		
		}	
		
		t->next = n;	
	start = t;
	}
	
}

void Linkedlist::insertAtfirst(int data)
{
	node* n = new node;
	n->item = data;
	
	if(start == NULL)
	{
		start = n;
		n->next = NULL; 	
	}
	else
	{
		node *t;
		t = start;
		n->next = t;
		start = n;
	}
}



int main()
{
	Linkedlist list;
	list.insertAtfirst(33);
	list.insertAtfirst(34);
	list.insertAtfirst(22);
	list.insertAfter(22,77);
	list.deleteNode(22);
	
}

