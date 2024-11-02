#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    void show_details()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
    Person(string name, int age) : name(name), age(age) {}
};

int main()
{
    Person p1("Alice", 21);
    Person *ptr_to_p1 = &p1;
    ptr_to_p1->show_details();

    return 0;
}