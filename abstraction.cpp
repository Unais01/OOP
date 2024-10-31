#include <iostream>
using namespace std;

class SmartPhone
{
public:
    virtual void MakeACall() = 0;
};
class Android : public SmartPhone
{
public:
    void MakeACall() override
    {
        cout << "Android Make a call\n";
    }
};
class AppleiOS : public SmartPhone
{
public:
    void MakeACall() override
    {
        cout << "IPhone Make a call\n";
    }
};

int main()
{
    SmartPhone *smart_phone_pointer_01;
    SmartPhone *smart_phone_pointer_02;
    AppleiOS iphone;
    Android android;
    smart_phone_pointer_01 = &iphone;
    smart_phone_pointer_02 = &android;
    smart_phone_pointer_01->MakeACall();
    smart_phone_pointer_02->MakeACall();

    return 0;
}