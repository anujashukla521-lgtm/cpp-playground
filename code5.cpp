// C++ program showing multiple
// inheritance, used to generate an attendance report based on student details and attendance percentage.

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student(int r, string n) : roll_no(r), name(n) {} // initialization list
};
class Attendance
{
protected:
    int attendance_percent;

public:
    Attendance(int a) : attendance_percent(a) {} // initialization list
};
class FinalReport : public Student, public Attendance
{
    string remark;

public:
    FinalReport(int r, string n, int a)
        : Student(r, n), Attendance(a) {}
    void grade()
    {
        if (attendance_percent >= 75)
        {
            remark = "Allowed";
        }
        else
        {
            remark = "Short Attendance";
        }
    }
    void display()
    {
        grade();
        cout << "\n\n---------Student's Attendance Details------------" << endl;
        cout << "Roll no of the student: " << roll_no << endl;
        cout << "Name of the student: " << name << endl;
        cout << "Percentage of attendance: " << attendance_percent << endl;
        cout << "Remark of the student: " << remark << endl;
    }
};
int main()
{
    int r, a;
    string n;
    cout << "Enter roll number of the student: " << endl;
    cin >> r;

    cout << "Enter name of the student: " << endl;
    cin.ignore();
    getline(cin, n);

    cout << "Enter percentage of attendance: " << endl;
    cin >> a;

    FinalReport fr(r, n, a);
    fr.display();
    return 0;
}