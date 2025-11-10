#include <iostream>
using namespace std;

class Sample {
private:
    int value;

public:
    void accept() {
        cout << "Enter value: ";
        cin >> value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    friend void swapValues(Sample &, Sample &);
};

void swapValues(Sample &s1, Sample &s2) {
    int temp = s1.value;
    s1.value = s2.value;
    s2.value = temp;
}

int main() {
    Sample s1, s2;
    cout << "Enter value for first object:\n";
    s1.accept();
    cout << "Enter value for second object:\n";
    s2.accept();

    cout << "\nBefore Swap:\n";
    s1.display();
    s2.display();

    swapValues(s1, s2);

    cout << "\nAfter Swap:\n";
    s1.display();
    s2.display();

    return 0;
}
