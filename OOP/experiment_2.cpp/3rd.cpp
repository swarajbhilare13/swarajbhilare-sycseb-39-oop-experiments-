#include <iostream>
using namespace std;

class Staff {
public:
    string name;
    string post;

    void accept() {
        cout << "Enter Staff Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Post: ";
        getline(cin, post);
    }

    void displayIfHOD() {
        if (post == "HOD")
            cout << "Staff Name: " << name << endl;
    }
};

int main() {
    Staff staff[5];

    for (int i = 0; i < 5; ++i) {
        cout << "\nEnter details for Staff " << i + 1 << ":\n";
        staff[i].accept();
    }

    cout << "\nStaff with post 'HOD':\n";
    for (int i = 0; i < 5; ++i) {
        staff[i].displayIfHOD();
    }

    return 0;
}
