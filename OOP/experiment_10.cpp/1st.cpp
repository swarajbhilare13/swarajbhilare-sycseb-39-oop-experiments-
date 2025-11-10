#include <iostream>
using namespace std;

template <typename T>
T sum(T a[], int n) {
    T s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}

int main() {
    int i[10] = {1,2,3,4,5,6,7,8,9,10};
    float f[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.0};
    double d[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sum(i,10) << endl;
    cout << sum(f,10) << endl;
    cout << sum(d,10) << endl;
    return 0;
}
