#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int a) : x(a) {}
    void operator-() { x = -x; }
    void show() { cout << "Value: " << x << endl; }
};

int main() {
    Num n(5);
    -n;
    n.show();
    return 0;
}
