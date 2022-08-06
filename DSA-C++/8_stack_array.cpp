#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class Stack
{
private:
    int capacity;
    int top;
    int *ptr;

public:
    Stack()
    {
        capacity = 0;
        top = -1;
        ptr = NULL;
    }
    void createStack(int cap);
    void push(int data);
    bool isFull();
    void pop();
    bool isEmpty();
    int peek();
};

int Stack::peek()
{
    if (!isEmpty())
        return ptr[top];
    return 0;
}

bool Stack::isEmpty()
{
    return top == -1;
}

void Stack::pop()
{
    if (isEmpty())
        cout << "List is Empty";
    else
        top--;
}

bool Stack::isFull()
{
    return top + 1 == capacity;
}

void Stack::push(int data)
{
    if (isFull())
        cout << "List is full ";
    else
    {
        top++;
        ptr[top] = data;
    }
}

void Stack::createStack(int cap)
{
    if (cap > 0)
    {
        if (ptr != NULL)
            delete[] ptr;
        capacity = cap;
        top = -1;
        ptr = new int[cap];
    }
}

int menu()
{
    int choice;
    cout << "\n1. Size of Stack :";
    cout << "\n2. Insert data :";
    cout << "\n3. Delete data :";
    cout << "\n4. Exit";
    cout << "\n\nEnter your choice : ";
    cin >> choice;
    return choice;
}

int main()
{
    int cap, data, value;
    Stack stk;
    while (true)
    {
        system("cls");
        //    	stk.peek();
        cout << stk.peek() << " ";
        cout << "\n";
        switch (menu())
        {
        case 1:
            cout << "Enter capacity of Stack : ";
            cin >> cap;
            stk.createStack(cap);
            break;
        case 2:
            cout << "Enter data to insert : ";
            cin >> data;
            stk.push(data);
            break;
        case 3:
            stk.pop();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choiced";
        }
        getch();
    }
}