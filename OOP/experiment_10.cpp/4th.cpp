#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[10]; int top = -1;
public:
    void push(T x) { if (top < 9) arr[++top] = x; }
    void pop() { if (top >= 0) top--; }
    void show() {
        for (int i = 0; i <= top; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(1); s.push(2); s.push(3);
    s.show();
    s.pop();
    s.show();
    return 0;
}
