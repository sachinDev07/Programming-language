#include<iostream>
#include<conio.h>
 using namespace std;

// void  setResult(int , int, int , int=0 , int=0 );
class Result
{
    private:
    int total_attempt, net_right, net_wrong, marks_for_right, marks_for_wrong;
    public:
    void setResult(int a,int b,int c,int d = 0,int e = 0)
    {        
        total_attempt   = a;
        net_right       = b;
        net_wrong       = c;
        marks_for_right = d;
        marks_for_wrong = e;
    }

    void showResult()
    {
        cout<<" "<<total_attempt<<" "<<net_right<<" "<<net_wrong<<" "<<marks_for_right<<" "<<marks_for_wrong;
    }
    
};

int main()
{
    Result r1;
    r1.setResult(22,33,11);
    r1.showResult();
}