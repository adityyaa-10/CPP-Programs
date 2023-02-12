#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4}; // STL syntax to create arrays

    int size = a.size(); // To obtain the size of an array

    // Traversal
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    // Arrays methods in C++ STL
    cout << "Element at 2nd index of the given array is -> " << a.at(2) << endl; // Counting starts from zero
    cout << "The array is empty: " << a.empty() << endl;                         // Returns boolean value, 0 for false, 1 for true
    cout << "First element of given array -> " << a.front() << endl;
    cout << "Last element of given array -> " << a.back() << endl;

    return 0;
}
