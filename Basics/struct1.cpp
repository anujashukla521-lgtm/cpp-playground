// A basic C++ program that demonstrates how to use structures and arrays together by storing and printing details of 5 students.

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll_no;
    string name;
    float marks;
};
int main()
{
    struct Student s[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter roll number of student " << i + 1 << endl;
        cin >> s[i].roll_no;
        cout << "Enter name of student " << i + 1 << endl;
        cin.ignore();
        getline(cin, s[i].name);
        cout << "Enter marks of student " << i + 1 << endl;
        cin >> s[i].marks;
    }
    cout << "\n\n----------Displaying details----------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Roll number of student " << i + 1 << ":" << s[i].roll_no << endl;
        cout << "Name of student " << i + 1 << ":" << s[i].name << endl;
        cout << "Marks of student " << i + 1 << ":" << s[i].marks << endl;
    }

    return 0;
}
