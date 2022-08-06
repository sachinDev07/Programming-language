#include<iostream>
#include<conio.h>
 using namespace std;

void TOH(int n,char beg,char aux,char end)
{
	if(n>0)
	{
		TOH(n-1,beg,end,aux);
		cout<<"\n"<<beg<<"->"<<end;
		TOH(n-1,aux,beg,end);
	}
}

int main()
{
	TOH(5 ,'A','B','C');
}