//A basic C++ program demonstrating the use of structures and arrays by creating a simple book information system. 

#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    float price;
};
int main()
{
    int n;
    cout << "How many books?" << endl;
    cin >> n;
    Book b[n];
    cout << "Enter details of " << n << " books:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Input details for book " << i + 1 << endl;
        cout << "ID " << endl;
        cin >> b[i].id;
        cout << "Title " << endl;
        cin.ignore();
        getline(cin, b[i].title);
        cout << "Author " << endl;
        getline(cin, b[i].author);
        cout << "Price " << endl;
        cin >> b[i].price;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n--------Display details of book " << i + 1 << endl;
        cout << "ID:" << b[i].id << endl;
        cout << "Title:" << b[i].title << endl;
        cout << "Author:" << b[i].author << endl;
        cout << "Price:" << b[i].price << endl;
    }
    return 0;
}
