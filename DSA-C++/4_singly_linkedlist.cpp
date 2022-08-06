#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class SLL
{
private:
	struct node
	{
		int item;
		node *next;
	};
	node *start;

public:
	SLL() { start = NULL; }
	void insertAtLast(int data);
	void insertAtfirst(int data);
	void insertAfter(int value, int data);
	void deleteFirst();
	void deletelast();
	void deleteNode(int value);
	void viewList();
	~SLL();
};

SLL::~SLL()
{
	while (start)
		deleteFirst();
}

void SLL::deleteNode(int value)
{
	node *t1, *t2;
	t1 = start;
	t2 = NULL;
	while (t1)
	{
		if (t1->item == value)
			break;
		t2 = t1;
		t1 = t1->next;
	}
	if (t1 == NULL)
		cout << "NO item with value" << value << " in the list";
	else
	{
		if (t2 == NULL)
			start = t1->next;
		else
			t2->next = t1->next;
		delete t1;
	}
}

void SLL::insertAfter(int value, int data)
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

void SLL::viewList()
{
	node *t;
	t = start;
	while (t)
	{
		cout << t->item << " ";
		t = t->next;
	}
}

void SLL::deletelast()
{
	node *t1, *t2;
	if (start == NULL)
	{
		cout << "Underflow or Node is Empty";
	}
	else
	{
		t1 = start;
		t2 = NULL;
		while (t1->next != NULL)
		{
			t2 = t1;
			t1 = t1->next;
		}
		if (t2 == NULL)
			start = NULL;
		else
			t2->next = NULL;
		delete t1;
	}
}

void SLL::deleteFirst()
{
	node *r;
	if (start == NULL)
		cout << "Underflow or Node is Empty";
	else
	{
		r = start;
		start = r->next;
		delete r;
	}
}

void SLL::insertAtfirst(int data)
{

	node *n = new node;
	n->item = data;
	n->next = start;
	start = n;
}

void SLL::insertAtLast(int data)
{
	node *t;
	node *n = new node;
	n->item = data;
	n->next = NULL;
	if (start == NULL)
	{
		start = n;
	}
	else
	{
		t = start;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = n;
	}
}

int main()
{
	SLL list1;
	list1.insertAtLast(10);
	list1.insertAtfirst(20);
}