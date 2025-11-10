#include <iostream>
using namespace std;

class SumCalculator {
private:
    int n;
    int sum;

public:
    
    SumCalculator(int num) {
        n = num;
        sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
    }

    
    void displaySum() {
        cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    SumCalculator sc(number);
    sc.displaySum();

    return 0;
}