#include <iostream>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    string class_name;

public:
    void accept() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Class: ";
        getline(cin, class_name);
    }

    void display() {
        cout << "\nStudent Details:\n";
        cout << "Roll No: " << roll_no << "\nName: " << name << "\nClass: " << class_name << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
