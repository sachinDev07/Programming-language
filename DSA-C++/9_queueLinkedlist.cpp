#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
 using namespace std;

class Queue
{
	private:
		struct node
		{
			int item;
			node *next;
		};
		node *rear,*front;
	public:
		Queue(){rear=NULL;front=NULL;}
		~Queue()
		{
			while(!isEmpty())
				deletion();
		}
		void insert(int data);
		int deletion();
		int getFirst();
		int getLast();
		int count();
		int isEmpty();
		void displayQueue();
		
};

void Queue::displayQueue()
{
	node *t;
	t=front;
	while(t!=NULL)
	{
//		cout<<"\n";
		cout<<t->item<<" ";
		t=t->next;
	}
}

int Queue::isEmpty()
{
	if(front==NULL)
		return 1;
	else
		return 0;
}

int Queue::count()
{
	int c=0;
	if(front==NULL)
		return c;
	else
	{ 
		node *t;
		t=front;
		while(t!=rear)
		{
			t=t->next;
			c++;
		}
		c++;
		return c;
	}
}

int Queue::getLast()
{
	if(front==NULL)
		return -1;
	else
		return rear->item;
}

int Queue::getFirst()
{
	if(front==NULL)
		return -1;
	else
		return front->item;	
}

int Queue::deletion()
{
	if(front==NULL)
		return 0;
	else if(front==rear)
		return 1;
	else
	{
		node *r;
		r=front;
		front=front->next;
		delete r;
		return 1;
	}
}

void Queue::insert(int data)
{
	node *n=new node;
	n->item=data;
	n->next=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=rear=n;
	}
	else
	{
		rear->next=n;
		rear=n;
	}
}

int main()
{
	Queue q;
	cout<<q.isEmpty()<<" ";
	q.insert(22);
	q.insert(33);
	q.insert(44);
    cout<<q.deletion()<<" ";
    cout<<q.getFirst()<<" ";
    cout<<q.getLast()<<" ";
    cout<<q.count()<<" ";
    cout<<q.isEmpty()<<" ";
    q.displayQueue();
    
}

