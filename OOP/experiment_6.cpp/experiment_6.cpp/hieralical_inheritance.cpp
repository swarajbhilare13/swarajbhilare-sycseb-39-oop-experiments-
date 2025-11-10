#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    int empID;
    string name;

public:
    Employee(int id, string n) : empID(id), name(n) {}

    void displayEmployee() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class: Manager
class Manager : public Employee {
private:
    string department;

public:
    Manager(int id, string n, string dept) : Employee(id, n), department(dept) {}

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

// Derived class: Developer
class Developer : public Employee {
private:
    string programmingLanguage;

public:
    Developer(int id, string n, string lang) : Employee(id, n), programmingLanguage(lang) {}

    void displayDeveloper() {
        displayEmployee();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

// Main function
int main() {
    Manager m(101, "Swaraj", "goonology");
    Developer d(102, "Arnav", "rotting");

    cout << "--- Manager Details ---" << endl;
    m.displayManager();

    cout << "\n--- Developer Details ---" << endl;
    d.displayDeveloper();

    return 0;
}