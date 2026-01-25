// C++ class template example that finds the maximum of two values using generic comparison, demonstrating how templates work with different data types like int, float, and std::string.

#include<iostream>
using namespace std;

template <class T>
class myClass{
    T a, b;
    public:
    myClass(T val1, T val2){
        a = val1;
        b = val2;
    }
    void findMax(){
        if(a>b){
            cout<<a<<" is max."<<endl;
        }else{
            cout<<b<<" is max.";
        }
    }
};
int main(){
    myClass <int> x(12, 34);
    x.findMax();
    cout<<endl;
    myClass <float> y(3.4,2.9);
    y.findMax();
    cout<<endl;
    myClass <string> z("Hello", "Hell");
    z.findMax();
    return 0;
}