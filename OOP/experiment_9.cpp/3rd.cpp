#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream fin("First.txt");
    string word; int count = 0;
    while (fin >> word) count++;
    cout << "Word Count: " << count << endl;
    fin.close();
    return 0;
}
