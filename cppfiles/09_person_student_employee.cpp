#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
    string course;
    int marks;
    int year;
public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}
    void display() override {
        Person::display();
        cout << "Course: " << course << "\nMarks: " << marks << "\nYear: " << year << endl;
    }
};

class Employee : public Person {
    string dept;
    double salary;
public:
    Employee(string n, string d, double s) : Person(n), dept(d), salary(s) {}
    void display() override {
        Person::display();
        cout << "Department: " << dept << "\nSalary: " << salary << endl;
    }
};