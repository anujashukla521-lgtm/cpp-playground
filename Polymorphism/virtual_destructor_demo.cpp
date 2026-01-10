// A C++ program demonstrating runtime polymorphism using virtual functions and virtual destructors with base class pointers.

#include <iostream>
using namespace std;

class Account
{
protected:
    int account_no;

public:
    Account(int n)
    {
        account_no = n;
        cout << "'Account' constructor called!!" << endl;
    }
   
    virtual ~Account()
    {
        cout << "Virtual destructor called!!" << endl;
    }
    virtual void display() {}
};
class SavingsAccount : public Account
{
    float S_balance;

public:
    SavingsAccount(int n, float sb) : Account(n)
    {
        S_balance = sb;
        cout << "'SavingsAccount' constructor called!!" << endl;
    }
    ~SavingsAccount()
    {
        cout << "'SavingsAccount'destructor called!!" << endl;
    }
    void display()
    {
        cout << "Account no of savings account: " << account_no << endl;
        cout << "Balance of savings account: " << S_balance << endl;
    }
};
class CurrentAccount : public Account
{
    float C_balance;

public:
    CurrentAccount(int n, float cb) : Account(n)
    {
        C_balance = cb;
        cout << "'CurrentAccount' constructor called!!" << endl;
    }
    ~CurrentAccount()
    {
        cout << "'CurrentAccount' destructor called!!" << endl;
    }
    void display()
    {
        cout << "Account no of current account: " << account_no << endl;
        cout << "Balance of current account: " << C_balance << endl;
    }
};
int main()
{
    Account *a1 = new SavingsAccount(123, 25000);
    Account *a2 = new CurrentAccount(456, 20000);

    cout << "\n------Displaying account details----- " << endl;
    a1->display();
    a2->display();

    cout << "\n------Deleting objects-------" << endl;
    delete a1;
    delete a2;
    return 0;
}