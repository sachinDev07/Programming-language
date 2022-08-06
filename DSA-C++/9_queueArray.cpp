#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
 using namespace std;
 
class Queue
{
private:
  	int capacity;
  	int rear,front;
  	int *ptr;	
public:
	Queue()
    {
        capacity = 0;
        rear = -1;
        front= -1;
        ptr = NULL;
    }
	void creatQueue(int cap);
	void insert(int data);
	void deletion();
	void showQueue();
	int getFront();
	int getRear();
	
	
};

int Queue::getRear()
{
	if(rear!=-1)
		return ptr[rear];
    return 0;
}

int Queue::getFront()
{
	if(front!=-1)
		return ptr[front];
     return 0;
}

void Queue::deletion()
{
	if(front==-1)
		cout<<"Underflow";
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==capacity)
		front=0;
	else
		front++;
}

void Queue::insert(int data)
{
	if(ptr)
	{
		if(front==0&&rear==capacity-1||rear+1==front)
			cout<<"Queue is full or Underflow ";
		else if(rear==-1)
		{
			front=rear=0;
			ptr[rear]=data;
		}
		else if(rear==capacity-1)
		{
			rear=0;
			ptr[rear]=data;
		}
		else
		{
			rear++;
			ptr[rear]=data;
		}
	}
}

void Queue::creatQueue(int cap)
{
	if(ptr==NULL)
	{
		capacity=cap;
		front=-1;
		rear=-1;
	    ptr=new int[cap];
	}
}

int main()
{
	Queue q;
	q.creatQueue(3);
	q.insert(33);
	q.insert(44);
	cout<<q.getFront()<<" ";
	cout<<q.getRear()<<" ";
}


