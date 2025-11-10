#include <iostream>
using namespace std;

class Student {
private:
    int roll_no;
    float percentage;

public:
    void accept() {
        cout << "Enter Roll No: ";
        cin >> this->roll_no;
        cout << "Enter Percentage: ";
        cin >> this->percentage;
    }

    void display() {
        cout << "\nRoll No: " << this->roll_no << "\nPercentage: " << this->percentage << "%" << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
