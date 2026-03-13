// Demonstrates virtual base class in C++ to resolve the diamond problem using multiple inheritance. The program models a Person–Student–Employee–Intern hierarchy and ensures a single shared base class instance.

#include<iostream>
#include<string>
using namespace std;

class Person{
    int age;
    public:
    Person(int a){
        age = a;
    }
    void getAge(){
        cout<<"Age of person is "<<age<<endl;
    }
};
class Student : virtual public Person{
    int roll_no;
    string name;
    public:
    Student(int a, int r, string n):Person(a){
        roll_no = r;
        name = n;
    }
    void getStuData(){
        cout<<"Roll no of student "<<roll_no<<endl;
        cout<<"Name of student "<<name<<endl;
    }
};
class Employee : virtual public Person{
    int id;
    public:
    Employee(int a, int i):Person(a){
        id  = i;
    }
    void getID(){
        cout<<"ID of the employee "<<id<<endl;
    }
};
class Intern : public Student, public Employee{
    float salary;
    public:
    Intern(int a, int r, string n, int i, float s):Person(a),Student(a,r,n),Employee(a,i){
        salary = s;
    }
    void display(){
        getAge();
        getStuData();
        getID();
        cout<<"Salary of the intern "<<salary<<endl;
    }
};
int main(){
   Intern obj(21,200,"Anuja Shukla", 1000, 250.20);
   obj.display();
   return 0;
}

