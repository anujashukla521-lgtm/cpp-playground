// A simple C++ program demonstrating the use of arrays inside a class to store and process student marks using object-oriented programming.

#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    float marks[5];

public:
    void setData()
    {
        cout << "Enter name of student: ";
        getline(cin, name);
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks in subject " << i + 1 << endl;
            cin >> marks[i];
        }
    }
    void display()
    {
        float total = 0;
        cout << "Name of student: " << name << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks of student in subject " << i + 1 << " are " << marks[i] << endl;
            total += marks[i];
        }
        cout << "Total marks of student: " << total << endl;
    }
};
int main()
{
    Student s;
    s.setData();
    s.display();
    return 0;
}
