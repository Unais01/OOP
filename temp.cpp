#include <iostream>
using namespace std;
#define newline std::cout << "\n\n"
int main()
{
    newline;
    int size = 0;
    cout << "Enter the size\n";
    cin >> size;

    int *marks = new int[size];
    cout << "Enter the marks\n";
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
    newline;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << marks[i] << " ";
    }

    newline;
    int *ptr = marks;

    // cout << *ptr << " " << *(marks + 1);
    char *name[30];
    delete ptr;
    delete marks;
    cout << *ptr << " " << *marks << "\n";
    ptr = nullptr;
    marks = nullptr;
    // cout << *ptr << " " << *marks << "\n";
    return 0;
}