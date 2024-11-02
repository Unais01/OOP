#include <iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    float price;
    int yearOfPublished;
};
// Task 1 ends
struct Student
{
    string name;
    int rollNo;
    float marks;
};
// Task 2 ends
struct Employee
{
    string name;
    int id;
    double salary;

    // Constructor
    // Employee(string n, int i, double s)
    // {
    //     name = n;
    //     id = i;
    //     salary = s;
    // }
    Employee(string name, int id, double salary) : name(name), id(id), salary(salary) {}
    // Task 3 ends
};
struct Address
{
    string city;
    string state;
};
struct Person
{
    string name;
    int age;
    Address address;
    /* data */
};

int main()
{
    Book myBook;
    myBook.title = "C++ Basics";
    // Task 1 ends
    Student student1;
    student1.name = "John";
    student1.marks = 85.5;
    // Task 2 ends
    // Task 3 ends
    // Task 4 ends
    Person person1;
    person1.name = "Alice";
    person1.address.city = "New York";
    cout << person1.address.city;
    // Task 5 ends
    //     6. Access Specifiers in Structs
    // What is the default access level for membe
    // rs in a C++ structure? How can it be changed
    return 0;
}