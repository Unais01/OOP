#include <iostream>
using namespace std;

template <typename T, typename U>
class Calci
{
private:
    T operand1;
    U operand2;

public:
    T add()
    {
        return operand1 + operand2;
    }
    Calci(T operand1, U operand2)
    {
        this->operand1 = operand1;
        this->operand2 = operand2;
    }
};

class Motor
{
public:
    string name;
    Motor(string name)
    {
        this->name = name;
        // cout << "Name: " << name << endl;
    }
};
int main()
{

    // Motor car("SUV");
    // Motor bike = Motor("SPORTS");
    // cout << car.name << " " << bike.name << endl;
    Calci<double, int> addCalci = Calci<double, int>(3.5, 6);
    cout << addCalci.add();
    return 0;
}