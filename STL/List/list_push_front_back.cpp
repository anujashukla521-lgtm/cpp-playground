// This program uses the C++ STL list to insert character elements at the front and back based on user input and displays the final order using a range-based for loop.

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> lis1;
    char frontEle, backEle1, backEle2;
    cout << "Enter element for front: ";
    cin >> frontEle;
    cout << "Enter 2 elements to be added at back: ";
    cin >> backEle1 >> backEle2;
    lis1.push_back(backEle1);
    lis1.push_front(frontEle);
    lis1.push_back(backEle2);
    for (char x : lis1)
    {
        cout << x << " ";
    }
    return 0;
}