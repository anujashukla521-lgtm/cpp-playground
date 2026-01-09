// Program of single inheritance, wwhere Derived Class 'Result' is using friend function to access the private members of Base Class 'Student',

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    string name;
    int roll_no;
    friend class Result;

public:
    void setData1(string n, int r)
    {
        name = n;
        roll_no = r;
    }
};
class Result : public Student
{
    float phy, chem;

public:
    void setData2(float m1, float m2)
    {
        phy = m1;
        chem = m2;
    }
    void display()
    {
        cout << "Name of student: " << name << endl;
        cout << "Roll no of student: " << roll_no << endl;
        cout << "Marks in physics: " << phy << endl;
        cout << "Marks in chemistry: " << chem << endl;
    }
};
int main()
{
    Result r;
    r.setData1("Anuja Shukla", 1);
    r.setData2(89, 97);
    r.display();
    return 0;
}
