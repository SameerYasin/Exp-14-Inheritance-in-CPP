# Exp-14-Inheritance-in-CPP

# Experiment 14: Inheritance in C++

## Aim
The aim of this experiment is to study and implement different types of inheritance in C++ to understand how classes can derive properties and behaviors from other classes.

## Tools Used
- VS Code or Programiz online compiler

## Theory
Inheritance in C++ is a fundamental concept of object-oriented programming that allows a class (derived class) to acquire properties and behaviors (data members and member functions) of another class (base class). It promotes code reusability and hierarchical classification of classes.  

### Types of Inheritance
1. **Single Inheritance**  
   A derived class inherits from a single base class. This is the simplest form of inheritance.  

2. **Multiple Inheritance**  
   A derived class inherits from more than one base class, combining properties and behaviors from multiple sources.  

3. **Multilevel Inheritance**  
   A class is derived from a derived class, forming a chain of inheritance.  

4. **Hierarchical Inheritance**  
   Multiple classes inherit from a single base class.  

5. **Access Specifiers in Inheritance**  
   Access specifiers (public, private, protected) control the visibility of base class members in the derived class.

## Programs

### Program-1: Single Inheritance
This program demonstrates single inheritance, where a derived class inherits properties from a single base class.  

**Algorithm**
1. Define a base class with data members and functions.
2. Define a derived class using the `:` syntax to inherit from the base class.
3. Access base class members in the derived class.
4. Create objects of the derived class and display inherited behavior.

### Program-2: Multiple Inheritance
This program demonstrates multiple inheritance, where a derived class inherits from two base classes.  

**Algorithm**
1. Define two base classes with their own data members and functions.
2. Define a derived class that inherits from both base classes.
3. Access members from both base classes in the derived class.
4. Create objects of the derived class and demonstrate combined behavior.

### Program-3: Multilevel Inheritance
This program shows multilevel inheritance, where a derived class is further inherited by another class.  

**Algorithm**
1. Define a base class with data members and functions.
2. Define a derived class inheriting from the base class.
3. Define a second derived class inheriting from the first derived class.
4. Create objects of the second derived class and display inherited properties from both parent classes.

### Program-4: Hierarchical Inheritance
This program demonstrates hierarchical inheritance, where multiple derived classes inherit from a single base class.  

**Algorithm**
1. Define a base class with data members and functions.
2. Define multiple derived classes inheriting from the same base class.
3. Create objects of each derived class and demonstrate inherited behavior.

### Program-5: Access Specifiers in Inheritance
This program demonstrates how public, protected, and private access specifiers affect inherited members.  

**Algorithm**
1. Define a base class with members using different access specifiers.
2. Define a derived class inheriting from the base class using `public`, `protected`, or `private`.
3. Access base class members from the derived class and display visibility rules.

## Conclusion
Through these programs, I explored various types of inheritance in C++. I understood how a derived class can inherit properties and behaviors from base classes in different ways. Single, multiple, multilevel, and hierarchical inheritance help in structuring code efficiently. Access specifiers provide control over which members of the base class are accessible in derived classes. Overall, inheritance improves code reusability, readability, and maintainability in C++ programming.

