// This program illustrates the concept of encapsulation in C++ by restricting direct access to a private data member and providing controlled access through setter and getter functions.

#include <iostream>
using namespace std;

class BankAccount
{
    float balance;

public:
    void setBalance(float b)
    {
        balance = b;
    }
    float getBalance()
    {
        return balance;
    }
};
int main()
{
    BankAccount ba;
    ba.setBalance(2500);
    cout << "Balance: " << ba.getBalance() << endl;
    return 0;
}