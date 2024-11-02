#include <iostream>
#include <vector>
// #include <utility>
using namespace std;

int main()
{

    vector<pair<int, string>> sd;
    sd.push_back({1, "sneha"});
    sd.push_back({2, "Razan"});
    sd.push_back({3, "Dam"});
    sd.push_back(make_pair(4, "Alice"));
    for (const auto &it : sd)
    {
        cout << "Roll No: " << it.first << " Name: " << it.second << endl;
    }
    return 0;
}