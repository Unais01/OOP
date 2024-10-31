#include <iostream>
using namespace std;

class Animal
{
protected:
    int legs;
    string type;

public:
    virtual void makeSound()
    {
        cout << "Animal makes sound\n";
    }
};
class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "meow mewo\n";
    }
};
class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "bark bark bark\n";
    }
};

int main()
{
    cout << "Hello! Polymorphism\n";
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    Animal *parentPtr;
    parentPtr = &myCat;
    parentPtr->makeSound();
    delete parentPtr;
    if (parentPtr)
        cout << "EXISTS\n";
    else
        cout << "DELETED\n";
    return 0;
}