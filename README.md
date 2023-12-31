# CPP-Module-03

### Inheritance

Inheritance is a fundamental concept in object-oriented programming that allows a class to inherit properties and behaviors from another class.

Resources :
- https://www.geeksforgeeks.org/inheritance-in-c/
_____________

### Syntax: 

```
class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
```

  - ```derived_class_name```: name of the new class, which will inherit the base class
  - ```access-specifier```: either of ```private```, ```public``` or ```protected```. If neither is specified, ```PRIVATE``` is taken as default
  - ```base-class-name```: name of the base class

    > Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.

Let's consider an example:

```cpp
class Animal {
protected:
    std::string name;
    int age;
public:
    Animal(const std::string& name, int age) : name(name), age(age) {}

    void eat() {
        std::cout << name << " is eating." << std::endl;
    }

    void sleep() {
        std::cout << name << " is sleeping." << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& name, int age) : Animal(name, age) {}

    void bark() {
        std::cout << name << " is barking." << std::endl;
    }
};
```

- In this example, we have a base class `Animal` that defines common properties and behaviors for animals.
- It has a `name` and `age` member variables, as well as member functions `eat()` and `sleep()`.
- The derived class `Dog` inherits from the `Animal` class using the `public` access specifier. 
- This means that all public and protected members of the `Animal` class become part of the `Dog` class. 

As a result, an instance of the `Dog` class has access to the `name`, `age`, `eat()`, and `sleep()` members inherited from the `Animal` class.

The `Dog` class also introduces its own unique behavior with the `bark()` member function.

Now, let's see how inheritance is used in practice:

```cpp
int main() {
    Dog dog("Buddy", 3);
    dog.eat();   // Output: Buddy is eating.
    dog.sleep(); // Output: Buddy is sleeping.
    dog.bark();  // Output: Buddy is barking.

    return 0;
}
```

In the `main()` function, we create an instance of the `Dog` class named `dog` with the name "Buddy" and age 3. 

We can then call the member functions `eat()`, `sleep()`, and `bark()` on the `dog` object, which are inherited from the `Animal` class and defined in the `Dog` class.

It's important to note that there are different access specifiers (`public`, `protected`, and `private`) that control the visibility of inherited members in the derived class. 
  - The `public` specifier allows inherited members to be accessed by objects of the derived class and from outside the class.
  - The `protected` specifier allows inherited members to be accessed by objects of the derived class, but not from outside the class.
  - The `private` specifier hides inherited members from objects of the derived class and from outside the class.


# Class specifiers examples: 

In C++, class specifiers are used to define derived classes (also known as subclasses or child classes) that inherit from a base class (also known as a superclass or parent class).

The class specifiers determine the type of inheritance and access level between the derived and base classes. There are three access specifiers: `public`, `protected`, and `private`. Let's look at some examples to clarify the differences and understand when to use each one:

## Public Inheritance

  In public inheritance, all public members of the base class become public members of the derived class, and all protected members of the base class become protected members of the derived class. 
  Private members of the base class remain inaccessible to the derived class.

  ```cpp
  class Animal {
  public:
      void makeSound() {
          cout << "Animal makes a sound." << endl;
      }
  };
  
  class Dog : public Animal {
  public:
      void bark() {
          cout << "Dog barks." << endl;
      }
  };
  
  int main() {
      Dog dog;
      dog.makeSound(); // Accessible, as it's a public member of the base class.
      dog.bark();      // Accessible, as it's a member of the derived class.
      return 0;
  }
  ```

  Use public inheritance when you want to model an "is-a" relationship, meaning the derived class is a specialized version of the base class.

## Protected Inheritance:
  In protected inheritance, all public and protected members of the base class become protected members of the derived class. Private members of the base class remain inaccessible to the derived class.
  
  ```cpp
  class Person {
  public:
      void introduce() {
          cout << "Hi, I'm a person." << endl;
      }
  };
  
  class Student : protected Person {
  public:
      void learn() {
          cout << "Student is learning." << endl;
      }
  };
  
  int main() {
      Student student;
      student.introduce(); // Not accessible, as it's a protected member of the base class.
      student.learn();     // Accessible, as it's a member of the derived class.
      return 0;
  }
  ```
  
  Use protected inheritance when you want to restrict access to the base class's interface for the derived class but still want the derived class to inherit the functionality.

## Private Inheritance:

  In private inheritance, all public and protected members of the base class become private members of the derived class. Private members of the base class remain inaccessible to the derived class.
  
  ```cpp
  class Shape {
  public:
      void draw() {
          cout << "Drawing a shape." << endl;
      }
  };
  
  class Circle : private Shape {
  public:
      void drawCircle() {
          cout << "Drawing a circle." << endl;
          draw(); // Accessible since it's a private member of the derived class.
      }
  };
  
  int main() {
      Circle circle;
      circle.drawCircle(); // Accessible, as it's a member of the derived class.
      circle.draw();       // Not accessible, as it's a private member of the derived class.
      return 0;
  }
  ```
  
  Use private inheritance when you want to implement a "has-a" relationship, meaning the derived class has the functionality of the base class but is not a specialized version of it.

Public inheritance is the most common form of inheritance used in C++ for modeling hierarchical relationships, while protected and private inheritance are used more sparingly for specific situations like access control or component reuse. 

Always favor composition over inheritance when possible, as it often leads to more flexible and maintainable code.

## Access to privste/public members

When I say a member is "accessible from any part of the program, even outside the class," it means that the member can be accessed and used in any function or code block within the program, not just within the class where it is defined. Examples to illustrate this:

```cpp
class MyClass {
public:
    int publicVariable;

    void publicFunction() {
        std::cout << "This is a public function." << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.publicVariable = 42; // Accessing the public member variable outside the class.
    obj.publicFunction();    // Calling the public member function outside the class.
    return 0;
}
```

- In this example, we have a class `MyClass` with a public member variable `publicVariable` and a public member function `publicFunction()`. 
- Inside the `main()` function, we create an object `obj` of type `MyClass`, and then we can directly access and modify the `publicVariable` and call the `publicFunction()` on this object because they are marked as `public`. 
- This is possible because the `public` members are accessible from any part of the program.

Now, let's see what happens if we try to access private members from outside the class:

```cpp
class MyClass {
private:
    int privateVariable;

public:
    void setPrivateVariable(int value) {
        privateVariable = value;
    }

    int getPrivateVariable() const {
        return privateVariable;
    }
};

int main() {
    MyClass obj;
    obj.privateVariable = 42; // Error: Cannot access private member variable outside the class.
    obj.setPrivateVariable(42); // This is allowed, as we are using a public member function to set the private variable.
    std::cout << obj.getPrivateVariable() << std::endl; // This is allowed, as we are using a public member function to access the private variable.
    return 0;
}
```

- In this example, we have a class `MyClass` with a private member variable `privateVariable`.
- When we try to access `privateVariable` directly outside the class, it results in an error because private members are not accessible outside the class.
- However, we can still access and modify the `privateVariable` using public member functions `setPrivateVariable()` and `getPrivateVariable()`.
- This demonstrates how private members can be controlled and used through public member functions.

Remember, the idea behind access specifiers is to control the visibility of members and to enforce good encapsulation and data hiding practices in your classes. Public members are accessible from anywhere, private members are only accessible within the class itself, and protected members are accessible by derived classes.
