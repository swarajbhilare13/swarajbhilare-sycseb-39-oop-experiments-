#include <iostream>
using namespace std;

class City {
public:
    string name;
    long population;

    void accept() {
        cout << "Enter City Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Population: ";
        cin >> population;
    }
};

int main() {
    City cities[5];
    int maxIndex = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "\nEnter details for City " << i + 1 << ":\n";
        cities[i].accept();
        if (cities[i].population > cities[maxIndex].population)
            maxIndex = i;
    }

    cout << "\nCity with highest population: " << cities[maxIndex].name << endl;
    return 0;
}
