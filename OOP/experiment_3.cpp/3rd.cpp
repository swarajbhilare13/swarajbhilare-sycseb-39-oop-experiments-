#include <iostream>
using namespace std;

class Outer {
private:
    int outer_data;

public:
    void setOuterData(int val) {
        outer_data = val;
    }

    void showOuterData() {
        cout << "Outer Data: " << outer_data << endl;
    }

    class Inner {
    private:
        int inner_data;

    public:
        void setInnerData(int val) {
            inner_data = val;
        }

        void showInnerData() {
            cout << "Inner Data: " << inner_data << endl;
        }
    };
};

int main() {
    Outer o;
    o.setOuterData(100);
    o.showOuterData();

    Outer::Inner i;
    i.setInnerData(200);
    i.showInnerData();

    return 0;
}
