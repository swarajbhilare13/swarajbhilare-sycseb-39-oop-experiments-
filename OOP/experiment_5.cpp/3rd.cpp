#include <iostream>
#include <string>
using namespace std;

class College {
private:
    int rollno;
    string name;
    string course;

public:
    
    College(int r, string n, string c = "Computer Engineering") {
        rollno = r;
        name = n;
        course = c;
    }

    void display() {
        cout << "\nRoll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    int roll1, roll2;
    string name1, name2, course2;

    
    cout << "Enter roll number for student 1: ";
    cin >> roll1;
    cin.ignore(); 
    cout << "Enter name for student 1: ";
    getline(cin, name1);

    
    cout << "\nEnter roll number for student 2: ";
    cin >> roll2;
    cin.ignore();
    cout << "Enter name for student 2: ";
    getline(cin, name2);
    cout << "Enter course for student 2: ";
    getline(cin, course2);


    College student1(roll1, name1);              
    College student2(roll2, name2, course2);      

    
    cout << "\nStudent Details";
    student1.display();
    student2.display();

    return 0;
}