#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Function to display Person details
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNumber;

public:
    // Constructor
    Student(string n, int a, int r) : Person(n, a), rollNumber(r) {}

    // Function to display Student details
    void displayStudentDetails() {
        displayPersonDetails(); // Call base class function
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Main function
int main() {
    Student s("Swaraj", 20, 101);
    s.displayStudentDetails();
    return 0;
}