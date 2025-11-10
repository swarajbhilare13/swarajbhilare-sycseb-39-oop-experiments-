#include <fstream>
using namespace std;

int main() {
    ifstream fin("First.txt");
    ofstream fout("Second.txt");
    char ch;
    while (fin.get(ch)) fout.put(ch);
    fin.close(); fout.close();
    return 0;
}
