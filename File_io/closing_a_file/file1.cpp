// A basic C++ program demonstrating file input and output operations using ofstream and ifstream. It writes user input to a file and then reads the content back
// for display.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // connecting the file with 'out' stream
    ofstream out("demo2.txt");
    if (!out){
        cout << "Error opening file for writing\n";
        return 1;
    }
    // creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name:";
    getline(cin, name);

    // writing a string to the file
    out << "The name is " << name << endl;
    out.close();

    ifstream in("demo2.txt");
    if (!in){
        cout << "Error opening file for reading\n";
        return 1;
    }
    string content;
    getline(in, content);
    cout << "Content of the file is: " << content;
    in.close();
    return 0;
}
