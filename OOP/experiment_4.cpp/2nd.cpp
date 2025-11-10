#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
public:
    int num1;
    void accept() {
        cout << "Enter number from Class A: ";
        cin >> num1;
    }
    friend void findGreatest(A, B);
};

class B {
public:
    int num2;
    void accept() {
        cout << "Enter number from Class B: ";
        cin >> num2;
    }
    friend void findGreatest(A, B);
};

void findGreatest(A a, B b) {
    int max = (a.num1 > b.num2) ? a.num1 : b.num2;
    cout << "\nGreatest Number: " << max << endl;
}

int main() {
    A objA;
    B objB;
    objA.accept();
    objB.accept();
    findGreatest(objA, objB);
    return 0;
}
