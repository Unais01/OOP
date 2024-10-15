#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string occupation;
    float salary;
};

void printClassInfo(Person &P1)
{
    cout << "From printClassInfo Function...\n";
    P1.name = "Saul Goodman";
    cout << P1.name << " " << P1.age << " " << P1.occupation << " " << P1.salary << endl;
}

int main()
{
    cout << "Intro to classes and objects\n";
    Person unais;
    unais.name = "unais";
    unais.age = 21;
    unais.occupation = "Student";
    unais.salary = 250000;
    cout << unais.name << " " << unais.age << " " << unais.occupation << " " << unais.salary << "\n";
    cout << "\n";
    printClassInfo(unais);
    return 0;
}