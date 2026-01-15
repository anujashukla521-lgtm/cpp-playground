// Shows that virtual functions do not use runtime polymorphism inside constructors, as the derived part of an object is not yet constructed, so the base class version is called.

#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"This is virtual member function"<<endl;
    }
    Base(){
        show();
    }
};
class Derived : public Base{
    public:
    void show() override{
        cout<<"Override function"<<endl;
    }
};
int main(){
    Base *b = new Derived();
    delete b;
    return 0;
}

//Explanation
// Virtual functions do not behave polymorphically inside constructors and destructors because the derived part of the object is not yet constructed (or already destroyed). Therefore, the base class version is called to avoid accessing uninitialized data.