
// practicing queue with c++...
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    system("cls");
    queue<string> q;
    q.push("Sachin");
    q.push("kumar");
    q.push("Ash");

    cout << "First element = " << q.front() << endl;
    q.pop();
    cout << "First element = " << q.front() << endl;

    cout<<"size after pop = "<<q.size()<<endl;
}