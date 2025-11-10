#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream fin("First.txt");
    string word, target = "hello"; int count = 0;
    while (fin >> word) if (word == target) count++;
    cout << "Occurrences of '" << target << "': " << count << endl;
    fin.close();
    return 0;
}
