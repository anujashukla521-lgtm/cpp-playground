#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // opening file using constructor and writing to it
    string st = "Hey!!";
    ofstream out("demo1.txt");  //write operation
    out<<st;
    out.close();

    // opening file using constructor and reading from it
    string st2;
    ifstream in("demo1.txt");        //read operation
    getline(in,st2);
    cout<<st2;
    in.close();

    return 0;
}
