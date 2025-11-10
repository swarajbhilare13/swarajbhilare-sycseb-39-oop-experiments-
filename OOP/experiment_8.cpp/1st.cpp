#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;
public:
    MyString(string s) : str(s) {}
    MyString operator+(MyString s) { return MyString(str + s.str); }
    void show() { cout << str << endl; }
};

int main() {
    MyString a("xyz"), b("pqr");
    MyString c = a + b;
    c.show();
    return 0;
}
