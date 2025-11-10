#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    void accept() {
        cout << "Enter time (HH MM SS): ";
        cin >> hours >> minutes >> seconds;
    }

    int toSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }

    void display() {
        cout << "\nTotal Seconds: " << toSeconds() << endl;
    }
};

int main() {
    Time t;
    t.accept();
    t.display();
    return 0;
}
