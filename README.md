# C++ Object-Oriented Programming (OOP)

## 1. Classes

- A **class** is a blueprint or template for creating objects. It defines a data structure by bundling data (attributes) and functions (methods) that operate on that data.
- In C++, a class is declared using the `class` keyword.
- Example:
  ```cpp
  class Person {
  public:
      string name;
      int age;
      void displayInfo() {
          cout << "Name: " << name << ", Age: " << age << endl;
      }
  };
  ```

## 2. Objects

- An object is an instance of a class. When you create an object, you are essentially creating a variable that has the structure and behavior defined by the class.
- Example:
  ```cpp
  Person unais; // 'unais' is an object of the 'Person' class
  unais.name = "Unais"; // Setting the 'name' attribute of the object
  unais.age = 21; // Setting the 'age' attribute of the object
  unais.displayInfo(); // Calling the 'displayInfo' method
  ```

## 3. Constructor

- A constructor is a special member function that is automatically called when an object is created. It is used to initialize the object's attributes.
- Constructors have the same name as the class and do not have a return type.
