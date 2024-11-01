#include <iostream>
using namespace std;

class SayHello
{
    static int count;

private:
    int id = 1;
    string name = "john doe";

public:
    int salary = 100;
    void greet()
    {
        cout << "Good Morning\n";
        cout << "Static Varible " << count << endl;
        count++;
    }
    friend void TakeMyPrivateMemebers(SayHello &obj);
};
int SayHello::count;
void TakeMyPrivateMemebers(SayHello &obj)
{
    cout << "The value of id and name is " << obj.name << " - " << obj.id << "\n";
}
int main()
{
    SayHello obj1;
    SayHello obj2;
    cout << obj1.salary << endl;
    TakeMyPrivateMemebers(obj1);
    obj1.greet();

    obj2.greet();
    return 0;
}