// Demonstrates that a const object can call a member function template only if the function is const-qualified.

#include<iostream>
using namespace std;

class Display{
    public:
    template <class T>
    void show(T x) const{
        cout<<"Here is our "<<x<<endl;
    }
};
int main(){
    const Display d;
    d.show(2);
    d.show(2.5);
    return 0;
}