#include <iostream>
using namespace std;

class Account {
public:
    int account_no;
    float balance;

    void accept() {
        cout << "Enter Account No: ";
        cin >> account_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void displayWithInterest() {
        if (balance >= 5000) {
            float interest = balance * 0.05;
            cout << "Account No: " << account_no << ", Balance: " << balance
                 << ", Interest: " << interest << endl;
        }
    }
};

int main() {
    Account acc[10];

    for (int i = 0; i < 10; ++i) {
        cout << "\nEnter details for Account " << i + 1 << ":\n";
        acc[i].accept();
    }

    cout << "\nAccounts with balance >= 5000 and interest:\n";
    for (int i = 0; i < 10; ++i) {
        acc[i].displayWithInterest();
    }

    return 0;
}
