#include<iostream>
 using namespace std;
 
int sumOfDigit(int n)
{
	if(n>0)
		return n%10+sumOfDigit(n/10);
	return 0;
}

int squarSum(int n)
{
	if(n>0)
	 return n*n+squarSum(n-1);
}

int sumOddN(int n)
{
	if(n==1)
		return 1;
	return  2*n-1 + sumOddN(n-1);
}

int sumN(int n)
{
	if(n==1)
		return 1;
	return n+sumN(n-1);
}

int sumEvenN(int n)
{
	if(n==1)
		return 2;
	return 2*n+sumEvenN(n-1);
}
 
 void reverseOddN(int n)
{
	
	if(n>0)
	{
		if(n%2!=0)
			cout<<n<<" ";
		reverseOddN(n-1);
	}
}
 
void oddN(int n)
{
	
	if(n>0)
	{
		oddN(n-1);
		if(n%2!=0)
			cout<<n<<" ";
	}
}

void reverseEvenN(int n)
{		
	if(n>1)
	{
		n=n-1;
		if(n%2==0)
			cout<<n<<" ";
		reverseEvenN(n);
	}
	
}
 
void printEvenN(int n)
{
	
	if(n>1)
	{
		printEvenN(n-1);
		if(n%2==0)
			cout<<n<<" ";
	}
	
}

void reverseN(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
		reverseN(n-1);
	}
}

void printN(int n)
{
	if(n>0)
	{
		printN(n-1);
		cout<<n<<" ";
	}
}

int main()
{
//	cout<<"Natural numbers :";
//	printN(5);
//	cout<<"\n";
//	cout<<"Reverse Natural numbers :";
//	reverseN(10);
//	cout<<"\n";
//	cout<<"Even natural numbers :";
//	printEvenN(15);
//	cout<<"\n";
//	cout<<"Even natural numbers in reverse order :";
//	reverseEvenN(15);
//	cout<<"\n";
//	cout<<"Odd natural numbers :";
//	oddN(15);
//	cout<<"\n";
//	cout<<"Odd natural numbers in reverse order :";
//	reverseOddN(15);
//	cout<<"\n";
//	cout<<"Sum of natural numbers :";
//	cout<<sumN(5)<<" ";
//	cout<<"\n";
//	cout<<"Sum of even natural numbers : ";
//	cout<<sumEvenN(5)<<" ";
//	cout<<"\n";
//	cout<<"Sum of odd natural numbers : "<<sumOddN(3);
//	cout<<"\n";
//	cout<<"Sum of square of natural numbers : "<<squarSum(5);
	cout<<"\n";
	cout<<"Sum of digit : "<<sumOfDigit(123);	
}