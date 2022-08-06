
#include <iostream>
#include <conio.h>
 using namespace std;
class Account
{
private:
    int account_no, balance;
    static int interest;
public:
    void set_accountNo(int x){ account_no = x;}
    int get_accountNO(){return account_no;}
    void set_balance(int y){ balance = y;}
    int get_balance(){return balance;}
    static void set_rate_int(int z){ interest = z;}
    static int get_rate_int(){ return interest;}

};
int Account::interest ;
int main()
{
    Account a1,a2,a3;
    a1.set_accountNo(123);
    cout<<" "<<a1.get_accountNO()<<endl;
    a2.set_balance(5000);
    cout<<"Rs "<<a2.get_balance()<<endl;
    Account::set_rate_int(2);
    cout<<" "<<Account::get_rate_int();

}   