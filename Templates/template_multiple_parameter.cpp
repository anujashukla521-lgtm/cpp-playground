// C++ class template demonstrating the use of multiple template parameters to store and display values of different data types.

#include<iostream>
using namespace std;

template <class T1, class T2>
class Pairing{
    T1 x;
    T2 y;
    public:
    Pairing(T1 x, T2 y){
        this->x = x;
        this->y = y;
    }
    void display(){
        cout<<"x is "<<x<<endl;
        cout<<"y is "<<y;
    }
};
int main(){
    Pairing <int, float> p1(21, 2.9);
    p1.display();
    cout<<endl;
    Pairing <string, int> p2("Anuja Shukla", 18);
    p2.display();
    return 0;
}