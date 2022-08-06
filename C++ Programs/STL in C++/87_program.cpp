// practicing stack with c++ ....
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    system("cls");
    stack<string> s;

    s.push("Sachin");
    s.push("kumar");
    s.push("Ash");

    cout << "\nTop element in stack = " << s.top();
    s.pop();
    cout << "\nTop element in stack = " << s.top();

    cout << "\nsize of array = " << s.size() ;
    cout<<"\nEmpty or not = "<< s.empty();


}