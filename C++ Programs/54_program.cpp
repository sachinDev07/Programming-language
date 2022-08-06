
/*4. Define a class Operations, with static member pi with value 3.14. Define following functions
a. Overloaded versions of area to calculate area of circle and area of rectangle
b. Overloaded versions of add to calculate sum of two int values, sum of two float
values, concatenate two strings*/
#include<iostream>
#include<string.h>
using namespace std;
static float pi=3.14;
class Operation
{
	private:
		float r,l,b;
		int p,q,s;
		float x,y,z;
	public:
		void area_circle(int R)
		{ r=R; cout<<"\nArea of Circle :"<<pi*r*r; }
		
		void area_rectangle(int L,int B)
		{ l=L;b=B; cout<<"\nArea of Rectangle :"<<l*b; }
		
		void sum(int L,int B)
		{
			p=L;q=B;
			s=p+q;
			cout<<"\nSum of two int values :"<<s;
		}
		
		void sum(float L,float B)
		{
			x=L;y=B;
			z=x+y;
			printf("\nSum of two Float values : %.2f\n", z);
		}
		
		void sum(double L,double B)
		{
			x=L;y=B;
			z=x+y;
			printf("\nSum of two Double values : %.2f\n", z);
		}
		
		char* concat(char *S1,char *S2)
		{
			return(strcat(S2,S1));
		}
};
int main()
{
	Operation o1,o2;
	char s1[20],s2[20],*s3;
	float r,p;
	o1.area_circle(3);
	o1.area_rectangle(5,3);
	o1.sum(2,3);
	cout<<"\n";
	cin>>r>>p;
	o1.sum(r,p);
	cin.ignore();
	gets(s1);
	gets(s2);
	s3=(char*)o1.concat(s2,s1);
	cout<<s3;
	return 0;
}
