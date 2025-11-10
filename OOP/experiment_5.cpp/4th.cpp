#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    float percentage;

public:
    Student() {
        rollno = 0;
        name = "Unknown";
        percentage = 0.0;
    }

    
    Student(int r, string n) {
        rollno = r;
        name = n;
        percentage = 0.0;
    }

    
    Student(int r, string n, float p) {
        rollno = r;
        name = n;
        percentage = p;
    }

    
    void display() {
        cout << "\nRoll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Student s1;

    
    Student s2(101, "xyz");

    
    Student s3(102, "abc", 87.5);

    cout << "Student 1 ";
    s1.display();

    cout << "Student 2 ";
    s2.display();

    cout << "Student 3 ";
    s3.display();

    return 0;
}