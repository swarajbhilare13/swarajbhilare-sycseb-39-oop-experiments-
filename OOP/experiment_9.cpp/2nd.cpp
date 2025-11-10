#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream fin("First.txt");
    char ch; int digits = 0, spaces = 0;
    while (fin.get(ch)) {
        if (isdigit(ch)) digits++;
        if (isspace(ch)) spaces++;
    }
    cout << "Digits: " << digits << ", Spaces: " << spaces << endl;
    fin.close();
    return 0;
}
