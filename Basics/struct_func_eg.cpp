///A basic C++ program demonstrating the use of structures and function to calculate area of rectangle. 


#include<iostream>
using namespace std;
struct Rectangle{
    float length;
    float breadth;

};
float area(Rectangle r){
    return r.length*r.breadth;
}
int main(){
    Rectangle rect;
    cout<<"Enter length and breadth of the rectangle:"<<endl;
    cin>>rect.length>>rect.breadth;
    float result = area(rect);
    cout<<"Area of the rectangle:"<<result<<endl;
    return 0;
}
