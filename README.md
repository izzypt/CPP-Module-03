# CPP-Module-03

### Inheritance

Resources :
- https://www.geeksforgeeks.org/inheritance-in-c/
_____________

Inheritance is a fundamental concept in object-oriented programming that allows a class to inherit properties and behaviors from another class.

Syntax: 

```
class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}

```
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
