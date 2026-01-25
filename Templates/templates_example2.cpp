// C++ class template demonstrating swap operation using templates, showing how generic programming enables type-safe swapping of values with a single reusable implementation.

#include<iostream>
using namespace std;

template <class T>
class Swap{
    T a,b;
   
    public:
    Swap(T x, T y){
        a = x;
        b = y;
    }
        void myswap(){
            int temp = a;
            a = b;
            b = temp;
        }
        void display(){
            cout<<"Value of a: "<<this->a<<endl;
            cout<<"Value of b: "<<this->b<<endl;
        }
    
};
int main(){
    Swap <int> s(1,2);
    cout<<"Before swapping!!"<<endl;
    s.display();
    cout<<"\nAfter swapping!!"<<endl;
    s.myswap();
    s.display();
    return 0;
}