#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float percentage;

public:
    
    Student(string n, float p) {
        name = n;
        percentage = p;
    }

    
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    string studentName;
    float studentPercentage;

    
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student percentage: ";
    cin >> studentPercentage;

    
    Student s(studentName, studentPercentage);

    
    s.display();

    return 0;
}