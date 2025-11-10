#include <iostream>
using namespace std;

void sum(float a, float b, float c, float d, float e) {
    cout << "Float Sum: " << a + b + c + d + e << endl;
}

void sum(int a[]) {
    int s = 0;
    for (int i = 0; i < 10; i++) s += a[i];
    cout << "Int Sum: " << s << endl;
}

int main() {
    sum(1.1, 2.2, 3.3, 4.4, 5.5);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    sum(arr);
    return 0;
}
