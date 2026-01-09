//Program of multilevel inheritance calculating total marks and grade of a student

#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    void setRollNO(void)
    {
        cout << "Enter roll no of student:" << endl;
        cin >> roll_no;
    }
    int getRollNo()
    {
        return roll_no;
    }

    void setName(void)
    {
        cout << "Enter name of student:" << endl;
        cin.ignore();
        getline(cin, name);
    }
    string getName()
    {
        return name;
    }
};
class InternalMarks : public Student
{
    float m1, m2, m3;

public:
    void setMarks(void)
    {
        cout << "Enter marks in 3 subjects" << endl;
        cin >> m1 >> m2 >> m3;
    }
    float getMarks()
    {
        return m1 + m2 + m3;
    }
};
class FinalResult : public InternalMarks
{
protected:
    float total;
    char grade;

public:
    void gradeCheck()
    {
        total = getMarks();
        if (total >= 90)
        {
            grade = 'A';
        }
        else if (total >= 75)
        {
            grade = 'B';
        }
        else if (total >= 50)
        {
            grade = 'C';
        }
        else
        {
            grade = 'D';
        }
    }
    void display()
    {
        gradeCheck();
        cout << "\n\n----------Student's Detail-----------" << endl;
        cout << "Roll number of the student: " << getRollNo() << endl;
        cout << "Name of the student: " << getName() << endl;
        cout << "Total Marks of the student: " << total << endl;
        cout << "Grade of the student: " << grade << endl;
    }
};
int main()
{

    FinalResult f;
    f.setRollNO();
    f.setName();
    f.setMarks();
    f.display();
    return 0;
}
