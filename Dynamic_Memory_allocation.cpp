#include <iostream>
using namespace std;
#define log(x) std::cout << x
class SmartPhone
{
protected:
    virtual void Make_Call() = 0;
    virtual void Send_SMS() = 0;
    virtual void Take_Selfie() = 0; // contracts which derive classes has to fulfill
};
class Android : public SmartPhone
{
public:
    void Make_Call() override
    {
        log("MAKING A CALL...\n");
    }
    void Send_SMS() override
    {
        log("SENDING A SMS...\n");
    }
    void Take_Selfie() override
    {
        log("TAKING A SELFIE...\n");
    }
};
int main()
{
    cout << "Hello! From Dynamic Memory Allocation\n\n";
    // int *ptr = new int;
    // *ptr = 10;
    // *ptr = 11;
    // log(*ptr);
    // log("\n");

    // delete ptr;
    // log(*ptr);
    // log("\n");

    // ptr = nullptr; // to avoid dangling behavior of pointer in c++
    // log(*ptr);
    // log("\n");
    Android *redmi = new Android();
    redmi->Make_Call();
    redmi->Send_SMS();
    redmi->Take_Selfie();
    delete redmi;
    redmi = nullptr;

    if (redmi != nullptr)
        redmi->Make_Call();
    else
        log("The value is " << redmi);
    return 0;
}