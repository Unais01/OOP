#include <iostream>
using namespace std;
// Task 1
// Question 1: OOP Concepts
// Task: Create a class hierarchy for a Shape class and its derived classes Circle and Rectangle. Implement the following:

// A base class Shape with a pure virtual function area() that returns the area of the shape.
// Derived classes Circle and Rectangle that implement the area() method.
// A static member variable in the base class that keeps track of the number of shape objects created.
// Requirements:

// Implement constructors for the classes.
// Include a function to display the number of shape objects created.
class Shape
{
public:
    static int object_count;

public:
    virtual float area(void) = 0;
};
int Shape::object_count = 0;

class Circle : public Shape
{
    int radius;

public:
    float area(void) override
    {
        return (2 * 3.14) * (radius * radius);
    }
    Circle(int r) : radius(r)
    {
        object_count++;
    }
};
class Rectangle : public Shape
{
    float length, bredth;

public:
    float area(void)
    {
        return length * bredth;
    }
    Rectangle(int l, int b) : length(l), bredth(b)
    {
        object_count++;
    }
};
// Task 1 Ends

// Task 2
// Question 2: Friend Functions
// Task: Create a class Box that represents a box with three dimensions (length, width, height). Implement a friend function calculateVolume() that calculates the volume of the box.

// Requirements:

// The Box class should have a constructor that initializes the dimensions.
// The friend function should access the private members of the Box class.
class Box

{
private:
    float length, width, height;

public:
    Box(float l, float w, float h) : length(l), width(w), height(h) {}
    friend float calculate_volume(Box &obj);
};
float calculate_volume(Box &obj)
{
    return obj.height * obj.length * obj.width;
}
// Task 2 Ends
// Task 3
class Account
{
protected:
    int account_num;
    int balance = 0;

public:
    void deposite_money(int deposite_money_amt)
    {
        balance += deposite_money_amt;
        cout << "money deposited successfully!\n";
    }
    void withdrawl_money(int withdrawl_money_amt)
    {
        if (withdrawl_money_amt > balance)
            cout << "Not have sufficent funds\n";
        else
            balance -= withdrawl_money_amt;

        cout << "money withdrawl successfully!\n";
    }
    Account(int accNum) : account_num(accNum) {}
};
class Customer : public Account
{
private:
    string name;

public:
    Customer(int accNum, string n) : Account(accNum), name(n) {}
    friend void customer_detail(Customer &obj);
};
void customer_detail(Customer &obj)
{
    cout << "The customer with account number " << obj.account_num << " has name " << obj.name << endl;
    cout << "Available Balance: " << obj.balance << endl;
}
int main()
{
    // Task 1
    // Circle *c = new Circle(2.0);
    // Rectangle *r = new Rectangle(2.0, 2.0);
    // float circle_area = c->area();
    // float rectangle_area = r->area();
    // cout << circle_area << " " << rectangle_area << endl;
    // cout << Shape::object_count << endl;
    // Task 1 Ends
    // Task 2
    // Box box = Box(2.0, 2.0, 2.0);
    // cout << calculate_volume(box);
    // Task3
    // Question 3: Dynamic Memory Allocation
    // Task: Write a program that dynamically allocates an array of integers, fills it with random values, and then calculates the average of those values. Ensure to deallocate the memory properly after use.

    // Requirements:

    // Use dynamic memory allocation to create the array.
    // Include error handling for memory allocation.
    // Use appropriate techniques for calculating and displaying the average.
    // int size = 5;
    // int *ptr_array = new int[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> ptr_array[i];
    // }
    // int sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     sum += ptr_array[i];
    // }
    // int avg = sum / size;
    // cout << "Avg is " << avg << endl;
    // delete ptr_array;
    // ptr_array=nullptr;
    // Task3 Ends
    // Task4
    //    Question 4: Complete OOP Example
    // Task: Design a simple banking system with classes Account and Customer.

    // The Account class should have attributes for account number and balance. It should provide methods for depositing and withdrawing money.
    // The Customer class should have a name and a Account object.
    // Implement a friend function to display the details of a customer along with their account balance.
    // Requirements:

    // Include constructors for both classes.
    // Ensure proper encapsulation and data hiding.
    // Customer &c1 = new c(307569545, 0, "John doe");
    // Customer c1 = Customer(307569545, "John doe");
    // Customer c2 = Customer(507670000, "Harry william");

    // customer_detail(c1);
    // customer_detail(c2);
    // c1.deposite_money(25000);
    // c2.deposite_money(70000);
    // c1.withdrawl_money(1000);
    // c2.withdrawl_money(50000);
    // customer_detail(c1);
    // customer_detail(c2);
    // TASK 4 ENDS
    return 0;
}