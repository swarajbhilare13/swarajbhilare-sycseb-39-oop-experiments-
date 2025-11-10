#include <iostream>
using namespace std;

class Book {
public:
    string book_name;
    float price;
    int pages;

    void accept() {
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, book_name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Pages: ";
        cin >> pages;
    }
};

int main() {
    Book b1, b2;

    cout << "Enter details for Book 1:\n";
    b1.accept();

    cout << "\nEnter details for Book 2:\n";
    b2.accept();

    cout << "\nBook with higher price: ";
    if (b1.price > b2.price)
        cout << b1.book_name << endl;
    else if (b2.price > b1.price)
        cout << b2.book_name << endl;
    else
        cout << "Both books have the same price." << endl;

    return 0;
}
