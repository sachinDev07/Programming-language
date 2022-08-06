#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
 using namespace std;
 
 class Slist
 {
 	private:
 		struct node
 		{
 			int item;
			node *next;	
		};
		node *top;
		int temp;
	public:
		Slist(){top=NULL;temp=-1;}
		void push(int data);
		void pop();
		void peek();
		bool isEmpty();
 	
 };
 
 bool Slist::isEmpty()
{
    return temp == -1;
}
 
 void Slist::peek()
 {
 	node *t;
 	t=top;
 	if (isEmpty())
        cout << "List is Empty";
    else
        cout<<t->item<<" ";
 }
 
 void Slist::pop()
 {
 	node *t;
 	if(top==NULL)
 	   cout<<"List is empty";
 	else
 	{
 		t=top;
 		top=t->next;
 		delete t;
	 }
 }
 
 void Slist::push(int data)
 {
 	temp++;
 	node *n=new node;
 	n->item=data;
 	n->next=top;
 	top=n;
 }
 
 int menu()
 {
 	int choice;
 	cout<<"\n1. Insert data";
 	cout<<"\n2. Delete data";
 	cout<<"\n3. Display data";
 	cout<<"\n4. Exit";
 	cout<<"\n\nEnter your choice : ";
 	cin>>choice;
 	return choice;
 }
 
 int main()
 {
 	int data;
 	Slist list;
 	while(true)
 	{
		system("cls");
 		cout<<"\n";
 		switch(menu())
 		{
 			case 1:
 				cout<<"Enter data : ";
 				cin>>data;
 				list.push(data);
 				break;
 			case 2:
 				list.pop();
 				break;
 			case 3:
 				list.peek();
 				break;
 			case 4:
 				exit(0);
 			default :
 				cout<<"Invalid choice ";
		 }
		 getch();
		 
	 }
 	
 }