// This program illustrates object initialization using a parameterized constructor in C++. It models an Employee class with private data members and displays employee details, emphasizing proper constructor usage.

#include <iostream>
using namespace std;

class Employee
{
    int id;
    float salary;

public:
    Employee(int i, float s)
    {
        id = i;
        salary = s;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e(1, 250.45);
    e.display();
    return 0;
}