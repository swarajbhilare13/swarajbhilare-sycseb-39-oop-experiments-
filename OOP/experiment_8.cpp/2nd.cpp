#include <iostream>
using namespace std;

class ILogin {
protected:
    string name, password;
public:
    virtual void accept() = 0;
};

class EmailLogin : public ILogin {
public:
    void accept() {
        name = "email_user"; password = "email_pass";
        cout << "Email: " << name << ", Password: " << password << endl;
    }
};

class MembershipLogin : public ILogin {
public:
    void accept() {
        name = "member_user"; password = "member_pass";
        cout << "Member: " << name << ", Password: " << password << endl;
    }
};

int main() {
    ILogin* login;
    EmailLogin e; MembershipLogin m;
    login = &e; login->accept();
    login = &m; login->accept();
    return 0;
}
