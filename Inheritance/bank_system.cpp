// A simple C++ banking system demonstrating object-oriented programming concepts like encapsulation, inheritance, and function overriding using Savings and Current account models.

#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int n, double b) : accountNumber(n), balance(b) {}
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Balance after deposit: " << balance << endl;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << "Amount after withdraw: " << balance << endl;
        }
        else if (amount <= 0)
        {
            cout << "Invalid amount " << endl;
        }
        else
        {
            cout << "Insufficient amount " << endl;
        }
    }
    void display() const
    {
        cout << "Account number: " << accountNumber << endl;
        cout << "Initial balance: " << balance << endl;
    }
};
class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int n, double b, double r) : BankAccount(n, b)
    {
        interestRate = r;
    }
    void addInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Balance after interest: " << balance << endl;
    }
};
class CurrentAccount : public BankAccount
{
    double overdraftLimit;

public:
    CurrentAccount(int n, double b, double limit) : BankAccount(n, b)
    {
        overdraftLimit = limit;
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Balance after withdraw: " << balance << endl;
        }
        else
        {
            cout << "Limit exceeded or invalid amount " << endl;
        }
    }
};
int main()
{
    SavingsAccount s(100, 30000, 4.5);
    double amt;
    s.display();
    cout << "Enter amount to deposit: ";
    cin >> amt;
    s.deposit(amt);
    cout << "Enter amount to withdraw: ";
    cin >> amt;
    s.withdraw(amt);
    s.addInterest();

    CurrentAccount c(101, 55000, 20000);
    c.display();
    cout << "Enter amount to deposit: ";
    cin >> amt;
    c.deposit(amt);
    cout << "Enter amount to withdraw: ";
    cin >> amt;
    c.withdraw(amt);
    return 0;
}