#include <iostream>
using namespace std;

class Car
{
protected:
    string engine = "Electric";
    string software_lang = "c++";
    string name;

public:
    virtual void Display()
    {
        cout << "Name of Vehical " << name << endl;
    }
    Car(string n) : name(n)
    {
        cout << "Constructor Invokation\n";
    }
};
class SUV : public Car
{
protected:
    string name;

public:
    void Display() override
    {
        cout << "Name of Vehical " << name << software_lang << "\n";
    }
    SUV(string n, string n2) : Car(n), name(n2)
    {
        cout << "Constructor Invokation2\n";
    }
};

int main()
{
    SUV BMW("BMW V-8", "bmw suv");
    BMW.Display();
    return 0;
}