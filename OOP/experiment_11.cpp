#include <iostream>
using namespace std;

template <typename T>
class Vector {
    T arr[10]; int size;
public:
    void create(T a[], int n) {
        size = n;
        for (int i = 0; i < n; i++) arr[i] = a[i];
    }
    void modify(int index, T val) {
        if (index >= 0 && index < size) arr[index] = val;
    }
    void multiply(T scalar) {
        for (int i = 0; i < size; i++) arr[i] *= scalar;
    }
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i < size - 1) cout << ",";
        }
        cout << ")" << endl;
    }
};

int main() {
    Vector<int> v;
    int data[5] = {10, 20, 30, 40, 50};
    v.create(data, 5);
    v.modify(2, 99);      // Change 3rd element to 99
    v.multiply(2);        // Multiply all by 2
    v.display();          // Output: (20,40,198,80,100)
    return 0;
}
