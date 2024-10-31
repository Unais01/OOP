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

## 4. Encapsulation in Object-Oriented Programming

Encapsulation is a key concept in Object-Oriented Programming (OOP) that combines data (attributes) and methods (functions) into a single unit, typically a class. Encapsulation helps maintain data security and integrity by controlling how data is accessed and modified. Here’s a breakdown:

## Why Use Encapsulation?

Encapsulation is essential because it:

- **Hides Data**: Prevents direct access to certain variables by marking them as `private`, protecting them from unintended changes.
- **Controls Access**: Uses `public` methods (getters and setters) to regulate how data is accessed or updated, ensuring data consistency.
- **Improves Modularity**: Groups related data and behavior, making code easier to understand, maintain, and reuse.

# Abstraction in C++

## Overview

Abstraction is a fundamental concept in object-oriented programming (OOP) that focuses on hiding unnecessary details from the user and showing only essential features of an object. In C++, abstraction can be achieved primarily through abstract classes and interfaces, allowing for simplified interaction with complex systems.

## Key Concepts

### 1. Abstract Classes

An abstract class in C++ is a class that has at least one pure virtual function. It serves as a blueprint for other classes, providing a high-level interface while hiding implementation details. Abstract classes cannot be instantiated directly.

- **Syntax**: A pure virtual function is defined by setting it equal to `0` in the declaration.

  ```cpp
  class AbstractClass {
  public:
      virtual void pureVirtualFunction() = 0; // Pure virtual function
  };
  ```

### 2. Interfaces in C++

In C++, abstract classes with only pure virtual functions act as interfaces. They define a contract for derived classes, ensuring they implement specific functionalities without defining how they are implemented.

### 3. Access Modifiers

To achieve effective abstraction, C++ uses access specifiers:

- **Public**: Accessible from outside the class.
- **Private**: Accessible only within the class.
- **Protected**: Accessible within the class and its derived classes.

## Advantages of Abstraction

- **Simplifies Code**: Reduces complexity by providing a simplified interface.
- **Improves Maintainability**: Allows changes in implementation without affecting other parts of the code.
- **Encourages Reusability**: Defines generic behaviors that derived classes can reuse and customize.

## Example of Abstraction Using an Abstract Class

In this example, the `Animal` class is an abstract class with a pure virtual function `makeSound()`. It defines a high-level interface for derived classes without detailing the implementation.

```cpp
#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void makeSound() const = 0;  // Pure virtual function (abstract)
    void sleep() const {
        cout << "Animal is sleeping." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {  // Specific implementation for Dog
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {  // Specific implementation for Cat
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->makeSound();   // Output: Dog barks: Woof Woof!
    cat->makeSound();   // Output: Cat meows: Meow Meow!

    delete dog;
    delete cat;
    return 0;
}
```

# Polymorphism in C++

## Overview

Polymorphism is a core concept in object-oriented programming (OOP) that enables objects to be treated as instances of their parent class. It allows a single interface to represent different underlying forms (types), making it possible to perform the same action in different ways depending on the context. In C++, polymorphism is typically achieved through function overloading, operator overloading, and inheritance.

## Types of Polymorphism

### 1. Compile-Time (Static) Polymorphism

Compile-time polymorphism occurs when the method or operator to be called is resolved during compilation. It is primarily achieved using:

- **Function Overloading**: Defining multiple functions with the same name but different parameter lists.
- **Operator Overloading**: Redefining the behavior of operators for user-defined types.

#### Example: Function Overloading

```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(const string& s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.display(10);          // Calls display(int)
    p.display(3.14);        // Calls display(double)
    p.display("Hello");     // Calls display(string)
    return 0;
}
```

# Inheritance in C++

## Overview

Inheritance is a fundamental concept in object-oriented programming (OOP) that allows one class (derived class) to inherit attributes and methods from another class (base class). This mechanism promotes code reusability and establishes a hierarchical relationship between classes.

## Key Concepts

### 1. Base Class and Derived Class

- **Base Class**: The class from which properties and methods are inherited.
- **Derived Class**: The class that inherits properties and methods from the base class.

### 2. Types of Inheritance

Inheritance can be classified into several types based on the relationships between the classes involved:

#### 1. Single Inheritance

In single inheritance, a derived class inherits from a single base class. This is the simplest form of inheritance.

**Example**:

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function." << endl;
    }
};

class Derived : public Base { // Derived class inherits from Base
public:
    void show() {
        cout << "Derived class show function." << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); // Calls Base class function
    obj.show();    // Calls Derived class function
    return 0;
}

```
