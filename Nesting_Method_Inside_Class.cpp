#include <iostream>
using namespace std;

class Binary
{
private:
    string str;
    void Check_Binary();

public:
    void Get_Binary();
    void Display_Binary();
    void Ones_Compliment();
};

void Binary::Get_Binary()
{
    cout << "Enter the number\n";
    cin >> str;
}
void Binary::Check_Binary()
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "Incorrect Binary Format\n";
            exit(0);
        }
    }
    cout << "Correct Binary Format\n";
}
void Binary::Display_Binary()
{

    cout << str << "\n";
}
void Binary::Ones_Compliment()
{
    Check_Binary();
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    }
}

int main()
{
    Binary b1;
    b1.Get_Binary();
    // b1.Check_Binary();
    b1.Display_Binary();
    b1.Ones_Compliment();
    b1.Display_Binary();

    return 0;
}