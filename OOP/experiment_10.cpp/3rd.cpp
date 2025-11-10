#include <iostream>
using namespace std;

template <typename T>
class Calc {
    T a, b;
public:
    Calc(T x, T y) : a(x), b(y) {}
    void show() {
        cout << "Add: " << a + b << "\nSub: " << a - b
             << "\nMul: " << a * b << "\nDiv: " << a / b << endl;
    }
};

int main() {
    Calc<int> c(10, 2);
    c.show();
    return 0;
}
