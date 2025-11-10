#include <iostream>
using namespace std;

class Result2; // Forward declaration

class Result1 {
public:
    float marks;
    void accept() {
        cout << "Enter marks for Result1: ";
        cin >> marks;
    }
    friend float computeAverage(Result1, Result2);
};

class Result2 {
public:
    float marks;
    void accept() {
        cout << "Enter marks for Result2: ";
        cin >> marks;
    }
    friend float computeAverage(Result1, Result2);
};

float computeAverage(Result1 r1, Result2 r2) {
    return (r1.marks + r2.marks) / 2;
}

int main() {
    Result1 r1;
    Result2 r2;
    r1.accept();
    r2.accept();
    cout << "\nAverage Marks: " << computeAverage(r1, r2) << endl;
    return 0;
}
