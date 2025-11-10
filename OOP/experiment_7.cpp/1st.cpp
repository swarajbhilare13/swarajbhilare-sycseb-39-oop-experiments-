#include <iostream>
using namespace std;

void area(int l, int b) { cout << "Lab Area: " << l * b << endl; }
void area(int side)     { cout << "Classroom Area: " << side * side << endl; }

int main() {
    area(10, 20);  // Lab
    area(15);      // Classroom
    return 0;
}
