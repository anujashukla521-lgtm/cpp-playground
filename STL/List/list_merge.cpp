// This program sorts two character lists and merges them into a single sorted list using the STL merge() function.

#include <iostream>
#include <list>
using namespace std;
void display(list<char> l)
{
    list<char>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<char> lst1;
    lst1.push_back('Z');
    lst1.push_back('R');
    lst1.push_back('U');
    lst1.push_back('G');
    lst1.push_back('S');
    display(lst1);

    list<char> lst2;
    lst2.push_back('E');
    lst2.push_back('A');
    lst2.push_back('H');
    lst2.push_back('C');
    lst2.push_back('Q');
    display(lst2);
    lst1.sort();
    lst2.sort();
    lst1.merge(lst2);        //sorted merged list
    display(lst1);
    return 0;
}
