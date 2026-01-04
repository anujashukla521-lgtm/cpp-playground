// A basic C++ program for beginners to learn how to use structures to handle multiple student records.

#include <iostream>
using namespace std;

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[3];
    cout << "---------Getting data of students---------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Input details for student " << i + 1 << endl;
        cout << "Roll number of the student: " << endl;
        cin >> s[i].roll_no;

        cout << "Name of the student: " << endl;
        cin >> s[i].name;

        cout << "Marks of the student: " << endl;
        cin >> s[i].marks;
    }
    cout << "\n\n---------Displaying data of students---------\n " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Data of Student " << i + 1 << endl;
        cout << "Roll no: " << s[i].roll_no << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
    return 0;
}
