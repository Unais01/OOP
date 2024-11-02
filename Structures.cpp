#include <iostream>
using namespace std;

struct Person
{
    string name;
    float salary;
    int age;
    string city;
    Person(string name, float salary, int age, string city)
    {
        this->name = name;
        this->salary = salary;
        this->age = age;
        this->city = city;
    }
    void person_details()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Salary :" << salary << " USD" << endl;
        cout << "City :" << city << endl;
    }
};
int main()
{

    Person Alice("Alice Joe", 5000.80, 25, "Chicago");
    // Alice.name = "Alice Joe";
    // Alice.age = 25;
    // Alice.city = "Chicago";
    Alice.salary = 9000.80;
    Alice.person_details();

    return 0;
}