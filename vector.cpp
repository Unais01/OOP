#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3};
    // vec.clear();
    if (vec.empty())
        cout << "Empty..." << endl;
    else
        cout << "Filled..." << endl;
    cout << "Cap : " << vec.capacity() << endl;
    cout << "Size : " << vec.size() << endl;
    vector<int>::iterator it;
    vector<int>::reverse_iterator itr;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (itr = vec.rbegin(); itr != vec.rend(); itr++)
    {
        cout << *(itr) << " ";
    }
    cout << endl;

    return 0;
}