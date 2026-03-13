// A static data member is shared by all objects and is used here to count the total number of objects created.

#include<iostream>
using namespace std;

class Employee{
    static int count;
    public:
    Employee(){
        count++;
    }
    static void showCount(){
        cout<<"Number of objects created "<<count<<endl;
    }

};
int Employee :: count;
int main(){
    Employee e1,e2,e3;
    Employee::showCount();
    return 0;
}
