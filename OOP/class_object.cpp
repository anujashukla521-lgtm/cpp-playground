// This program illustrates the use of setter methods to initialize private data members in a C++ class, highlighting encapsulation and controlled data access without using constructors.
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int id;
    string name;

public:
    void setData(int a, string b)
    {
        id = a;
        name = b;
    }
    void display()
    {
        cout << "ID of student: " << id << endl;
        cout << "Name of student: " << name << endl;
    }
};
int main()
{
    Student s;
    s.setData(1, "Anuja Shukla");
    s.display();
    return 0;
}