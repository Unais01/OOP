#include <iostream>
using namespace std;
// template <typename T>
// void log(T value)
// {
//     cout << value << " \n";
// }

template <typename T>
class Vector
{
private:
    int size;
    T arr[];

public:
    void getInput()
    {
        cout << "Enter elements\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {

            cout << arr[i] << " ";
        }
        cout << "\nPROGRAM SUCCESS\n";
    }
    void addToLast(T value)
    {
        arr[size] = value;
        size++;
    }
    void arrayLength()
    {
        cout << this->size << endl;
    }

    Vector(int size)
    {
        this->size = size;
        cout << "constructor invoked\n";
    }
};

int main()
{
    Vector<int> arr(5);
    arr.getInput();
    arr.display();
    arr.addToLast(100);
    arr.addToLast(23);
    arr.display();
    arr.arrayLength();
    return 0;
}