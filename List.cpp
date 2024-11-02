#include <iostream>
#include <list>
using namespace std;
int main()
{

    list<int> L1;
    L1 = {1, 2, 5, 6};
    L1.push_back(1);
    list<int>::reverse_iterator ritr;
    for (ritr = L1.rbegin(); ritr != L1.rend(); ritr++)
    {
        cout << *(ritr) << " ";
    }
    cout << endl;
    for (auto it : L1)

        cout << it << " ";
    return 0;
}