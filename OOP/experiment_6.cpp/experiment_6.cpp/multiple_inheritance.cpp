#include <iostream>
using namespace std;

// Base class 1
class Academic {
protected:
    float marks;

public:
    Academic(float m) : marks(m) {}

    void displayAcademic() {
        cout << "Academic Marks: " << marks << endl;
    }
};

// Base class 2
class Sports {
protected:
    float sportsScore;

public:
    Sports(float s) : sportsScore(s) {}

    void displaySports() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

// Derived class
class Result : public Academic, public Sports {
public:
    Result(float m, float s) : Academic(m), Sports(s) {}

    void displayTotal() {
        float total = marks + sportsScore;
        displayAcademic();
        displaySports();
        cout << "Total Score: " << total << endl;
    }
};

// Main function
int main() {
    Result r(85.5, 14.5);
    r.displayTotal();
    return 0;
}