#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class from Person
class Student : public Person {
protected:
    int rollNumber;

public:
    Student(string n, int a, int r) : Person(n, a), rollNumber(r) {}

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Independent class
class Sports {
protected:
    float sportsScore;

public:
    Sports(float s) : sportsScore(s) {}

    void displaySports() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

// Independent class
class Academics {
protected:
    float academicMarks;

public:
    Academics(float m) : academicMarks(m) {}

    void displayAcademics() {
        cout << "Academic Marks: " << academicMarks << endl;
    }
};

// Derived class from Student and Sports (Hybrid Inheritance)
class Result : public Student, public Sports, public Academics {
public:
    Result(string n, int a, int r, float m, float s)
        : Student(n, a, r), Sports(s), Academics(m) {}

    void displayResult() {
        displayStudent();
        displayAcademics();
        displaySports();
        cout << "Total Score: " << academicMarks + sportsScore << endl;
    }
};

// Main function
int main() {
    Result r("Swaraj", 21, 1001, 88.5, 12.0);
    r.displayResult();
    return 0;
}