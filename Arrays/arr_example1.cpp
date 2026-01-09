// A basic C++ program that helps beginners understand arrays and loops by finding the largest and smallest number from a list of 5 user-entered values.

#include <iostream>
using namespace std;

int main()
{
    int arr[5], largest, smallest;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << endl;
        cin >> arr[i];
    }
    largest = smallest = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    return 0;
}

